


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
FILE *fp;
FILE *fp1;
struct inven{
  char codigo[10];
  char descrip[30];
  char exist[15];
  char preuni[5];
}inventario;

//  ===  funciones ===
void crear();
void anexar();
void modificar();
void eliminar();
void reporte();




// ----------------PROGRAMA PRINCIPAL ----------------------------
void main()
{

  char resp;

  do
  {
    clrscr();
    printf("\n\n\t\t\t* * * * * MENU DE OPCIONES * * * * *");
    printf("\n\t\t---------------------------------------------------");
    printf("\n\t\t\t      ALTA Y CONTROL DE PRODUCTOS   ");
    printf("\n\t\t-------------------------------------------------\n\n\n\n");
    printf("\t\t\t\t (1) CREAR ARCHIVO  \n");
    printf("\t\t\t\t (2) ANEXAR PRODUCTOS     \n");
    printf("\t\t\t\t (3) MODIFICAR DATOS DEL PRODUCTO     \n");
    printf("\t\t\t\t (4) ELIMINAR             \n");
    printf("\t\t\t\t (5) REPORTE              \n");
    printf("\t\t\t\t (6) SALIR  ........        ");
    printf("\n\n\t\t\t\tSelecciona: ");
    resp=getchar();
    switch(resp)
	 {
	  case '1': crear();
			 break;
	  case '2': anexar();
			break;
	  case '3': modificar();
			 break;
	  case '4': eliminar();
			break;
	  case '5': reporte();
			break;
	  case '6' : exit(1);
    }
  }
  while(resp!='6');
  getch();
}
// === Funcion de crear un archivo ====
void crear()
{
   clrscr();
   char opcion = 's';
   int i=0;
   if ((fp=fopen("inventario.dat","ab"))==NULL)
      printf("\n\n\n\n\t\t< < < Error de apertura de archivo inventario.dat   > > >");
   else
   {
     while(opcion == 's'){
        printf("\n\n ESCRIBE LA CLAVE DEL PRODUCTO (NO EXEDER DE 16 DIGITOS):\t ");
        scanf("%s",&inventario.codigo);
        printf("\n\n ESCRIBE EL NOMBRE DEL PRODUCTO\t ");
        scanf("%s", &inventario.descrip);
        printf("\n\n ESCRIBE LA EXISTENCIA DEL PRODUCTO:\t ");
        scanf("%s", &inventario.exist);
        printf("\n\n ESCRIBE LE PRECIO UNITARIO DEL PRODUCTO:\t ");
        scanf("%s",&inventario.preuni);
        fwrite(&inventario, sizeof(inventario), 1, fp);
        printf("\n\n\n\t\t DESEAS CAPTURAR OTRO PRODUCTO [s/n] : ");
	     opcion = getchar();
        getch();
         }
         }
         fclose(fp);
}
//////////////////anexar/////////////////////////////
void anexar(){
clrscr();
      FILE *add; //Apuntador de tipo archivo
      int opcion = 's';
      int i=0;
      while (((fwrite(&inventario, sizeof(inventario), 1, add))!=0)&&i!=1);  //Se condiciona la escritura en el directorio
          if ((add=fopen("inventario.dat","r+b"))==NULL)//Se verifica la apertura del 'directorio.dat' en modo de lectura y escritura
             printf("\n Error de apertura del archivo inventario.dat\n"); //Alerta a usuario
          else
             printf("\n\n\t\t\t****SE AGREGARA UN NUEVO PRODUCTO****\n\n\a "); //Información al usuario
          if(!add)
             add=fopen("inventario.dat","r+b"); //Se abre el archivo y se pide la información del nuevo elemento (registro)
          else
             while(opcion == 's'){
               fwrite(&inventario, sizeof(inventario), 1, add);
               printf("\n\n Escribe el codigo del producto:\t ");
               scanf("%s",&inventario.codigo);
               printf("\n\n Escribe el nombre del producto:\t ");
               scanf("%s",&inventario.descrip);
               printf("\n\n Escribe la existencia del prodcuto :\t ");
               scanf("%s", &inventario.exist);
               printf("\n\n Escribe el precio unitario:\t ");
               scanf("%s",&inventario.preuni);

               fwrite(&inventario, sizeof(inventario), 1, add);

          printf("\n\n\n\t\t Desea ingresar otro producto [s/n]: ");
          if (opcion='n');
              }
          opcion = getchar();
          getch();

   fclose(add);  //Se guarda y cierra el registro
}
//=================MODIFICAR
// === Funcion modificar ==== elaborada por : Hugo Abarca B.
void modificar(){
		clrscr();
      int opc,i=0;
      char elim[6];
      printf("\nINGRESE EL CODIGO DEL PRODUCTO A MODIFICAR: ");
      scanf("%s",&elim);
      fp=fopen("inventario.dat","r+b");    //Se verifica la apertura del 'directorio.dat' en modo de lectura y escritura

		if(!fp)
         printf("\n Error de apertura del archivo inventario.dat\n");  //alerta al usuario
      else{
         while (((fread(&inventario, sizeof(inventario), 1, fp))!=0)&&i!=1){ //busca la estructura directorio en el puntero
            if(!strcmp(inventario.codigo,elim)){        //Ccompara dos cadenas de caracteres
               // if(inventario.codigo==elim){
                printf("DESCRIPCION        : %s\n",inventario.descrip);
                printf("EXISTENCIA     : %s\n",inventario.exist);
                printf("PRECIO UNITARIO     :$ %s\n",inventario.preuni);

               printf ("\nQUE DESEA MODIFICAR: ");
               printf ("\n\t\t\t1.-DESCRIPCION\n");
               printf("\t\t\t2.-EXISTENCIA\n");
               printf ("\t\t\t3.-PRECIO UNITARIO\n");
               printf("\t\t\t4.-SALIR\n");
               printf("\t\t\tDIGITA TU OPCION :");
               scanf("%d",&opc);
               switch (opc!=4){
                case 1:
                  printf ("\nINGRESA LA NUEVA DESCRIPCION: ");
                  scanf("%s",&inventario.descrip);
                  break;
                case 2:
                  printf ("\nINGRESA LA NUEVA EXISTENCIA ");
                  scanf("%s",&inventario.exist);
                  break;
                case 3:
                  printf ("\nINGRESA EL NUEVO PRECIO UNITARIO ");
                  scanf("%s",&inventario.preuni);
                  break;
               }
             fseek(fp,-sizeof(inventario),SEEK_CUR);
             fwrite(&inventario,sizeof(inventario), 1, fp);
             i=1;
             fclose(fp); // cierre del directorio
            }
         }

      }
}
///=======================================eliminar producto
void eliminar()
               {
               char elim[10];
               clrscr();
   	   		   	printf("\nINGRESE EL CODIGO DEL PRODUCTO PARA ELIMINAR: ");
		      	   	scanf("%s",&elim);
                     fp=fopen("inventario.dat","r+b");
                     fp1=fopen("inventario1.dat","wb");
		         	   if(!fp)
						   	printf("\n Error de apuertura del archivo inventario.dat\n");
						   else{
						         while (((fread(&inventario, sizeof(inventario), 1, fp))!=0)&&(inventario.codigo!=0)){
                              if(!strcmp(inventario.codigo,elim)){
                                 fseek(fp1,sizeof(inventario),SEEK_END);
                                 fseek(fp1,-sizeof(inventario),SEEK_CUR);
                                 fwrite(&inventario,sizeof(inventario), 1, fp1);
			                        fclose(fp1);
                                 fp1=fopen("inventario1.dat","r+b");
                                 clrscr();
                             		printf ("\n\n\n\n\n\n\n\n\n\n\n                   EL PRODUCTO SE HA ELIMINADO CORRECTAMENTE \n");
                                 printf ("\n                          OPRIMA CUALQUIER TECLA PARA CONTINUAR");
                                 getch();
                                 }

                           	}
                        fclose(fp);
                     	fclose(fp1);
                        system("del inventario.dat");
                        system("ren inventario1.dat inventario.dat");

                       }
      			   }
//// ====================================reporte de productos//////////
void reporte (){

int i;
clrscr();     // limpia la pantalla
FILE *invent;   //Asigna un apuntador de tipo archivo
invent = fopen("inventario.dat", "r");   //verifica la apertura en modo lectura del archivo en donde se almacena la informacion
if(invent == NULL) // si el valor del apuntador es iguala NULO
	 {
		printf("\nNo existe archivo");  // manda un mensaje de que no existe el archivo
	 }
       fread(&inventario, sizeof(struct inven), 1, invent);
 						     printf("------------------------------------------------------------------\n");
					        printf("CODIGO   DESCRIPCION\t\tEXISTENCIA\tPRECIO UNITARIO  \n");
                       printf("------------------------------------------------------------------\n");
while(!feof(invent)) //mientras no sea fin de archivo
	{
      gotoxy(2,i);
	  printf("  %s      %s\t\t   %s\t\t      %s \n",inventario.codigo,inventario.descrip,inventario.exist,inventario.preuni);
      gotoxy(9,i);
       fread(&inventario, sizeof(struct inven), 1, invent);
	   }
     fclose(invent); // cierra el archivo
	getch();

   }