#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define COLUMNA 5
#define FILA 100


int main(int argc, char *argv[])
{
    float notas[FILA][COLUMNA];
    int legajo=0;
    int opcion=1;
    
    SetConsoleTitle("Ejercicio 47(matrices)");
    
    inicializar_matriz(notas,-1);
    
    
    
    
    while(opcion!=4)
    {
                    opcion=mostrar_y_validar_menu();
                    
                    switch(opcion)
                    {
                                  case 1:
                                       ingreso(notas,legajo);
                                       legajo++;
                                       break;
                                  
                                  case 2:
                                       corregir(notas);
                                       break;
                                       
                                  case 3:
                                       listar(notas);
                                       break;
                                  
                    }
                    
                    
    }
  
  //system("PAUSE");	
  return 0;
}
