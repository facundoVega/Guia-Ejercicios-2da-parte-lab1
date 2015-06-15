#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define SIZE_ARRAY 100


int main(int argc, char *argv[])
{
    libro lib[SIZE_ARRAY];
    int opcion=1;
    
    SetConsoleTitle("Ejercicio-59(Estructuras)");
    
    inicializar_miembro(lib, -1);
    
    
    
    registrar(lib);
    
    while(opcion!=3)
    {
                    opcion=mostrar_y_validar_menu();
                                                    
                                                    
                    switch(opcion)
                    {
                             case 1:
                                  prestamo(lib);
                                  break;     
                                  
                                  
                             case 2:
                                  devolucion(lib);
                                  break;
                                  
                             case 3:
                                  listar(lib);
                                  break;
                             
                                  
                                  
                                  
                                  
                    }
                    
                    
                    
                    
    }
    
    
    
  
  system("PAUSE");	
  return 0;
}
