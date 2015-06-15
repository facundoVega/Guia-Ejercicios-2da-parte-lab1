#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funcion.h"
#include <windows.h>


#define SIZE_ARRAY 30


/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro(alumno p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              p1[i].legajo=num;
                              
                              
                              
     }
     
     
     
}

/*verifica si hay espacio para ingresar datos  a partir de un miembro de la estructura
/*si encuentra un menos uno retornara 1 y significa que hay espacio de lo contrario no hay espacio  y retornara 0.
*/ 
int hay_espacio(alumno p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].legajo==-1)
                             {
                                                return 1;
                                                
                                                
                                                
                                                
                             }
                             
                             
                             
                             
    }
    return 0;
    
    
    
    
    
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



/*pide y valida un entero pero solo ppara que no sea menor a un minimo (pasado como parametro).
*/
int pedir_validar_entero_min(char mensaje[],int min)
{
    
    int num;
    int a=0;
    
    do
    {
        if(a)
             printf("ERROR, el numero minimo para %s es %d\nIntente nuevamente", mensaje,min);
             
             num=pedir_entero(mensaje);
             system("cls");
        a=1;
        
        
    }
    while(num<min);
    
    
    return num;
    
    
    
    
    
    
    
}
//valida que el numero  recibido como parametro no esste repetido en el array tambien recibido como parametro.

int validar_repeticion(alumno p[],int num)
{
    int i;
    
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].legajo==num)
                             {
                                                 return 1;
                                                 
                                                 
                                                 
                             }
                             
                             
                             
                             
                             
    }
    return 0;
    
    
    
    
    
    
}
//funcion que busca la primer posicion en donde el valor del miebro valga -1.
//devuelve esa posicion.En caso de no encontrar ese valor en ninguna posicion devuelve -1
int buscar_posicion(alumno p[])
{
    int  i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].legajo==-1)
                             {
                                                return i;
                                                
                                                
                                                
                                                
                             }
                             
                             
                             
                             
    }
    return -1;
    
    
    
}






/* recibe el ingreso de una cadena por consola
/*El primer parametro que recibe es para mostrar un mensaje en pantalla en funcion del dato que se quiere obtener.
/*El segundo es donde se va a almacenar la cadena recibida.
*/

void pedir_cadena(char mensaje[],char vector[])
{
     
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     scanf("%s",vector);
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


//Si en el miembro del array de estructuras hay un valor que suea distinto de menos 1 devuelve 1 de lo contrario devuelve 0.
int hay_elemento(alumno p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].legajo!= -1)
                             {
                                              return 1;
                                              
                                              
                                              
                             }
                             
                             
                             
    }
    return 0;
    
    
    
    
    
}

/*Busca si hay igualdad entre el numero entero pasado como parametro y alguno de los valores del miembro del array de estructuras
/*si hay igualdad devuelve la posicion donde hubo la igualdad. sino devolvera -1.
*/
int buscar_elemento(alumno p[],int num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                      if(p[i].legajo==num)
                      {
                                          return i;
                                          
                                          
                                          
                      }       
                             
                             
                             
    }
    return -1;
    
    
    
    
}

void mostrar_array(alumno p[])
{
     int i;
     int a=5;
     printf("\tCALIFICACIONES DE LOS ALUMNOS:\n\n\n\n");
     
     printf("N%c DE LEGAJO:             APELLIDO:           CALIFICACION:", 248);
     
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              
                              if(p[i].legajo!=-1)
                              {
                                                 a++;
                                                 
                                                gotoxy(3,a); printf("%d", p[i].legajo);
                                                 
                                                gotoxy(26,a);printf("%s", p[i].apellido);
                                                 
                                                gotoxy(51,a);printf("%d", p[i].nota);
                                                 
                                                 
                                                 
                                                 
                              }
                              
                              
                              
                              
     }
     printf("\n\n");
     system("PAUSE");
     system("cls");
     
     
     
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


