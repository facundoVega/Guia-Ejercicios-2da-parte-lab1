#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define SIZE_ARRAY 100


void registrar(libro lib[])
{
     int i;
     int auxCod; 
     
     printf("\t\tREGISTRO DE LIBROS:\n\n");
     
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              printf("REGISTRO DEL LIBRO: %d\n\n", i+1);
     
                              auxCod=pedir_y_validar_entero("codigo del libro",SIZE_ARRAY,1);
                              
                              if(validar_repeticion(lib,auxCod))
                              {
                                                                printf("El numero de codigo ingresado ya pertenece a un libro registrado\nIngrese nuevamente\n");
                                                                
                                                                
                                                                i--;
                                                                
                                                                continue;
                                                                
                              }
                              else
                              {
                                  lib[i].codigo=auxCod;
                                  lib[i].cant= validar_entero_minimo("Cantidad de ejemplares ",1 );
                                  pedir_y_validar_cadena("Titulo del libro",lib[i].titulo,50);
                                  pedir_y_validar_cadena("nombre y apellido del autor",lib[i].autor,30);
                                  lib[i].cantPrestado=0;
                                  lib[i].cantInicial=lib[i].cant;printf("%d", lib[i].cantInicial);
                              }                         
     
     }
     
     
}



void prestamo(libro lib[])
{
     int auxCodigo;
     int pos;
     char resp;
     
     auxCodigo=pedir_y_validar_entero("codigo de libro a prestar",SIZE_ARRAY,1);

     pos=buscar_posicion(lib,auxCodigo);
     
     
     gotoxy(1,1);printf("AUTOR ");
     gotoxy(40,1);printf("TITULO:");
     gotoxy(1,3);printf("%s", lib[pos].autor);
     gotoxy(40,3);printf("%s\n\n", lib[pos].titulo);
     
     resp= preguntar_y_validar("confirma el prestamo");
     
     
     if(resp=='s')
     {
                  if(lib[pos].cant==1)
                  {
                                      printf("Solo queda el ejemplar de lectura en sala\n\n\n");
                                      system("PAUSE");
                                      system("cls");
                                      
                                      
                                      
                  }
                  else
                  {
                      lib[pos].cant--;
                      lib[pos].cantPrestado++;
                      system("PAUSE");
                      system("cls");
                      
                  }
                  
                  
                  
                  
                  
                  
     }
     
     
     
     
}


void devolucion(libro lib[])
{
     int auxCodigo;
     int pos;
     char resp;
     
     auxCodigo=pedir_y_validar_entero("codigo de libro a devolver",SIZE_ARRAY,1);
     pos=buscar_posicion(lib,auxCodigo);
     
     
     gotoxy(1,1);printf("AUTOR ");
     gotoxy(40,1);printf("TITULO:");
     gotoxy(1,3);printf("%s", lib[pos].autor);
     gotoxy(40,3);printf("%s\n\n", lib[pos].titulo);
     
     
     resp=preguntar_y_validar("Confirma la devolucion(s/n)\?");
     
     if(resp=='s')
     {
                  if(lib[pos].cant!=lib[pos].cantInicial)
                  {
                                                             lib[pos].cant++;
                                                             system("PAUSE");
                                                             system("cls");
                  
                  }
                  else
                  {
                      printf("El libro no fue prestado recientemente\n");
                      system("PAUSE");
                      system("cls");
                      
                      
                      
                  }
                  
     }
     
     
     
     
     
     
}


void listar(libro lib[])
{
     
      ordenar(lib);
      mostrar(lib);
     
     
     
}
