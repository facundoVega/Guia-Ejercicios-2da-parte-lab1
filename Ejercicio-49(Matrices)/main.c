#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"

#define FILA 10
#define COLUMNA 8

int main(int argc, char *argv[])
{
    int opcion=1;
    float piezas[FILA][COLUMNA];
    inicializar_matriz(piezas,-1);
    
    while(opcion!=5)
    {
                    opcion=mostrar_y_validar_menu();
                    switch(opcion)
                    {
                               case 3:
                                    registrar(piezas);   
                                    break;
                                    
                               case 2:
                                  proveer(piezas);
                                  break;
                                  
                               case 1:
                                    pedido(piezas);
                                    break;
                                    
                                    
                               case 4:
                                    listar(piezas);
                                    break;
                                  
                    }
                    
                    
                    
    }
  
  
  
  //system("PAUSE");	
  return 0;
}

