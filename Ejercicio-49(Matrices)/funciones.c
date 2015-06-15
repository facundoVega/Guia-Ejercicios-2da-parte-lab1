#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define FILA 10
#define COLUMNA 8


/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("Ingrese codigo de la operacion que desea realizar:\n\n\n");
        printf("\t1_Ingreso de pedido\n");
        printf("\t2_Reaprovisionamiento\n");
        printf("\t3_Registro de inicio del mes\n");
        printf("\t4_Listar\n");
        printf("\t5_Salir\n");
        

        
     
     
     
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
    while(opcion<1||opcion>5);
    
    return opcion;
    
    
    
}



/*
/*pide y recibe un numero de tipo float por pantalla.
/*La cadena de caracteres recibida como parametro se mostrara en pantalla para indicar al ususario que valor debera ingresar
*/
float pedir_flotante(char mensaje[])
{
      float num;
      
      printf("Ingrese %s\n", mensaje);
      fflush(stdin);
      scanf("%f", &num);
      system("cls");
      
      return num;
      
      
      
      
}

/*pide y valida un numero flotante,valida que sea mayor al minimo recibido como parametro
/*tambien recibe  una cadena de caracteres que se mostrara en pantalla para indicar al usuario que es lo que debe ingresar
*/

float pedir_y_validar_flotante(char mensaje[],float min)
{
      int a=0;
      double aux;
      float num;
      
      do
      {
             if(a)
                  printf("ERROR,el monto debe ser mayor a $%.2f,Ingrese nuevamente\n");
                  
             aux=pedir_flotante(mensaje);
             a=1;
             
      }
      while(aux<min);
      num=aux;
      
      return num;
      
      
      
      
      
}



/*Inicializa una matriz de tipo float a un numero especifico
/*el cual es recibido por parametro
*/
void inicializar_matriz(float mat[][COLUMNA],float num)
{
     int i,j;
     
     for(i=0;i<FILA;i++)
     {
                        for(j=0;j<COLUMNA;j++)
                        {
                                              mat[i][j]=num;
                                              
                                              
                                              
                        }
                        
                        
     }
     
     
     
     
     
}



/*
/*funcion que verifica si existen datos cargados al sistema en una columna especificada pasada como parametro.
/*si  hay al menos un dato retorna 1 de lo contrario retornara 0.
*/

int hay_datos(float mat[][COLUMNA],int numCol)
{
    
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]!=-1)
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

void ordenar_matriz(float mat[][COLUMNA])
{
     int i,j,k;
     float auxVec[COLUMNA];
     
     for(i=0;i<FILA-1;i++)
     {
                        for(j=i+1;j<FILA;j++)
                        {
                                             if(mat[i][5]>mat[j][5])
                                             {
                                                    for(k=0;k<COLUMNA;k++)
                                                    {
                                                                          auxVec[k]=mat[i][k];
                                                                          mat[i][k]=mat[j][k];
                                                                          mat[j][k]=auxVec[k];
                                                                          
                                                                          
                                                    }                
                                                                    
                                                                    
                                                                    
                                             }
                                             
                                             
                        }
                        
                        
     }
     
     
     
     
}

void mostrar_matriz(float mat[][COLUMNA])
{
     int i,j;
     int pos=4;
     
       printf("COD PIEZA:  CANT INICIAL:  TOT RECIBIDO:  TOT ENTREGADO: TOT RECHAZADO:  SALDO:\n");
     
     for(i=0;i<FILA;i++)
     {
                        for(j=0;j<COLUMNA-2;j++)
                        {
                                                if(j==5)
                                                {
                                                       gotoxy(72,i+2); printf("$%.2f\n", mat[i][j]);
                                                        
                                                        
                                                }
                                                else
                                                {
                                                    gotoxy(pos,i+2);printf("%.0f", mat[i][j]);
                                                    pos=pos+14;
                                                    
                                                }
                                                
                                                
                                                
                                                
                        }
                        
                        pos=4;
                        
     }
     system("PAUSE");
     system("cls");
     
     
}

void gotoxy(int x, int y)
{
     HANDLE hCon;
     
     hCon=GetStdHandle(STD_OUTPUT_HANDLE);
     
     COORD dwPos;
     
     dwPos.X=x;
     dwPos.Y=y;
     
     
     SetConsoleCursorPosition(hCon,dwPos);
     
     
     
}





/*busca un elemento en una matriz y en caso de encontrarlo devuelve la posicion en donde se encuentra
/*de no  encontrarlo devuelve -1.
*/
int buscar_elemento(float mat[][COLUMNA],int numCol,int num)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==num)
                       {
                                              return i;
                                              
                                              
                       }
                       
                       
                       
    }
    return -1;
    
    
    
    
    
    
}


