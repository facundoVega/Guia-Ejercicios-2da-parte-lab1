#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <string.h>
#include <windows.h>




#define SIZE_ARRAY 10

/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_REGISTRAR TODOS LOS EMPLEADOS\n");
        printf("\t2_LISTA DE EMPLEADOS MENORES DE 25 ANIOS\n");
        printf("\t3_LISTA DE EMPLEADOS QUE VIVEN EN AVELLANEDA\n");
        printf("\t4_LISTA DE EMPLEADOS MENORES DE 25 ANIOS QUE RESIDEN EN AVELLANEDA\n");
        printf("\t5_LISTA DE TODOS LOS EMPLEADOS\n");
        printf("\t6_SALIR\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
}


/*
 *muestra un menu en ppantalla y recibe un valor correspondiente a una de las acciones del menu.
 *valida que el numero ingresado sea uno de los valores correspondientes al menu
 *devuelve un entero que es la opcion del menu ya validada
 */
int mostrar_y_validar_menu()
{
    int a=0;
    int opcion;
    
    do
    {
        if(a)
             printf("ERROR,el numero ingresado no pertenece a una opcion valida para el menu\nIntente nuevamente\n\n");
             

             mostrar_menu();
             fflush(stdin);
             scanf("%d", &opcion);
             system("cls");
        
             a=1;
        
    }
    while(opcion<1||opcion>6);
    
    return opcion;
    
    
    
}



/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro(empleado p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              p1[i].edad=num;
                              
                              
                              
     }
     
     
     
}


/* recibe el ingreso de una cadena por consola
/*El primer parametro que recibe es para mostrar un mensaje en pantalla en funcion del dato que se quiere obtener.
/*El segundo es donde se va a almacenar la cadena recibida.
*/

void pedir_cadena(char mensaje[],char vector[])
{
     
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     gets(vector);
     system("cls");
     
     
     
     
}



/*recibe el ingreseo de una cadena por consola
/*valida que la cantidad de caracteres ingresados no supere el limite para el dato
/*el primero char que recibe es para el mensaje que se mostrara en pantalla el segundo para almacenar la cadena recibida
/*y el entero es el limite maximo de carateres.
*/
void pedir_y_validar_cadena(char mensaje[],char vector[],int max)
{
     char a=0;
     char aux[500];
     
     do
     {
          if(a)
          {     
                printf("Se excedio el maximo de caracteres a ingresar \nIntente nuevamente\n");
               
          }
          pedir_cadena(mensaje,aux);
          a=1;
          
          
          
     }
     while(strlen(aux)>max||strlen(aux)<1);
     
     strcpy(vector,aux);
     
     
}



 /*pide un entero por pantalla
 *recibe una cadena que es el dato que se mostrara en pantalle para recibir el valor
 *retorna el numero ingresado.
 */
int pedir_entero(char mensaje[])
{
    long int numero;
    
    printf("ingrese %s \n", mensaje);
    fflush(stdin);
    scanf("%d", &numero);
    
    return numero;
    
    
    
}

/*pide un entero y valida que este dentro del ranfo que es pasado como parametro
/*retorna el valor ingresado ya validado.
/*recibe como parametros dos enteros que corresponden al rango de numeros donde tiene que estar el valir ingresado
/*y una cadena de caracteres que es el mensaje que se mostrara por pantalla para que se ingrese el valor.
*/

  int pedir_y_validar_entero(char mensaje[],int max,int min)
{
    int a=0;
    long int aux;
    
    do
    {
         if(a)
         {
              if(aux>max)
              {         
                         printf("Error,El valor de \" %s\" puede ser un valor hasta  %d \nIntente nuevamente\n",mensaje,max);
                         
              }
              else
              {
                  printf("ERROR,el valor de \"%s\" debe ser como minimo %d\nIntente nuevamente\n",mensaje,min);
              }
         }    
         aux=pedir_entero(mensaje);
         system("cls");
         a=1;
         
    }
    while(aux>max||aux<min);
    
    return aux;
    
    
    
    
}

/*retorna un caracter que es leido por pantalla.
*/

char pedir_char(char mensaje[])
{
     char letra;
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     scanf("%c", &letra);
     system("cls");
     
     return letra;
     
     
     
     
     
}
/*pide un caracter por console y valida que sea igual a uno de los dos recibidos como parametros("letra1", "letra2")
/*retorna el caracter validado
*/

char pedir_y_validar_char(char mensaje[],char letra1,char letra2)
{
     int a=0;
     char caracter;
     
     do
     {
          if(a)    
                   printf("ERROR , conteste con %c o con %c en esta pregunta\nIntente nuevamente\n", letra1,letra2);
          
          
          caracter=pedir_char(mensaje);
          a=1;
          caracter =toupper(caracter);
          
          
          
     }
     while(caracter!=letra1 &&caracter!=letra2);
     
     return caracter;
     
     
     
     
}


void gotoxy(int x,int y)
{
     HANDLE hCon; 
     COORD coord; 
     hCon = GetStdHandle (STD_OUTPUT_HANDLE); 
     COORD dwPos;
     
     dwPos.X=x;
     dwPos.Y=y;
     
     SetConsoleCursorPosition(hCon,dwPos);
}


