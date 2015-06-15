#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define FILA 100
#define COLUMNA 6



int main(int argc, char *argv[])
{
    
    float transaccion[FILA][COLUMNA];
    int opcion=1;
    
    SetConsoleTitle("Ejercicio 46(Matrices)");
    
    cargar_num_clientes(transaccion);
    inicializar_campos(transaccion);
    
    while(opcion!=3)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       operacion(transaccion);                  
                                       break;
                                       
                                  case 2:
                                       listar(transaccion);
                                       break;
                                  
                                  
                    }
                    
                    
                    
                    
    }
    
  
  //system("PAUSE");	
  return 0;
}
