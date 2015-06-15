#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define SIZE_ARRAY 100


/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_PRESTAMOS DE LIBROS\n");
        printf("\t2_DEVOLUCION DE LIBROS\n");
        printf("\t3_FIN\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
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





/*pide un entero y valida que este dentro del ranfo que es pasado como parametro
/*retorna el valor ingresado ya validado.
/*recibe como parametros dos enteros que corresponden al rango de numeros donde tiene que estar el valir ingresado
/*y una cadena de caracteres que es el mensaje que se mostrara por pantalla para que se ingrese el valor.
*/

int pedir_y_validar_entero(char mensaje[],int max,int min)
{
    int a=0;
    long int aux;
    
    do
    {
         if(a)
         {
              if(aux>max)
              {         
                         printf("Error,El valor de \" %s\" puede ser un valor hasta  %d \nIntente nuevamente\n",mensaje,max);
                         
              }
              else
              {
                  printf("ERROR,el valor de \"%s\" debe ser como minimo %d\nIntente nuevamente\n",mensaje,min);
              }
         }    
         aux=pedir_entero(mensaje);
         system("cls");
         a=1;
         
    }
    while(aux>max||aux<min);
    
    return aux;
    
    
    
    
}


/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro(libro p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              p1[i].codigo=num;
                              
                              
                              
     }
     
     
     
}

//Valida que el numero entero pasado como parametro no se encuentre en el array libro en el miembro codigo.
int validar_repeticion(libro p[],int num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].codigo==num)
                             {
                                                 return 1;
                                                 
                                                 
                             }
                             
                             
                             
                             
    }
    
    
    return 0;
    
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




/*pide un entero y valida que el entero ingresado sea mayor a un minimo pasado como parametro
/*retorna ese numero validado.
*/

int validar_entero_minimo(char mensaje[],int min)
{
    int a=0;
    int num;
    
    do
    {
        if(a)                  
                               printf("ERROR, el numero a ingresar para %s debe ser mayor que %d\nIntente nuevamente\n", mensaje,min);
        
        
        
        num=pedir_entero(mensaje);
        system("cls");
        a=1;
        
        
    }
    while(num<min);
    
    return num;
    
    
    
    
    
    
}




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


//Busca la coincidencia entre el miembro del array y el numero entero pasado como parametro.
//retorna la posicion donde hubo esa coincidencia y si no la hubo retorna -2.
int buscar_posicion(libro l[],int num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(l[i].codigo==num)
                             {
                                                 return i;
                                                 
                                                 
                                                 
                             }                             
                             
                             
    }
    return -2;
    
    
    
}

/*Muestra un mensaje por pantalla ,luego espera recibir un caracter,valida que ese caracter sea 
/*"s" o "n",Retorna el caracter validado.
*/
char preguntar_y_validar(char preg[])
{
     char resp;
     int a=0;
     
     do
     {
         if(a)
              printf("ERROR,conteste con \"S\" para indicar si y con \"N\" para indicar no\nIntente nuevamente\n");
     
          printf("%s\?\n",preg);
          fflush(stdin);
          scanf("%c", &resp);
          system("cls");
          
          a=1;
          resp=tolower(resp);
     
     }
     while(resp!='s'&&resp!='n');
     
     
     return resp;
     
     
     

}

/*Ordena los libros de forma decreciente en cuanto a la cantidad de veces que fueron prestados.
*/
void ordenar(libro lib[])
{
     int i,j;
     libro auxLib;
     
     
     
     for(i=0;i<SIZE_ARRAY-1;i++)
     {
                                
                                for(j=i+1;j<SIZE_ARRAY;j++)
                                {
                                                           
                                                           if(lib[i].cantPrestado!=0||lib[j].cantPrestado!=0)
                                                           {
                                                                   if(lib[i].cantPrestado<lib[j].cantPrestado)
                                                                   {
                                                                                                      
                                                                           auxLib=lib[i];
                                                                           lib[i]=lib[j];
                                                                           lib[j]=auxLib;
                                                           
                                                                                                      
                                                                                                      
                                                                     }
                                                                     
                                                           }
                                                           
                                                           
                                                           
                                                           
                                                           
                                }
                                
                                
                                
                                
     }
     
     
     
     
     
     
}


/*Muestra los libros.
*/
void mostrar(libro lib[])
{
     int i;
     
     printf("\t\tSTOCK DE LIBROS:\n\n");
     gotoxy(1,3);printf("TITULO:");
     gotoxy(40,3);printf("AUTOR:");
     gotoxy(60,3);printf("VECES PRESTADO:");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              
                              
                          gotoxy(1,i+6);    printf("%s",lib[i].titulo);
                          gotoxy(40,i+6);    printf("%s", lib[i].autor);
                          gotoxy(63,i+6);    printf("%d", lib[i].cantPrestado);
                              
                              
                              
                              
     }
     
     printf("\n\n");
     system("PAUSE");
     system("cls");
     
     
}
