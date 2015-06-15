#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"


#define SIZE_ARRAY 10

void registrar(empleado vec[])
{
     if(vec[1].edad==-1)
     {
                        int i;
                        
                        for(i=0;i<SIZE_ARRAY;i++)
                        {
                                                 printf("REGISTRO EMPLEADO %d:\n\n", i+1);
                                                 
                                                 
                                                 pedir_y_validar_cadena("nombre del empleado",vec[i].nombre,20);
                                                 vec[i].edad=pedir_y_validar_entero("edad del empleado",65,18);
                                                 vec[i].sexo=pedir_y_validar_char("sexo del empleado",'F','M');
                                                 pedir_y_validar_cadena("calle donde vive el empleado",vec[i].dire.calle,30);
                                                 pedir_y_validar_cadena("localidad donde vive el epleado",vec[i].dire.localidad,30);
                                                 pedir_y_validar_cadena("numero de vivenda",vec[i].dire.numero,4);
                                                 
                                                 
                                                 
                        }
                        
                        
     }
     else
     {
         printf("Ya se registraron los empleados por lo tanto esta opcion no esta disponible\n");
         system("PAUSE");
         system("cls");
         
         
     }
     
     
     
     
     
     
}

//para la lista de empleados menores de 25 años.
 
void listar1(empleado p[])
{
     
     if(p[1].edad==-1)
     {
                   printf("Todavia no se registraron empleados por lo tanto esta opcion no esta disponible\n");
                   system("PAUSE");
                   system("cls");
                   
                   
     }
     else
     {
         int i;
         int a=4;
                  printf("\tLISTA DE EMPLEADOS MENORES DE 25 ANIOS:\n\n\n");
                  
         printf(" NOMBRE:         EDAD:   SEXO:      LOCALIDAD:\n");
         
         
         for(i=0;i<SIZE_ARRAY;i++)
         {
                                  if(p[i].edad<25)
                                  {
                                                  a++;
                                                  gotoxy(1,a); printf("%s", p[i].nombre);
                                                  gotoxy(18,a); printf("%d", p[i].edad);
                                                  gotoxy(26,a); printf("%c", p[i].sexo);
                                                  gotoxy(36,a); printf("%s", p[i].dire.localidad);
                                                  
                                  }                        
                                  
         }
         
         printf("\n\n");
         system("PAUSE");
         system("cls");
         
         
     }
     
     
     
     
}


void listar2(empleado p[])
{
          
     if(p[1].edad==-1)
     {
                   printf("Todavia no se registraron empleados por lo tanto esta opcion no esta disponible\n");
                   system("PAUSE");
                   system("cls");
                   
                   
     }
     else
     {
         int i;
         int a=4;
                  printf("\tLISTA DE EMPLEADOS QUE VIVEN EN \"AVELLANEDA\"  :\n\n\n");
                  
         printf(" NOMBRE:         EDAD:   SEXO:      CALLE:\n");
         
         
         for(i=0;i<SIZE_ARRAY;i++)
         {
                                  if(strcmp(p[i].dire.localidad,"avellaneda")==0 )
                                  {
                                                  a++;
                                                  gotoxy(1,a); printf("%s", p[i].nombre);
                                                  gotoxy(18,a); printf("%d", p[i].edad);
                                                  gotoxy(26,a); printf("%c", p[i].sexo);
                                                  gotoxy(36,a); printf("%s", p[i].dire.calle);
                                                  
                                  }                        
                                  
         }
         
         printf("\n\n");
         system("PAUSE");
         system("cls");
         
         
     }
     
     
     
     
     
}


void listar3(empleado p[])
{
          if(p[1].edad==-1)
     {
                   printf("Todavia no se registraron empleados por lo tanto esta opcion no esta disponible\n");
                   system("PAUSE");
                   system("cls");
                   
                   
     }
     else
     {
         int i;
         int a=4;
                  printf("\tLISTA DE EMPLEADOS QUE VIVEN EN \"AVELLANEDA\"MENORES DE 25 ANIOS:\n\n\n");
                  
         printf(" NOMBRE:         EDAD:   SEXO:      CALLE:\n");
         
         
         for(i=0;i<SIZE_ARRAY;i++)
         {
                                  if(strcmp(p[i].dire.localidad,"avellaneda")==0 &&p[i].edad<25)
                                  {
                                                  a++;
                                                  gotoxy(1,a); printf("%s", p[i].nombre);
                                                  gotoxy(18,a); printf("%d", p[i].edad);
                                                  gotoxy(26,a); printf("%c", p[i].sexo);
                                                  gotoxy(36,a); printf("%s", p[i].dire.calle);
                                                  
                                  }                        
                                  
         }
         
         printf("\n\n");
         system("PAUSE");
         system("cls");
         
         
     }
     
     
     
     
     
     
     
}

void listar4(empleado p[])
{
          if(p[1].edad==-1)
     {
                   printf("Todavia no se registraron empleados por lo tanto esta opcion no esta disponible\n");
                   system("PAUSE");
                   system("cls");
                   
                   
     }
     else
     {
         int i;
         int a=4;
                  printf("\tLISTA DE TODOS LOS EMPLEADOS:\n\n\n");
                  
         printf(" NOMBRE:         EDAD:   SEXO:      CALLE:         LOCALIDAD:\n");
         
         
         for(i=0;i<SIZE_ARRAY;i++)
         {
                                  
                                  
                                                  
                                                  gotoxy(1,4+i); printf("%s", p[i].nombre);
                                                  gotoxy(18,4+i); printf("%d", p[i].edad);
                                                  gotoxy(26,4+i); printf("%c", p[i].sexo);
                                                  gotoxy(36,4+i); printf("%s", p[i].dire.calle);
                                                  gotoxy(51,4+i);printf("%s", p[i].dire.localidad);
                                                          
                                  
         }
         
         printf("\n\n");
         system("PAUSE");
         system("cls");
         
         
     }


     
     
     
     
     
     
}








