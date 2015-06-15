#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define COLUMNA 5
#define FILA 100


float pedir_flotante(char mensaje[],int num)
{
      float aux;
      
      printf("Ingrese %s %d\n", mensaje,num);
      fflush(stdin);
      scanf("%f", &aux);
      system("cls");
      
      return aux;
      
      
      
}

float pedir_y_validar_float(char mensaje[],int numMensaje,int max,int min)
{
      float numero;
      int a=0;
      
      do
      {
          if(a)
               printf("ERROR,el valor para %s debe estar en un rango entre %d y %d\nIntente nuevamente\n",mensaje,min,max);
          
          
          numero=pedir_flotante(mensaje,numMensaje);
          a=1;
          
          
      }
      while(numero>max || numero<min);
      
      return numero;
      
      
      

}

//inicializa matriz a un valor especifico.

void inicializar_matriz(float mat[][COLUMNA],float num )
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

//Verifica si hay elemento cargados en una columna especifica.
int hay_elemento(float mat[][COLUMNA],int numCol)
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


int existe_legajo(float mat[][COLUMNA],int nroFila)
{
    
    if(mat[nroFila][0]!=-1)
    {
                           return 1;
                           
    }
    else
    {
        return 0;
    
    }
    
    
}

/*pregunta confirmando si se desea corregir la nota. 
/*
*/
char preguntar_y_validar(float nota)
{
     int a=0;
     char resp;
     
     do
     {
          if(a)
          printf("ERROR,ingrese \"s\"para indicar SI y \"n\" para indicar NO\nIntente nuevamente\n");
          
          printf("La nota del alumno era un %.0f esta seguro que desea corregirla(s/n)\?\n", nota);
          fflush(stdin);
          scanf("%c", &resp);
          tolower(resp);
          system("cls");
          
          a=1;
     }
     while(resp!='s'&&resp!='n');
     return resp;
     
     
     
     
}

/*promedia las notas registradas
*/
void promediar(float mat[][COLUMNA])
{
     int i,j;
     float total=0;
     
     
     for(i=0;i<FILA;i++)
     {
                        if(mat[i][0]!=-1)
                        {
                                         for(j=1;j<COLUMNA-1;j++)
                                         {
                                    
                                    
                                                       total=mat[i][j]+total;
                                                       
                                                       
                        
                                         
                                                
                                                
                                                }
                                                mat[i][j]=total/3; 
                                                total=0;
                        } 
                        
                        
     }
     
     
     
}

void mostrar_lista(float mat[][COLUMNA])
{
     int i,j;
     int a=0;


            printf("N%c LEGAJO:\t1%c TRIMESTRE:\t2%c TRIMESTRE:\t3%c TRIMESTRE:\t PROMEDIO:\n",167,167,167,167);              
            
            for(i=0;i<FILA;i++)
            {
                               if(a)
                                    break;
                               
                               for(j=0;j<COLUMNA;j++)
                               {
                                         if(mat[i][j]!=-1)
                                         {

                                                          
                                                          if(j==4)
                                                          {
                                                                  printf("  %.2f",mat[i][j]);
                                                                  
                                                                  
                                                          }
                                                          else
                                                              printf("%.0f\t     \t",mat[i][j]);
                                                          
                                                          
                                         }
                                         else
                                         {
                                             a=1;
                                             break;
                                             
                                         }           
                                                    
                                                    
                                                    
                               }
                               printf("\n");
            }
            
            printf("\n");
            
     
     system("PAUSE");
     system("cls");
     
}
