#include <stdio.h>
#include <time.h>

int main( void )
{
   long int i=0;
   time_t comienzo, final;
   struct tm *tiempoComienzoPtr, *tiempoFinalPtr;

   comienzo = time( NULL );
   for( i=0; i<10000; i++ )   printf( "-" );
   final = time( NULL );

   printf( "\nComienzo: %u s\n", comienzo );
   printf( "Final: %u s\n", final );
   printf( "Numero de segundos transcurridos desde el comienzo del programa: %f s\n", difftime(final, comienzo) );

   tiempoComienzoPtr = gmtime( &comienzo );
   tiempoFinalPtr = gmtime( &final );
   printf( "Comienzo: %s\n", asctime(tiempoComienzoPtr) );
   printf( "Final: %s\n", asctime(tiempoFinalPtr) );

   return 0;
}