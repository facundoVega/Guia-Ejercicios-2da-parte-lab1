#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>


int main(int argc, char *argv[])
{
    int opcion=1;
    float liquidacion[FILA][COLUMNA];

    int legajo=0;
    
    SetConsoleTitle("Ejercicio-48(matrices)");
    
    
    inicializar_matriz(liquidacion,-1);
    
    
    while(opcion!=5)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       registrar(liquidacion,&legajo);
                                       legajo++;
                                       break;
                                       
                                  case 2:
                                       listar(liquidacion);
                                       break;
                                  
                                  case 3:
                                       informar(liquidacion);
                                       break;
                                       
                                  case 4:
                                       ordenar_por_sueldo(liquidacion);
                                       break;
                                  
                                  
                    }
                    
                    
                    
    }
  
  system("PAUSE");	
  return 0;
}
