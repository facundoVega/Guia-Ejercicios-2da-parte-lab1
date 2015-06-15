#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


/*pide un entero.
*/


float pedir_float(char mensaje[])
{
    float num;
    
    printf("Ingrese numero para %s\n", mensaje);
    fflush(stdin);
    scanf("%f", &num);
    system("cls");
    
    return num;
    
    
    
}


float validar_float(char mensaje[],int max,int min )
{
    int a=0;
    float num;
    
    do
    {
        if(a)
             printf("ERROR,el numero ingresado no pertenece al rango para %s,\n que va desde %d hasta %d\n\n\nIntente nuevamente\n",mensaje,min,max);
             
        num=pedir_float(mensaje);
        
        a=1;
             
             
        
        
    }
    while(num>max || num<min);
    
    return num;
    
    
    
    
}
/*valida que la la posicion ingresada no este repetida en la matriz.
*/
int validar_repeticion(float mat[][2],int fila,int columna )
{

            
                                  if(mat[fila][columna]==0.5)
                                  {
                                                             return 1;
                                                             
                                                             
                                  }
                                  else
                                  {
                                      return 0;
                                      
                                      
                                  }
                                  
                                  
                                  
                                  
            
    
    
    
    
    
}

void inicializar_array(int array[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              array[i]=num;
                              
                              
                              
     }
     
     
     
}

void inicializar_matriz2(float mat[][2],float num)
{
     int i,j;
     
     for(i=0;i<FILA;i++)
     
                        for(j=0;j<COLUMNA;j++)
                        {
                                              mat[i][j]=num;
                                              
                                              
                        }
     
     
}
//mostrar por fila.
void mostrar_por_fila(float mat[][COLUMNA])
{
     int i,j;
     
     for(i=0;i<FILA;i++)
     { 
                        
                        for(j=0;j<COLUMNA;j++)
                        {
                                              
                                              printf("%.0f\t", mat[i][j]);
                                              
                                              
                                              
                                              
                        }
                        printf("\n");
     }
     
     
     
     
}
//mostrar por columna.
void mostrar_por_columna(float mat[][COLUMNA])
{
     int i,j;
     
     for(i=0;i<COLUMNA;i++)
     {
                           for(j=0;j<FILA;j++)
                           {
                                              printf("%.0f\t", mat[j][i]);
                                              
                                              
                                              
                                              
                           }
                           
                           printf("\n");
                           
                           
     }
     
     
     
}

