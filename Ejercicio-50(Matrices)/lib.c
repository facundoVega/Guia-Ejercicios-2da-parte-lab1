#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define FILA 8
#define COLUMNA 7



void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_REGISTRAR REVISTA\n");
        printf("\t2_MODIFICAR CANTIDAD DE EJEMPLARES VENDIDOS\n");
        printf("\t3_LISTAR\n");
        printf("\t4_SALIR\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
}


/*
 *muestra un menu en por pantalla y recibe un valor correspondiente a una de las acciones del menu.
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
    while(opcion<1||opcion>4);
    
    return opcion;
    
    
    
}


void registrar(float datos[][COLUMNA])
{
     if(hay_espacio(datos,0))
     {
                             int nroRevista;
                             int a=0;
                             int resp;
                             int pos;
                             
                             while(a==0)
                             {
                                        nroRevista=pedir_y_validar_entero("numero de la revista a registrar",8,1);
                                        if(validar_repeticion(datos,(float)nroRevista,0))
                                        {
                                                    resp=preguntar_y_validar("El numero ingresado pertenece a una revista registrada");
                                                    switch(resp)
                                                    {
                                                                case 2:
                                                                     a=1;
                                                                     break;
                                                                
                                                                
                                                    }
                                 
                                                                              
                                                                              
                                        }
                                        else
                                        {
                                                                              
                                                                              pos=nroRevista;
                                                                              pos--;                                
                                                                              datos[pos][0]=(float)nroRevista;
                                                                              ingreso_y_calculos_datos_matriz(datos,pos);
                                                                              a=1;    
                                         }                                    
                             }

                             
                             
     }
     else
     {
         printf("Ya no hya mas espacios disponible para almacenar revistas\n");
         system("PAUSE");
         system("cls");
         
         
     }
     
     
     
     
     
}


void modificar(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
                         int nroFila;
                         int posicion;
                         int a=0;
                         int resp;
                         
                         while(a==0)
                         {
                                    nroFila=pedir_y_validar_entero("numero de la revista a modificar ",8,1);
                                    posicion=buscar_elemento(mat,0,nroFila);
                                    
                                    if(posicion==-1)
                                    {
                                                                                            
                                                    resp=preguntar_y_validar("El numero ingresado no pertenece a una revista registrada");
                                                    switch(resp)
                                                    {
                                                                case 2:
                                                                     a=1;
                                                                     break;
                                                                     
                                                                
                                                    }
                                                    
                                                    
                                                    
                                    }
                                    else
                                    {
                                        modificar_datos_matriz(mat,posicion);
                                        a=1;
                                        
                                        
                                    }
                         
                         }
     }
     else
     {
         
          mensaje_no_disponible();
         
     }
     
     
}

void ordenar_listar(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
           ordenar(mat,5);
                         
           listar_matriz(mat);
                         
     }
     else
     {
         mensaje_no_disponible();
         
         
         
     }
     
     
     
     
}
