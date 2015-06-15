#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "windows.h"

int main(int argc, char *argv[])
{
    float matriz[FILA][COLUMNA];
    int numFila;
    int numColumna;
    int i;
    
    SetConsoleTitle("Ejercicio-45(Matrices)");
    
    inicializar_matriz2(matriz,0.5);
    
    
    for(i=0;i<6;i++)
    {
    
                    numFila=validar_float("numero de fila ",FILA,1 );
                    numColumna=validar_float("numero de columna",COLUMNA,1 );
                    
                    numFila--;
                    numColumna--;
                    
                    if(validar_repeticion(matriz,numFila,numColumna))
                    {
                            matriz[numFila][numColumna]=pedir_float("para almacenar en la posicion previamente elegida\n");
                    
                    }
                    else
                    {
                        printf("La posicion que ingreso esta repetida\nIntente nuevamente\n");
                        i--;
                        
                        
                        
                    }
                    
                    
    }
    printf("MOSTRAR POR FILA:\n");
    mostrar_por_fila(matriz);
    
    printf("\n\n\n\nMOSTRAR POR COLUMNA:\n");
    mostrar_por_columna(matriz);
    
    
    system("PAUSE");

}

    
    
    
    































