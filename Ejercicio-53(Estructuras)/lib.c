#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define SIZE_ARRAY 30



/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_ALTAS\n");
        printf("\t2_MODIFICAR\n");
        printf("\t3_INFORMAR\n");
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
    while(opcion<1||opcion>4);
    
    return opcion;
    
    
    
}


void registrar(alumno p[])
{
     if(hay_espacio(p))
     {
                       int auxLegajo;
                       
                       
                       auxLegajo=pedir_validar_entero_min("Nro de legajo del alumno",1);       
                       if(validar_repeticion(p,auxLegajo))
                       {
                                                          printf("El numero ingresado como legajo ya fue registrado previamente\n");
                                                          system("PAUSE");
                                                          system("cls");
                                                          
                                                          
                                                          
                       }
                       else
                       {
                           int pos;
                           
                           pos=buscar_posicion(p);
                           
                           p[pos].legajo=auxLegajo;
                           pedir_y_validar_cadena("apellido del alumno",p[pos].apellido,20);
                           p[pos].nota=pedir_y_validar_entero("nota del alumno",10,1);
                           
                           
                           
                       }
                        
                        
                        
                        
     }
     else
     {
         printf("no hay mas espacio disponible para ingresar mas alumnos\n");
         system("PAUSE");
         system("cls");
         
         
         
         
         
         
     }
     
     
     
     
     
}


void modificar(alumno p[])
{
     if(hay_elemento(p))
     {
                        int auxLeg;
                        int pos;
                        
                        auxLeg=pedir_validar_entero_min("numero de legajo a modificar",1);
                        pos=buscar_elemento(p,auxLeg);
                        
                        if(pos==-1)
                        {
                                                    printf("El numero ingresado no pertenece al de un legajo registrado\n");
                                                    system("PAUSE");
                                                    system("cls");
                                                    
                                                    
                        }
                        else
                        {
                            p[pos].nota=pedir_y_validar_entero("nueva nota",10,1);
                            
                            
                        }
                        
                        
     }
     else
     {
         
         printf("NO HAY DATOS CARGADOS AL SISTEMA , POR LO TANTO ESTA OPCION NO ESTA DISPONIBLE\n");
         system("PAUSE");
         system("cls");
         
         
     }
     
     
     
     
     
     
}

void listar(alumno p[])
{
     if(hay_elemento(p))
     {
                        mostrar_array(p);
                        
                        
                        
     }
     else
     {
         
                  printf("NO HAY DATOS CARGADOS AL SISTEMA , POR LO TANTO ESTA OPCION NO ESTA DISPONIBLE\n");
                  system("PAUSE");
                  system("cls");
         
         
         
         
     }
     
     
     
     
     
}
