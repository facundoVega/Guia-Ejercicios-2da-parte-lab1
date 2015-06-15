#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include <string.h>
#include <windows.h>

#define SIZE_ARRAY 100



/* recibe el ingreso de una cadena por consola
/*El primer parametro que recibe es para mostrar un mensaje en pantalla en funcion del dato que se quiere obtener.
/*El segundo es donde se va a almacenar la cadena recibida.
*/

void pedir_cadena(char mensaje[],char vector[])
{
     
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     gets(vector);
     system("cls");
     
     
     
     
}



/*recibe el ingreseo de una cadena por consola
/*valida que la cantidad de caracteres ingresados no supere el limite para el dato
/*el primero char que recibe es para el mensaje que se mostrara en pantalla el segundo para almacenar la cadena recibida
/*y el entero es el limite maximo de carateres.
*/
void pedir_y_validar_cadena(char mensaje[],char vector[],int max)
{
     char a=0;
     char aux[500];
     
     do
     {
          if(a)
          {     
                printf("Se excedio el maximo de caracteres a ingresar \nIntente nuevamente\n");
               
          }
          pedir_cadena(mensaje,aux);
          a=1;
          
          
          
     }
     while(strlen(aux)>max||strlen(aux)<1);
     
     strcpy(vector,aux);
     
     
}



 /*pide un entero por pantalla
 *recibe una cadena que es el dato que se mostrara en pantalle para recibir el valor
 *retorna el numero ingresado.
 */
int pedir_entero(char mensaje[])
{
    long int numero;
    
    printf("ingrese %s \n", mensaje);
    fflush(stdin);
    scanf("%d", &numero);
    
    return numero;
    
    
    
}

int validar_entero_minimo(char mensaje[],int min)
{
    int a =0;
    int num;
    
    do
    {
        if(a)
             printf("ERROR, debe ingresar un numero mayor a :%d\nIntente nuevamente\n", min);
             
             
        num=pedir_entero(mensaje);
        system("cls");
        
        a=1;
        
        
    }
    while(num<min);
    
    return num;
    
    
    
    
    
    
}

void registrar_jugadores(jugador vec[])
{
     int i;
     
     if(vec[1].partidosJugados==-1)
     {
                                   
                                   
                                   
                                   for(i=0;i<SIZE_ARRAY;i++)
                                   {
                                                            printf("JUGADOR NRO %d:\n\n", i+1);
                              
                              
                                                            pedir_y_validar_cadena("nombre del jugador",vec[i].nombre,20);
                                                            pedir_y_validar_cadena("nombre del equipo",vec[i].nombreEquipo,20);
                                                            vec[i].goles=validar_entero_minimo("cantidad de goles convertidos",0);
                                                            vec[i].partidosJugados=validar_entero_minimo("cantidad de partidos jugados",0);
                                                            if(vec[i].partidosJugados>0)
                                                            {
                                                                                        vec[i].promedioGoles=vec[i].goles/vec[i].partidosJugados;
                                                            
                                                            }
                                                            else
                                                            {
                                                                vec[i].promedioGoles=0;
                                                                
                                                            }
                                   }
                                   
     }
     else
     {
         printf("Ya se registraron los jugadores por lo tanto esta opcion ya no esta disponible\n");
         system("PAUSE");
         system("cls");
         
         
         
     }
     
     
     
}


/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_REGISTRAR JUGADORES\n");
        printf("\t2_LISTAR\n");
        printf("\t3_SALIR\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
}

/*
 *muestra un menu en ppantalla y recibe un valor correspondiente a una de las acciones del menu.
 *valida que el numero ingresado sea uno de los valores correspondientes al menu
 *devuelve un entero que es la opcion del menu ya validada
 */
int mostrar_y_validar_menu()
{
    int a=0;
    int opcion;
    
    do
    {
        if(a)
             printf("ERROR,el numero ingresado no pertenece a una opcion valida para el menu\nIntente nuevamente\n\n");
             

             mostrar_menu();
             fflush(stdin);
             scanf("%d", &opcion);
             system("cls");
        
             a=1;
        
    }
    while(opcion<1||opcion>3);
    
    return opcion;
    
    
    
}

/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro(jugador p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              p1[i].partidosJugados=num;
                              
                              
                              
     }
     
     
     
}

void mostrar_array(jugador vec[])
{
     if(vec[1].partidosJugados==-1)
     {
                                  printf("Aun no se registraron jugadores por lo tanto esta opcion no esta disponible\n");
                                   system("PAUSE");
                                   system("cls");
                                   
                                   
                                   
     }
     else
     {
         listar_mostrar(vec);
         
         
         
     }
     
     
     
     
}

void listar_mostrar(jugador vec[])
{
     int i;
         
         printf("\tLISTA DE JUGADORES:\n\n\n");
         printf(" NOMBRE:            EQUIPO:         PARTIDOS      CANTIDAD      PROMEDIO DE\n");
         printf("                                    JUGADOS:     DE GOLES:     GOLES POR PART:\n");
         
    for(i=0;i<SIZE_ARRAY;i++)
    {
                   gotoxy(0,i+5);  puts(vec[i].nombre);
                   gotoxy(18,i+5); puts (vec[i].nombreEquipo);
                   gotoxy(40,i+5); printf("%d", vec[i].partidosJugados);
                   gotoxy(52,i+5); printf("%d", vec[i].goles);
                   gotoxy(68,i+5); printf("%.2f", vec[i].promedioGoles);
                   
                   
    }
    printf("\n\n\n\n");
    system("PAUSE");
    system("cls");

                           
    
}


void gotoxy(int x,int y)
{
     HANDLE hCon; 
     COORD coord; 
     hCon = GetStdHandle (STD_OUTPUT_HANDLE); 
     COORD dwPos;
     
     dwPos.X=x;
     dwPos.Y=y;
     
     SetConsoleCursorPosition(hCon,dwPos);
}




