#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include "types.h"
#include <windows.h>


#define SIZE_ARRAY 200


int main(int argc, char *argv[])
{
    persona p[SIZE_ARRAY];
    int opcion=1;
    
    
    SetConsoleTitle("Ejercicio 56(Estructuras)");
    
    printf("\tAGENDA\n\n\n:");
    

  
    registrar(p);
  
    while(opcion!=5)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       consultar_apellido(p);
                                       break;
                                       
                                  case 2:
                                       consultar_localidad(p);
                                       break;
                                  
                                  
                                  case 3:
                                       consultar_anio(p);
                                       break;
                                       
                                  case 4:
                                       consultar_cumple(p);
                                       break;
                                       
                                       
                                  
                    }
                    
                    
                    
    }  
  
  
  
  system("PAUSE");	
  return 0;
}
