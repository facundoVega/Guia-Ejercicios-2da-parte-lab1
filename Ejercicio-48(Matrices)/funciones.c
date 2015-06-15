#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"



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

/*
/*Verifica si hay espacio disponible en la matriz pero de forma logica
/*si hay espacio retorna uno ,sino retorna 0.
/*La columna en la que verifica esta funcion es la que pertenece al numero que se pasa como parametro("int numCol")
*/
int hay_espacio(float mat[][COLUMNA],int numCol)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==-1)
                       {
                                             return 1;
                                         
                                         
                       }
                       
                       
    }
    return 0;
    
    
    
    
}

/*Verifica que el numero recibido como parametro("int num"), no se encuentre en una columna(espicificada como "int numCol")
/*de la matriz.
/*si el numero se reptire retornara 1 de lo contrario retornara 0.
*/
int verificar_repeticion(float mat[][COLUMNA],float num,int numCol)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==num)
                       {
                                              return 1;
                                              
                                              
                                              
                       }
                       
                       
                       
                       
    }
    return 0;
    
    
    
    
    
    
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

/*Recibe dos parametros uno de ellos corresponde al monto y el otro al porcentaje ,calcula el porcentaje con estos valores,
/*y devuelve el total.
*/

float calcular_porcentaje(float monto,float porc)
{
      float total;
      
      total=(monto*porc)/100;
      
      return total;
      
      
      
      
      
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


/*
/*Muestra un mensaje en pantalla cuando la opcion seleccionada no esta disponible por falta de registros al programa.
*/

void mensaje_no_disponible()
{
     printf("No se ingresaron datos  al programa por lo tanto esta opcion no esta disponible\n\n\n");
     printf("ingrese cualquier tecla para volver al menu principal\n");
     getch();
     system("cls");
     
     
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


void mostrar_matriz(float mat[][COLUMNA])
{
     int i,j;
     int a=0;
     printf("N%c de legajo: Sueldo Basico: Jubilacion: O.Social: Antiguedad:  SueldoNeto:\n\n",248);
     
     
     for(i=0;i<FILA;i++)
     {
                        if(a)
                             break;
                             
                        for(j=0;j<COLUMNA;j++)
                        {
                                              if(mat[i][j]!=-1)
                                              {
                                                               if(j==0)
                                                               {
                                                                             printf("\t%.0f\t", mat[i][j]);
                                                                             
                                                                             
                                                               }
                                                               else
                                                               {
                                                               
                                                                
                                                                   printf(" $%.2f    ", mat[i][j]);
                                                                   
                                                                   
                                                                }
                                              }
                                              else
                                              {
                                                  a=1;
                                                  break;
                                                  
                                              }
     
                                              
                                              
                                              
                        }
                        
                        printf("\n");
                        
                        
                        
     }
     
     system("PAUSE");
     system("cls");
     
     
     
     
     
}
/*
/*funcion que retorna el numero mayor de una columna especifica(la cual es pasada como parametro como "int numCol")
/*retorna el numero mayor  encontrado.
*/
float mayor_de_columna(float mat[][COLUMNA],int numCol)
{
      float mayor=0;
      int i=0;
      
      while(mat[i][0]!=-1)
      {
                          if(mat[i][numCol]>mayor)
                          {
                                                  mayor=mat[i][numCol];
                                                  
                                                  
                          }
                          
                          i++;
                          
      }
      
      
      return mayor;
      
}


void mostrar_legajos_mayores(float num,float mat[][COLUMNA])
{
     int i=0;
     
     printf("La cantidad mayor de bonificacion por antiguedad fue de $%.2f\n\n", num);
     printf("Nro de legajos de  obreros con mayor bonificacion de antiguedad:\n");
     
     while(mat[i][0]!=-1)
     {
                         if(mat[i][4]==num)
                         {
                                           printf("%.0f\n", mat[i][0]);
                                           
                                           
                         }
                         i++;
                         
     }
     
     system("PAUSE");
     system("cls");
     
}




void ordenar_por_dato(float mat[][COLUMNA],int numCol)
{
     int limite;
     int i,j,k,a;
     float auxVec[COLUMNA];
     
     limite=limite_fila(mat,0);
     
     
     for(i=0;i<limite-1;i++)
     {
                          
                          
                          for(j=i+1;j<limite;j++)
                          {
                                               
                                               if(mat[i][numCol]>mat[j][numCol])
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
/*
/*funcion que devuelve el limite de filas de la matriz de  donde se encuentre el ultimo elemento registrado.
*/

int limite_fila(float mat[][COLUMNA],int numCol)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==-1)
                       {
                                             return i;
                                             
                                             
                                             
                       }
                       
                       
                       
    }
    return FILA;
    
    
    
    
}

