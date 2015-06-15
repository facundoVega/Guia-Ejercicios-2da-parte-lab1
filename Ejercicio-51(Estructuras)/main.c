#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include <windows.h>

#define SIZE_ARRAY 100

int main(int argc, char *argv[])
{
    int opcion=1;
    jugador vec[SIZE_ARRAY];
    
    SetConsoleTitle("Ejercicio 51(Estructuras)");
    
    inicializar_miembro(vec, -1);
    
    while(opcion!=3)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       registrar_jugadores(vec);
                                       break;
                                       
                                  case 2:
                                       mostrar_array(vec);
                                       break;
                                  
                                  
                                  
                                  
                    }
                    
    }

  
  
  
  
  //system("PAUSE");	
  return 0;
}
