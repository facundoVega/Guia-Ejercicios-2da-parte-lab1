#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define FILA 100
#define COLUMNA 6



/*carga los numeros de clientes en forma automatica.
*/

void cargar_num_clientes(float mat[][COLUMNA])
{
     int i;
     
     for(i=0;i<FILA;i++)
     {
                        mat[i][0]=i+1;
                        
                        
                        
                        
     }
     
     
     
     
     
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


int mostrar_y_validar_transaccion()
{
    int opcion;
    int a=0;
    
    do
    {
        if(a)
             printf("ERROR,el numero ingresado no pertenece a un numero de transacion\nIntente nuevamente\n\n");
             
             
        printf("Ingrese codigo de  transaccion:\n\n\n");
    
        printf("1_DEPOSITO\n");
        printf("2_EXTRACCION\n");
    
    
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");
        
        a=1;
        
    }
    while(opcion>2||opcion<1);
    
    return opcion;
    
    
    
    
    
    
}

void depositar(float mat[][COLUMNA],float monto,int pos)
{
     float comision;
     float totalDeposito;
     
     comision=monto*0.05;
     totalDeposito=comision+monto;
     
     //acumulo y asigno el monto del deposito en la posicion de la matriz correspondiente.
     mat[pos][1]=mat[pos][1]+monto;
     
     //acumulo y asigno  la comision por deposito en la posicion de la matriz correspondiente.
     mat[pos][3]=mat[pos][3]+comision;
     
     
     
     //acumulo y asigno el saldo por el deposito.
     mat[pos][5]=mat[pos][5]+totalDeposito;
     
     
     
     
     
     
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

/*Inicializo los demas campos de la matriz a cero.
*/
void inicializar_campos(float mat[][COLUMNA])
{
     int i,j;
     
     for(i=0;i<FILA;i++)
     {
                        for(j=1;j<COLUMNA;j++)
                        {
                                              mat[i][j]=0;
                                              
                                              
                                              
                                              
                        }
                        
                        
                        
                        
     }
     
     
     
     
}


void extracciones(float mat[][COLUMNA],float monto,int pos)
{
         float interes;
         float descTotal;
     
     interes=monto*0.05;
     descTotal=monto +interes;
     
     if(descTotal>mat[pos][5])
     {
                          printf("No se puede realizar la extraccion por que el monto ingresado y su interes\nSuperan el saldo de su cuenta\n");
                          system("PAUSE");
                          system("cls");
                          
                          
     }
     else
     {

         


         
         //calculo y asigno el total de extracciones.
         mat[pos][2]=mat[pos][2]+monto;
         
         //calculo y asigno el total de intereses.
         
         mat[pos][4]=mat[pos][4]+interes;
         
         //calculo y asigno el nuevo saldo.
         mat[pos][5]=mat[pos][5]-descTotal;
         
         
         
     }
     
     
     
}

void gotoxy(int x, int y)
{
     HANDLE hCon;
     
     hCon=GetStdHandle(STD_OUTPUT_HANDLE);
     
     COORD dwPos;
     
     dwPos.X=x;
     dwPos.Y=y;
     
     
     SetConsoleCursorPosition(hCon,dwPos);
     
     
     
}



void mostrar_y_listar_matriz(float mat[][COLUMNA])
{
                         
        int i,j;
        int pos=3;            
                    
                    
    
  
  printf("N Cliente: Tot Depositos: Tot Extracciones: Tot Comisiones:  Tot Int:  Saldo:\n");
  
  
  for(i=0;i<FILA;i++)
  {
                  for(j=0;j<COLUMNA;j++)
                  {
                                  switch(j)
                                  {
                                           case 0:
                                                gotoxy(pos,i+1);printf("%.0f", mat[i][j]);
                                               break;
                                  
                                  
                                            case 5:
                                               gotoxy(71,i+1);printf("$%.2f", mat[i][j]);
                                               break;
                                           
                                            case 2:
                                                 gotoxy(29,i+1);printf("$%.2f", mat[i][j]);
                                                 break;
                                                 
                                                 
                                            case 1:
                                                 gotoxy(14,i+1);printf("$%.2f", mat[i][j]);
                                                 break;  
                                                 
                                            case 3:
                                                 gotoxy(48,i+1);printf("$%.2f", mat[i][j]);
                                                 break;
                                                 
                                            case 4:
                                                 
                                                 gotoxy(61,i+1);printf("$%.2f", mat[i][j]);
                                                 break;
                                  
                                      }
                  }
                                  
                                  
                  
                  
                  
                  
                  
  }
  
  printf("\n\n");
  system("PAUSE");
  system("cls");
     
     
     
     
}

/*
/*funcion que retorna el numero mayor de una columna especifica(la cual es pasada como parametro como "int numCol")
/*retorna el numero mayor  encontrado.
*/
float mayor_de_columna(float mat[][COLUMNA],int numCol)
{
      float mayor=0;
      int i;
      
      for(i=0;i<FILA;i++)
      {
                          if(mat[i][numCol]>mayor)
                          {
                                                  mayor=mat[i][numCol];
                                                  
                                                  
                          }
                          
      
                          
      }
      
      
      return mayor;
      
}

void mostrar_mayor_deposito(float mat[][COLUMNA])
{
     int i;
     float mayorDeposito;
     
     mayorDeposito=mayor_de_columna(mat,1);
     
     printf("MAYOR DEPOSITO: $%.2f\n", mayorDeposito);
     printf("Nro de clientes con mayor deposito:\n");
     
     for(i=0;i<FILA;i++)
     {
                        if(mat[i][1]==mayorDeposito)
                        {
                                                    printf("%.0f\n", mat[i][0]);
                                                    
                                                    
                        }
                        
                        
                        
     }
     
     printf("\n\n\n");
     system("PAUSE");
     system("cls");
     
     
     
     
}

