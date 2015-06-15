#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funcion.h"
#include <windows.h>

#define SIZE_ARRAY 30


int main(int argc, char *argv[])
{
    int opcion=1;
    alumno vec[SIZE_ARRAY];
    
    SetConsoleTitle("Ejercicio-53(Estructuras)");
    
    inicializar_miembro(vec, -1);
    
    while(opcion!=4)
    {
                     opcion=mostrar_y_validar_menu();
                     
                     switch(opcion)
                     {
                                   case 1:
                                        registrar(vec);
                                        break;
                                   
                                   case 2:
                                         modificar(vec);
                                         break;
                                         
                                   case 3:
                                        listar(vec);
                                        break;
                                   
                                   
                                   
                                   
                     }
                    
                    
                    
                    
    }
    
    
    
    
  
  //system("PAUSE");	
  return 0;
}
