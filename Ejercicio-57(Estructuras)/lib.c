#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define SIZE_ARRAY 200

void altas(contacto p[])
{
     if(hay_espacio(p))
     {
                       int auxDni;
                       int pos;
                        
                       auxDni=validar_entero_minimo("dni",0 );

                       pos=buscar_posicion(p);
                       
                       if(validar_repeticion_entero(auxDni,p))
                       {

                                                              
                                                              
                       
                                                              
                                           pedir_y_validar_cadena("nombre del contacto",p[pos].nombre,20);
                                           pedir_y_validar_cadena("apellido del contacto",p[pos].apellido,20);
                                           pedir_y_validar_cadena("direccion del contacto",p[pos].dir.dire,30);
                                           pedir_y_validar_cadena("telefono del contacto",p[pos].dir.telefono,30);
                                           p[pos].date.anio=pedir_y_validar_entero("anio de nacimiento del contacto",2016,1890);
                                           p[pos].date.mes=pedir_y_validar_entero("mes de nacimiento del contacto",12,1);
                                           p[pos].date.dia=pedir_y_validar_entero("dia de naciemiento del contacto",31,1);
                       
                                           
                                           
                                           
                       
                                                              
                                                              
                                                              
                       }
                       else
                       {
                           printf("El nuemero de dni ingresado pertenece a un contacto \nya ingresado a la agenda previamente\n");
                           system("PAUSE");
                           system("cls");
                           
                           
                           
                       }
                       
                       
                       
     }
     else
     {
        printf("Ya no hay mas lugar para ingresar datos al programa por lo tanto esta opcion no esta disponible\n");
        system("PAUSE");
        system("cls"); 
         
         
         
     }
     
     
     
}


void modificar(contacto p[])
{
     
     if(hay_elementos(p))
     {
           int* auxDni;
           int pos;
           
           auxDni=(int *)malloc(sizeof(int));
           
           *auxDni=validar_entero_minimo("dni",0 );
           pos=existe_numero(p,auxDni);
           
           if(pos!=-1)
           {
                      
                      int opcion;
                      
                      while(opcion!=8)
                      {
                                      opcion=mostrar_y_validar_menu_modificar();
                      
                                      switch(opcion)
                                      {
                                                    case 1:
                                                    pedir_y_validar_cadena("nombre del contacto",p[pos].nombre,20);
                                                    break;
                                         
                                                    case 2:
                                                    pedir_y_validar_cadena("apellido del contacto",p[pos].apellido,20);
                                                    break;
                                         
                                                    case 3:
                                                    pedir_y_validar_cadena("direccion del contacto",p[pos].dir.dire,30);
                                                    break;
                                         
                                                    case 4:
                                                    pedir_y_validar_cadena("telefono del contacto",p[pos].dir.telefono,30);
                                                    break;
                                         
                                                    case 5:
                                                    p[pos].date.anio=pedir_y_validar_entero("anio de nacimiento del contacto",2016,1890);
                                                    break;
                                         
                                                    case 6:
                                                    p[pos].date.mes=pedir_y_validar_entero("mes de nacimiento del contacto",12,1);
                                                    break;
                                    
                                                    case 7:
                                                    p[pos].date.dia=pedir_y_validar_entero("dia de naciemiento del contacto",31,1);
                                                    break;
                                    }
                                    free(auxDni);
                                    
                      }
                      
                                      
                                      
           }
           else
           {
               printf("El numero ingresado no pertenece a un contacto previamente registrado\nIntente nuevamente\n");
               system("PAUSE");
               system("cls");
               free(auxDni);
           }
                         
                         
                         
                         
     }
     else
     {
         
         
         mensaje_no_disponible();
         
         
     }
     
     
     
     
     
     
     
}

void baja(contacto p[])
{
     if(hay_elementos(p))
     {
             int* auxDni;
             int pos;
             
             auxDni=(int *)malloc(sizeof(int));
             *auxDni=validar_entero_minimo("dni",0 );
             pos=existe_numero(p,auxDni);
             
             if(pos!=-1)
             {
                p[pos].dni=-1;
                free(auxDni);        
                        
             }
             else
             {
                 
                        printf("El numero ingresado no pertenece a un contacto previamente registrado\nIntente nuevamente\n");
                        system("PAUSE");
                        system("cls");
                        free(auxDni);
                 
             }
             
                          
                         
             
     }
     else
     {
         
         mensaje_no_disponible();
         
         
         
     }
     
     
     
     
     
     
}



void listar(contacto p[])
{
     if(hay_elementos(p))
     {
                         ordenar_array(p);
                         mostrar_array(p);
                         
                         
                         
     }
     else
     {
                  mensaje_no_disponible();
         
         
         
         
         
     
     }
     
     
     
     
     
}
