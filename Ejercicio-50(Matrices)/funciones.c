#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>


#define FILA 8
#define COLUMNA 7


/*Inicializa una matriz de tipo float a un numero especifico
/*el cual es recibido por parametro
*/
void inicializar_matriz(float mat[][COLUMNA],float num)
{
     int i,j;
     
     for(i=0;i<FILA;i++)
     {
                        for(j=0;j<COLUMNA;j++)
                        {
                                              mat[i][j]=num;
                                              
                                              
                                              
                        }
                        
                        
     }
     
     
     
     
     
}




/*
/*Verifica si hay espacio disponible en la matriz pero de forma logica
/*si hay espacio retorna uno ,sino retorna 0.
/*La columna en la que verifica esta funcion es la que pertenece al numero que se pasa como parametro("int numCol")
*/
int hay_espacio(float mat[][COLUMNA],int numCol)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==-1)
                       {
                                             return 1;
                                         
                                         
                       }
                       
                       
    }
    return 0;
    
    
    
    
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


/*valida que que el numero enviado como parametro (como "float num")no se encuentre en la matriz en una columna especifica("int numcol")
/*retorna uno si se encuentra en la matriz, de lo contrario retornara 0.
*/
int validar_repeticion(float mat[][COLUMNA],float num,int numCol)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==num)
                       {
                                              return 1;
                                              
                       }
                       
                       
                       
    }
    
    return 0;
    
    
}

/*el mensaje que recibe como parametro es mostrado por pantalla para realizar la validacion
*/
int preguntar_y_validar(char mensaje[])
{
    int resp;
    int a=0;
    
    do
    {
        if(a)
        {      puts(mensaje);
               printf("Error, conteste a esta pregunta con 1 para ingresar otra revista\n o con dos para volver al menu principal\n");
               printf("Intente nuevamente\n");
    
         }    
         puts(mensaje);
         printf("Que accion desea  realizar\?\n\n\n\n");
         printf("1_Ingresar nuevamente otro numero de revista\n");
         printf("2_Volver al menu principal\n");
    
         fflush(stdin);
         scanf("%d", &resp);
         system("cls");
         
         a=1;
    }
    while(resp>2 || resp<1);
         
         return resp;
    
    
    
}

/*
/*pide y recibe un numero de tipo float por pantalla.
/*La cadena de caracteres recibida como parametro se mostrara en pantalla para indicar al ususario que valor debera ingresar
*/
float pedir_flotante(char mensaje[])
{
      float num;
      
      printf("Ingrese %s\n", mensaje);
      fflush(stdin);
      scanf("%f", &num);
      system("cls");
      
      return num;
      
      
      
      
}

/*pide y valida un numero flotante,valida que sea mayor al minimo recibido como parametro
/*tambien recibe  una cadena de caracteres que se mostrara en pantalla para indicar al usuario que es lo que debe ingresar
*/

float pedir_y_validar_flotante(char mensaje[],float min)
{
      int a=0;
      double aux;
      float num;
      
      do
      {
             if(a)
                  printf("ERROR,el monto debe ser mayor a $%.2f,Ingrese nuevamente\n");
                  
             aux=pedir_flotante(mensaje);
             a=1;
             
      }
      while(aux<min);
      num=aux;
      
      return num;
      
      
      
      
      
}



void ingreso_y_calculos_datos_matriz(float mat[][COLUMNA], int numFila)
{
     float valorRevista;
     //pido y asigno cantidad de ejemplares vendidos.
     mat[numFila][1]=pedir_y_validar_flotante("cantidad de ejemplares vendidos",0);
     
     valorRevista=pedir_y_validar_flotante("valor de venta de la revista",0);
     mat[numFila][6]=valorRevista;
     //calculo y asigno el total de ventas.
     mat[numFila][2]=calcular_total(mat[numFila][1],valorRevista);
     
     //pido y asigno el monto cobrado por publicidad
     mat[numFila][3]=pedir_y_validar_flotante("monto cobrado por publicidad",0);
     
     //pido y asigno los gastos y edicion
     mat[numFila][4]=pedir_y_validar_flotante("gastos de edicion de la revista",0);
     
     //calculo y asino la ganancia o perdida
     mat[numFila][5]=calcular_ganancia_perdida(mat[numFila][2],mat[numFila][3],mat[numFila][4]);
     
     
}

/*calcula el total de ventas 
/*retorna ese total
*/
float calcular_total(float cant,float precio)
{
      float result;
      
      result =cant*precio;
      
      return result;
      
      
      
}


/*calcula la ganancia o perdida de cada revista
*/
float calcular_ganancia_perdida(float recaudado,float publicidad,float gastos)
{
      float total;
      
      total=(recaudado+publicidad)-gastos;
      
      return total;
      
      
      
      
}


/*
/*funcion que verifica si existen datos cargados al sistema en una columna especificada pasada como parametro.
/*si  hay al menos un dato retorna 1 de lo contrario retornara 0.
*/

int hay_datos(float mat[][COLUMNA],int numCol)
{
    
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]!=-1)
                       {
                                             return 1;
                                             
                                             
                       }
                       
                       
                       
    }
    return 0;
    
}




/*
/*Muestra un mensaje en pantalla cuando la opcion seleccionada no esta disponible por falta de registros al programa.
*/

void mensaje_no_disponible()
{
     printf("No se ingresaron datos  al programa por lo tanto esta opcion no esta disponible\n\n\n");
     printf("ingrese cualquier tecla para volver al menu principal\n");
     getch();
     system("cls");
     
     
}

/*busca un elemento en una matriz y en caso de encontrarlo devuelve la posicion en donde se encuentra
/*de no  encontrarlo devuelve -1.
*/
int buscar_elemento(float mat[][COLUMNA],int numCol,int num)
{
    int i;
    
    for(i=0;i<FILA;i++)
    {
                       if(mat[i][numCol]==num)
                       {
                                              return i;
                                              
                                              
                       }
                       
                       
                       
    }
    return -1;
    
    
    
    
    
    
}


void modificar_datos_matriz(float mat[][COLUMNA],int pos)
{
     
     //pido la nueva cantidad de ejemplares vendidos y asigno nuevamente en la matriz en la posicion correspondiente.
     mat[pos][1]=pedir_y_validar_flotante("nueva cantidad de ejemplares vendidos",0);
     
     //calculo el total de ventas de la revista y asigno.
     mat[pos][2]=calcular_total(mat[pos][1],mat[pos][6]);
     
     //calculo la ganancio o perdida y lo asigno a la matriz.
     mat[pos][5]=calcular_ganancia_perdida(mat[pos][2],mat[pos][3],mat[pos][4]);
     
     
}


void ordenar(float mat [][COLUMNA],int numCol)
{
    int limite,i,j,k;
    float aux[6];
    
    limite=limite_ordenar( mat, 0);
    
    
    for(i=0;i<limite-1;i++)
    {
                                for(j=i+1;j<limite;j++)
                                {
                                                       if(mat[i][numCol]<mat[j][numCol])
                                                       {
                                                                              for(k=0;k<COLUMNA;k++)
                                                                              {
                                                                                              aux[k]=mat[i][k];
                                                                                              mat[i][k]=mat[j][k];
                                                                                              mat[j][k]=aux[k];
                                                                                              
                                                                                              
                                                                                              
                                                                              }
                                                                              
                                                                              
                                                                              
                                                       }
                                                       
                                                       
                                                       
                                                       
                                }
    
     
     
     }
     
}



/*devuelve el numero limite hasta el que tiene que ser ordenada una matriz en funcion de los datos que tiene registrado.
*/
int limite_ordenar(float mat[][COLUMNA],int numCol)
{
    int i;
    for(i=0;i<FILA;i++)
    {
                        if(mat[i][numCol]==-1)
                        {
                                              return i;
                                              
                                              
                        }
                        
                        
                        
                        
    }
    return FILA;
    
    
    
    
    
}


void listar_matriz(float mat[][COLUMNA])
{
     int i,j;
     int a=0;
     
     mostrar_titulos_lista();
     
           for(i=0;i<FILA;i++)
    {
                    for(j=0;j<COLUMNA;j++)
                    {
                    
                          if(mat[i][0]!=-1)
                          {
                                    switch(j)
                                    {
                                             case 0:
                                                  gotoxy(3,i+3);printf("%.0f", mat[i][j]);
                                                  break;
                                                  
                                             case 1:
                                                  gotoxy(15,i+3);printf("%.0f", mat[i][j]);
                                                  break;
                                                  
                                             case 2:
                                                  gotoxy(28,i+3);printf("$%.2f", mat[i][j]);
                                                  break;
                                                  
                                             case 3:
                                                  gotoxy(42,i+3);printf("$%.2f", mat[i][j]);
                                                  break;
                                             
                                             case 4:
                                                  gotoxy(55,i+3);printf("$%.2f", mat[i][j]);
                                                  break;
                                                  
                                             case 5:
                                                  gotoxy(67,i+3);printf("$%.2f", mat[i][j]);
                                                  break;
                                             
                                    }
                                    
                          }
                                    
                                    
                                    
                    }
                    
                    
                    
                    
    }
     
     printf("\n\n\n");

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

void mostrar_titulos_lista()
{
     
              
     gotoxy(1,1);printf("N%crevista: ",288);
     printf("Ejemplares");
     gotoxy(13,2);printf(" Vendidos:  ");
     gotoxy(26,1);printf("Recaudado");
     gotoxy(24,2);printf(" por ventas: ");
     gotoxy(40,1);printf("Cobrado");
     gotoxy(37,2);printf("Por publicidad:");
     gotoxy(56,1);printf("Gastos");
     gotoxy(53,2);printf("de edicion:  ");
     gotoxy(66,1);printf("Ganancia o");
     gotoxy(66,2);printf("Perdida: \n\n\n\n");
    
     
     
     
     
}
