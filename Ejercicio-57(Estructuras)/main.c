#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define SIZE_ARRAY 200

int main(int argc, char *argv[])
{
    int opcion=1;
    contacto vec[SIZE_ARRAY];
    
    SetConsoleTitle("Ejercicio 57(Estructuras)");
    
    inicializar_miembro(vec, -1);
    
    
    while(opcion!=5)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    
                    switch(opcion)
                    {
                                  case 1:
                                       altas(vec);
                                       break;
                                       
                                  case 2:
                                       modificar(vec);
                                       break;
                                       
                                  case 3:
                                       baja(vec);
                                       break;
                                       
                                       
                                  case 4: 
                                       listar(vec);
                                       break;
                                  
                                  
                                  
                    }
                    
                    
                    
                    
    }
    
    
    
  
  //system("PAUSE");	
  return 0;
}
