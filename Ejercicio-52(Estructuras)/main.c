#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>



#define SIZE_ARRAY 10

int main(int argc, char *argv[])
{
    empleado vec[SIZE_ARRAY];
    int opcion=1;
    
    inicializar_miembro(vec, -1);
    
    SetConsoleTitle("Ejercicio 52(Estructuras)");
    
    while(opcion!=6)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       registrar(vec);
                                       break;
                                       
                                  case 2:
                                       listar1(vec);
                                       break;
                                       
                                  case 3:
                                       listar2(vec);
                                       break;
                                       
                                  case 4:
                                       listar3(vec);
                                       break;
                                  
                                  case 5:
                                       listar4(vec);
                                       break;
                                  
                    }
                                    
                    
    }
  
  //system("PAUSE");	
  return 0;
}
