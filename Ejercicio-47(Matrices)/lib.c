#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define FILA 100
#define COLUMNA 5

void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_INGRESAR NOTA\n");
        printf("\t2_CORREGIR NOTA\n");
        printf("\t3_LISTAR\n");
        printf("\t4_SALIR\n\n\n\n");
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

void ingreso(float mat[][COLUMNA],int leg)
{
     int i;
     
     mat[leg][0]=leg+1;
     
     for(i=1;i<COLUMNA-1;i++)
     {
                             mat[leg][i]=pedir_y_validar_float("nota para trimestre",i,10,1);
                             
                             
     }
     
     
     
     
}

void corregir(float mat[][COLUMNA])
{
     if(hay_elemento(mat,0))
     {
                            
          int nroFila;
          int nroColumna;
          int nota;
          char resp;

               printf("%.0f\n", mat[0][1]);
     
              
                         nroFila=pedir_y_validar_entero("legajo del alumno",FILA,1);
                         nroFila--;
                         if(existe_legajo(mat,nroFila))
                         {
                                nroColumna=pedir_y_validar_entero("trimestre a corregir",3,1);      
                                nota=pedir_y_validar_entero("nueva nota",10,1);   
                                
                                resp=preguntar_y_validar(mat[nroFila][nroColumna]);      
                                if(resp=='s')
                                {
                                             mat[nroFila][nroColumna]=nota;
                                             
                                }   
   
                                                       
                         }
                         else
                         {
                             printf("El legajo ingresado no pertenece a ningun alumno registrado\n");
                             system("PAUSE");
                             system("cls");
                             
                             
                         }
              
                         
                  
     }
     else
     {
         
         mensaje_no_disponible();

         
     }
     
     
     
     
     
}

void listar(float mat[][COLUMNA])
{
     if(hay_elemento(mat,0))
     {
            
            
            promediar(mat);
            
            mostrar_lista(mat);
            
            
                                        
     }
     else
     {
         mensaje_no_disponible();
         
         
         
     }
     
     
     
     
     
}
