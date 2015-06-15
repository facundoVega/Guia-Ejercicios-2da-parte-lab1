#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
# include <windows.h>


#define FILA 8
#define COLUMNA 7





int main(int argc, char *argv[])
{
    float datosRevista[FILA][COLUMNA];
    int nroRevista=0;
    int opcion=1;
    
    SetConsoleTitle("Ejercicio 50(Matrices)");
    inicializar_matriz(datosRevista,-1);
    
    
    
    while(opcion!=4)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       registrar(datosRevista);
                                       break;
                                  
                                  case 2:
                                       modificar(datosRevista);
                                       break;
                                  
                                  case 3:
                                       ordenar_listar(datosRevista);
                                       break;
                                  
                    }
                    
                    
    }
    
    
    
    
    
    
  
  //system("PAUSE");	
  return 0;
}
