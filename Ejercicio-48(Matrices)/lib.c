#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"


void mostrar_menu()
{
     printf("\tMENU DE OPCIONES\n\n\n\n");
     printf("\t1_Registrar obrero\n");
     printf("\t2_Listar\n");
     printf("\t3_Informar legajos de mayor bonificacion por antiguedad\n");
     printf("\t4_Listar ordenando por sueldo neto\n");
     printf("\t5_salir\n\n\n");
     printf("ingrese un numero segun la opcion que desea realizar\n");
     
     
     
     
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

void registrar(float mat [][COLUMNA],int *leg)
{
     if(hay_espacio(mat,0))
     {
                                 float basicoyBonificacion=0;
                                int nroLegajo;
                                nroLegajo=pedir_y_validar_entero("numero de legajo del obrero",30,1);
                                if(verificar_repeticion(mat,(float)nroLegajo,0))
                                {
                                                                                printf("El legajo ingresado ya fue registrado\n");
                                                                                system("PAUSE");
                                                                                system("cls");
                                                                                *leg=*leg-1;
                                }
                                else
                                {
                                     mat[*leg][0]=nroLegajo; 
                                     mat[*leg][1]= pedir_y_validar_flotante("Sueldo Basico del obrero",0);
                                     mat[*leg][4]=pedir_y_validar_flotante("bonificacion por antiguedad",0);
                                     
                                     //sumo la bonificacion por antiguedad al sueldo basico.
                                     basicoyBonificacion=mat[*leg][1]+mat[*leg][4];
                                     
                                     //calculo el descuento por  jubilacion y asigno en la matriz
                                     mat[*leg][2]=calcular_porcentaje(basicoyBonificacion, 16);
                                     
                                     //calculo el descuento por obra social y asigno en la matriz
                                     mat[*leg][3]=calcular_porcentaje(basicoyBonificacion,4.5);
                                     
                                     //calculo el sueldo neto y asigno en la matriz.
                                     mat[*leg][5]=basicoyBonificacion-(mat[*leg][2]+mat[*leg][3]);                  
                                    printf("%.0f %.2f %.2f", mat[*leg][0],mat[*leg][1],mat[*leg][5]);
                                }
                                
                           
     }
     else
     {
         printf("No hay mas espacio disponible en el sistema por lo tanto esta opcion no esta disponible\n");
         
     }

     
     
     
     
}


void listar(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
                         mostrar_matriz(mat);
                           
                           
                           
                           
     }
     else
     {
         mensaje_no_disponible();
         
         
         
         
     }
     
     
     
     
     
}



void informar(float mat[][COLUMNA])
{
     if(hay_datos(mat,0))
     {
                         float mayorBonificacion;
                         mayorBonificacion=mayor_de_columna(mat,4);
                         mostrar_legajos_mayores(mayorBonificacion,mat);
                         
                         
     }
     else
     {
         mensaje_no_disponible();
         
         
     }
     
     
}


void ordenar_por_sueldo(float mat[][COLUMNA])
{
     
     if(hay_datos(mat,0))
     {
                         
                         ordenar_por_dato( mat,5);
                         mostrar_matriz(mat);
                           
     }
     else
     {
         mensaje_no_disponible();
         
         
         
     }
     
     
}
