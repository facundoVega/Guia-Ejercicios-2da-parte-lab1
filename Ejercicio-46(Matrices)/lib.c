#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define FILA 100
#define COLUMNA 6


/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_TRANSACCION\n");
        printf("\t2_LISTAR\n");
        printf("\t3_SALIR\n\n\n\n");
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
    while(opcion<1||opcion>3);
    
    return opcion;
    
    
    
}


void operacion(float mat[][COLUMNA])
{
     int nroCliente;
     int posicion;
     int opcion;
     float monto;
     
         nroCliente=pedir_y_validar_entero("numero de cliente",FILA,1);
         posicion=buscar_elemento(mat,0,nroCliente);
         opcion=mostrar_y_validar_transaccion();    
         monto=pedir_y_validar_flotante("monto de la operacion",0);
         
         switch(opcion)
         {
                       case 1:
                            depositar(mat,monto,posicion);
                            break;
                       
                       case 2:
                            extracciones(mat,monto,posicion);
                            break;
                       
                       
         }
     
     
     
     
}


void listar(float mat[][COLUMNA])
{
     

     
     mostrar_y_listar_matriz(mat);
     mostrar_mayor_deposito(mat);
     
     
     
     
     
     
}
