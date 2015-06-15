#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include <windows.h>


#define SIZE_ARRAY 100


int main(int argc, char *argv[])
{
    persona p[SIZE_ARRAY];
    int opcion=0;
    int contRegistrados=0;
    
    SetConsoleTitle("Ejercicio-55(Estructuras)");
    
    inicializar_miembro(p,-1);
    
    
    while(opcion!=3)
    {
             opcion=mostrar_y_validar_menu(); 
             
             switch(opcion)
             {
                           case 1:
                           registrar(p,&contRegistrados);
                           break;
                                
                           case 2:
                                listar(p);
                                break;
                           
                           
             }      
                    
    
    }
    
    
  
  system("PAUSE");	
  return 0;
}
