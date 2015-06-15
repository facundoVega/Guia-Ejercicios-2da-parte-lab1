#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"


#define FILA 10
#define COLUMNA 8


void registrar(float mat[][COLUMNA])
{
     int i;
     
     for(i=0;i<FILA;i++)
     {
                   //asigno autmotaticamente el codigo de la pieza.
                   mat[i][0]=i+1;
                   
                   //pido la cantidad inicial de la pieza y asigno en la posicion que le corresponde.
                   printf("\tREGISTRO PIEZA %d:\n", i+1);     
                   mat[i][1]=pedir_y_validar_flotante("cantidad inicial para  esta pieza",-1);    
                   
                   
                   //pido y asigno el valor de venta de la pieza 
                   mat[i][6]=pedir_y_validar_flotante("precio de esta pieza",0);    
                        
                   //calculo la cantidad total de la pieza en stock y asigno
                   
                   mat[i][7]=mat[i][1];
                   
                   //pido el ingreso para el saldo inicial de la pieza
                   mat[i][5]=pedir_y_validar_flotante("Saldo inicial para la pieza",-1);
                   
                   //Inicializo los campos de total recibido,total entregado y total rechazado a 0
                   
                   mat[i][2]=0;
                   mat[i][3]=0;
                   mat[i][4]=0;
                   
                   
     
     }
     
}

void proveer(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
                         int numPieza;
                         float precioPieza;
                         int cantPieza;
                         int posicion;
                                  
                numPieza=pedir_y_validar_entero("Numero de pieza a reaprovisionar",FILA,1);
                
                 
                 
                precioPieza=pedir_y_validar_flotante("precio  total por piezas",0);
                cantPieza=pedir_y_validar_flotante("cantidad de piezas recibidas ",0);
                posicion=buscar_elemento(mat,0,numPieza);
                
                if(precioPieza>mat[posicion][5])
                {
                                                printf("No se puede realizar el reaprovisionamiento por que el costo de las piezas\n es mayor al saldo  disponible");
                                                system("PAUSE");
                                                system("cls");
                                                
                }
                else
                {
                
                    
                    mat[posicion][2]=cantPieza+mat[posicion][2];
                    mat[posicion][5]=mat[posicion][5]-precioPieza;
                    mat[posicion][7]=mat[posicion][7]+cantPieza;
                    
                    
                    
                }
                         
                         
     }
     else
     {
         printf("No se puede realizar esta operacion por que todavia no\n se realizo el registro del mes\n");
         system("PAUSE");
         system("cls");
         
         
         
     }
     
     
     
     
     
}

void pedido(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
                         int posicion;
                         int numPieza;
                         float cantidadPedida;
                         
                         numPieza=pedir_y_validar_entero("codigo de pieza",FILA,0);
                         cantidadPedida=pedir_y_validar_flotante("cantidad de piezas pedidas",0);
                                                  
                         posicion=buscar_elemento(mat,0,numPieza);
                         
                         if(cantidadPedida>mat[posicion][7])
                         {
                                                            mat[posicion][4]=mat[posicion][4]+1;
                                                            
                                                            
                                                            printf("La cantidad de piezas del pedido supera las disponibles en stock\n");
                                                            system("PAUSE");
                                                            system("cls");
                                                            
                                                            
                         }
                         else
                         {
                             
                             float totalPedido;
                             totalPedido=cantidadPedida*mat[posicion][6];
                             //sumo el total entregado
                             mat[posicion][3]= mat[posicion][3]+cantidadPedida;
                             
                             //sumo el saldo actual.-
                             mat[posicion][5]=mat[posicion][5]+totalPedido;
                             
                             //calculo la cantidad total de las piezas actuales
                             mat[posicion][7]=mat[posicion][7]-cantidadPedida;
                             
                         }
                         
                         
                         
     }
     else
     {
         printf("No se realizo el registro del mes por lo tanto\n esta operacion no esta disponible\n");    
         system("PAUSE");
         system("cls");
         
     }
     
     
     
}


void listar(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
                         ordenar_matriz(mat);
                         mostrar_matriz(mat);

                         
                         
                         
                         
     }
     else
     {
         
         printf("No se puede realizar esta operacion por que todavia no\n se ingresaron datos al sistema\n");
         system("PAUSE");
         system("cls");
         
         
         
     }
     
     
     
     
}
