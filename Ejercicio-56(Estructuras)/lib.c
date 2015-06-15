#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include "types.h"
#include <string.h>

#define SIZE_ARRAY 200



/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU DE AGENDA:\n\n\n");
        printf("\t1_CONSULTA POR APELLIDO\n");
        printf("\t2_CONSULTA POR LOCALIDAD\n");
        printf("\t3_CONSULTA POR AÑO DE NACIMIENTO\n");
        printf("\t4_CONSULTA POR CUMPLEANIOS \n");
        printf("\t5_SALIR\n\n\n\n");
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




void registrar(persona p[])
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              printf ("\tINGRESO  CONTACTO %d:\n\n", i+1);
                              
                              pedir_y_validar_cadena("nombre del contacto",p[i].nombre,20);
                              pedir_y_validar_cadena("apellido del contacto",p[i].apellido,20);
                              pedir_y_validar_cadena("direccion del contacto",p[i].dire.direcc,30);
                              pedir_y_validar_cadena("localidad del contacto",p[i].dire.localidad,30);
                              pedir_y_validar_cadena("codigo postal",p[i].dire.codigoPostal,7);
                              p[i].date.dia=pedir_y_validar_entero("numero del dia del cumpleaños del contacto",31,1);
                              p[i].date.mes= pedir_y_validar_entero("numero del mes del cumpleaños del contacto",12,1);
                              p[i].date.anio=pedir_y_validar_entero("año del cumpleaños del contacto",2017,1890);
                              
                              
     }

     
     
     
     
     
     
}


void consultar_apellido(persona p[])
{
     char consultApe[21];
     int i;
     int a=0;
     
     pedir_y_validar_cadena("apellido para buscar",consultApe,20);
     
     printf("NOMBRE:     DIRECCION:      LOCALIDAD:  CODIGO POSTAL: FECHA DE NACIMIENTO:\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(strcmp(consultApe,p[i].apellido)==0)
                              {
                                                                     
                                                                     

                                  
                                  gotoxy(0,i+1);printf("%s", p[i].nombre);  
                                  gotoxy(12,i+1);printf("%s",p[i].dire.direcc);                                                             
                                  gotoxy(28,i+1);printf("%s",p[i].dire.localidad);      
                                  gotoxy(45,i+1);printf("%s", p[i].dire.codigoPostal);              
                                  gotoxy(60,i+1);printf("%d/%d/%d ", p[i].date.dia,p[i].date.mes,p[i].date.anio);                             
                                  a=1;                                   
                              
                              
                              
                                                                     
                              }                                   
                              
                              
                              
                              
     }
     if(a==0)
     {
                      printf("No hay contactos con ese apellido\n");

                      
     }
     
                      
                      
                      printf("\n\n\n");
                      system("pause");
                      system("cls");
                      
     
     
     
     
     
}

void consultar_localidad(persona p [])
{
     
     
          char consulLoc[21];
     int i;
     int a=0;
     
     pedir_y_validar_cadena("localidad para buscar",consulLoc,20);
     
     printf("NOMBRE:     DIRECCION:      APELLIDO:  CODIGO POSTAL: FECHA DE NACIMIENTO:\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(strcmp(consulLoc,p[i].dire.localidad)==0)
                              {
                                                                     
                                                                     

                                  
                                  gotoxy(0,i+1);printf("%s", p[i].nombre);  
                                  gotoxy(12,i+1);printf("%s",p[i].apellido);                                                             
                                  gotoxy(28,i+1);printf("%s",p[i].dire.direcc);      
                                  gotoxy(45,i+1);printf("%s", p[i].dire.codigoPostal);              
                                  gotoxy(60,i+1);printf("%d/%d/%d ", p[i].date.dia,p[i].date.mes,p[i].date.anio);                             
                                  a=1;                                   
                              
                              
                              
                                                                     
                              }                                   
                              
                              
                              
                              
     }
     if(a==0)
     {
                      printf("No hay contactos con esa localidad\n");

                      
     }
     
                      
                      
                      printf("\n\n\n");
                      system("pause");
                      system("cls");
                      
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}


void consultar_anio(persona p[])
{
     
          
     int consulAnio;
     int i;
     int a=0;
     
     consulAnio=pedir_y_validar_entero("año a consultar",2017,1890);
     
     printf("NOMBRE:     DIRECCION:      APELLIDO:  CODIGO POSTAL: FECHA DE NACIMIENTO:\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(consulAnio==p[i].date.anio)
                              {
                                                                     
                                                                     

                                  
                                  gotoxy(0,i+1);printf("%s", p[i].nombre);  
                                  gotoxy(12,i+1);printf("%s",p[i].apellido);                                                             
                                  gotoxy(28,i+1);printf("%s",p[i].dire.direcc);      
                                  gotoxy(45,i+1);printf("%s", p[i].dire.codigoPostal);              
                                  gotoxy(60,i+1);printf("%d/%d/%d ", p[i].date.dia,p[i].date.mes,p[i].date.anio);                             
                                  a=1;                                   
                              
                              
                              
                                                                     
                              }                                   
                              
                              
                              
                              
     }
     if(a==0)
     {
                      printf("No hay contactos con ese anio de nacimiento\n");

                      
     }
     
                      
                      
                      printf("\n\n\n");
                      system("pause");
                      system("cls");
                      
     
     
     
     
     
     
     
     
     
     
     
     
}

void consultar_cumple(persona p[])
{
     persona p1;
     int i;
     int a=0;
     
     p1.date.anio=pedir_y_validar_entero("año del cumpleanioos del contacto a buscar",2017,1890);
     p1.date.mes=pedir_y_validar_entero("mes del cumpleanios del contacto a buscar",12,1);
     p1.date.dia=pedir_y_validar_entero("dia del cumpleanios del contacto a buscar",31,1);
     
     
     printf("NOMBRE:     DIRECCION:      APELLIDO:  CODIGO POSTAL: FECHA DE NACIMIENTO:\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(p1.date.anio == p[i].date.anio &&p1.date.mes==p[i].date.mes && p1.date.dia==p[i].date.dia)
                              {
                                                                     
                                                                     

                                  
                                  gotoxy(0,i+1);printf("%s", p[i].nombre);  
                                  gotoxy(12,i+1);printf("%s",p[i].apellido);                                                             
                                  gotoxy(28,i+1);printf("%s",p[i].dire.direcc);      
                                  gotoxy(45,i+1);printf("%s", p[i].dire.codigoPostal);              
                                  gotoxy(60,i+1);printf("%d/%d/%d ", p[i].date.dia,p[i].date.mes,p[i].date.anio);                             
                                  a=1;                                   
                              
                              
                              
                                                                     
                              }                                   
                              
                              
                              
                              
     }
     if(a==0)
     {
                      printf("No hay contactos con ese anio de cumpleanios\n");

                      
     }
     
                      
                      
                      printf("\n\n\n");
                      system("pause");
                      system("cls");
                      
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}
