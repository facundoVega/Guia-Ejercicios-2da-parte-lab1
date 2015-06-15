#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>


#define SIZE_ARRAY1 100
#define SIZE_ARRAY2 45


int main(int argc, char *argv[])
{
  
  cliente c[SIZE_ARRAY2];
  producto p[SIZE_ARRAY1];
  int opcion;
  
  SetConsoleTitle("Ejercicio-58(Estructuras)");
  
  inicializar_miembro(p, -1);
  inicializar_miembro2(c, -1);
  
  
  
  while(opcion!=5)
  {
                  opcion=mostrar_y_validar_menu();
                  
                  switch(opcion)
                  {
                                case 2:
                                     carga_cliente(c);
                                     break;
                                     
                                case 1:
                                     carga_producto(p);
                                     break;
                                
                                case 3:    
                                     hacer_mostrar_factura( c,p); 
                                     break;
                                
                                case 4:
                                     listar(c,p);
                                     break;
                                
                  }
                  
                  
  }
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
