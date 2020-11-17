#include <stdio.h>
#include <time.h>

int main( void )
{
   int segundos=0;
   time_t *actualPtr, alarma;
   struct tm *alarmaPtr;

   printf( "Introduzca los segundos en el futuro para la alarma: " );
   scanf( "%d", &segundos );

   *actualPtr = time( NULL );
   alarmaPtr = localtime( actualPtr );
   alarmaPtr->tm_sec += segundos;
   alarma = mktime( alarmaPtr );

   printf( "La hora local: %s\n", ctime(actualPtr) );

   while( difftime( alarma, *actualPtr ) &gt; 0 )
      *actualPtr = time( NULL );

   printf( "ALARMA!!!\n\n" );
   printf( "La hora local: %s\n", ctime(actualPtr) );

   return 0;
}