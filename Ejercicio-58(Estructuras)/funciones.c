#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <windows.h>

#define SIZE_ARRAY1 100
#define SIZE_ARRAY2 45




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
     scanf("%s",vector);
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




/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_REGISTRAR PRODUCTOS\n");
        printf("\t2_REGISTRAR CLIENTES\n");
        printf("\t3_REALIZAR Y MOSTRAR FACTURA\n");
        printf("\t4_LISTA DE CLIENTES CON MONTO MAYOR A 1000\n");
        printf("\t5_SALIR\n\n\n\n");
        printf("Ingrese un numero segun la opcion que desea realizar\n");
        
     
     
     
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
    while(opcion<1||opcion>5);
    
    return opcion;
    
    
    
}


/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro(producto p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY1;i++)
     {
                              p1[i].codigo=num;
                              
                              
                              
     }
     
     
}


/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro2(cliente p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY2;i++)
     {
                              p1[i].codigo=num;
                              
                              
                              
     }
     
     
}

//verifica si se cargaron datos al array perteneceinte a clientes.
int hay_cliente(cliente p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY2;i++)
    {
                             if(p[i].codigo==-1)
                             {
                                                return 1;
                                                
                                                
                                                
                                                
                             }
                             
                             
                             
                             
    }
    return 0;
    
    
    
    
    
}

//verifica si se han cargado datos en el array productos.
int hay_producto(producto p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY2;i++)
    {
                             if(p[i].codigo==-1)
                             {
                                                return 1;
                                                
                                                
                                                
                                                
                             }
                             
                             
                             
                             
    }
    return 0;
    
    
    
    
    
}


int buscar_codigo_cliente(cliente p[],int num)
{
    
    int i;
    
    for(i=0;i<SIZE_ARRAY2;i++)
    {
                              if(p[i].codigo==num)
                              {
                                                  return i;
                                                  
                                                  
                              }
                              
                              
                              
    }
    
    return -2;
    
    
    
}


int buscar_codigo_producto(producto p[],int num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY1;i++)
    {
                              if(p[i].codigo==num)
                              {
                                                  return i;
                                                  
                                                  
                                                  
                              }
                              
                              
                              
    }
    return -2;
    
    
    
    
    
}

//Valida que el codigo del producto no se encuentre registrado.
int validar_repeticion(producto p[],int num)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY1;i++)
    {
                              if (num==p[i].codigo)
                              {
                                                   return 1;
                                                   
                                                   
                                                   
                              }
                              
                              
                              
                              
    }
    return 0;
    
    
    
    
    
    
}

//valida que el codigo del cliente no se encuentre registrado.
int validar_repeticion_cliente(cliente p[],int num)
{
        int i;
    
    for(i=0;i<SIZE_ARRAY2;i++)
    {
                              if (num==p[i].codigo)
                              {
                                                   return 1;
                                                   
                                                   
                                                   
                              }
                              
                              
                              
                              
    }
    return 0;
    
    
    
    
    
}



void mostrar_factura(cliente c[],producto p[],int posCliente,int posProducto,int cantVendida)
{
     float precioFinal;
     
     precioFinal= cantVendida*p[posProducto].precio;
     
          printf("\t\t   FACTURA A\n\n\n:");
     
     printf("%s  %s\n\n\n",c[posCliente].dat.nombre,c[posCliente].dat.apellido);
     
     printf("CANTIDAD:      DETALLE:         PRECIO UNITARIO:       PRECIO FINAL:\n\n\n    ");
    
    
    gotoxy(0,8);printf("%d",cantVendida);
    gotoxy(15,8);printf("%s", p[posProducto].descripcion);
    gotoxy(37,8);printf("$%.2f",p[posProducto].precio);
    gotoxy(57,8);printf("$%.2f\n", precioFinal);
    
    printf("\n\n");
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



//Lista clientes con monto mayor a 1000
void listar_clientes(cliente c[])
{
     int i;
     int a=0;
     
     printf("LISTA DE CLIENTES CON MONTO ACUMULADO DE COMPRAS MAYOR A $1000,00:\n\n\n");
     printf("CODIGO:        APELLIDO:       NOMBRE:           MONTO ACUMUL DE COMPRAS:\n");
     
     for(i=0;i<SIZE_ARRAY2;i++)
     {
                               if(c[i].montoCompras>1000)
                               {
                                                             
                                                             gotoxy(0,8);printf("%d",c[i].codigo);
                                                             gotoxy(15,8);printf("%s", c[i].dat.apellido);
                                                             gotoxy(31,8);printf("%s",c[i].dat.nombre);
                                                             gotoxy(57,8);printf("$%.2f\n", c[i].montoCompras);
                                                             a=1;    

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                               }
                               
                               
                               
                               
     }
     if(a==0)
     {
             printf("No hay ningun cliente con un monto acumulado de compras mayor a $1000,00\n");
             
             
     }
     
     printf("\n\n\n");
     system("PAUSE");
     system("cls");
     
     
     
     
     
     
}



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
          scanf("%c", resp);
          system("cls");
          
          a=1;
          resp=tolower(resp);
     
     }
     while(resp!='s'&&resp!='n');
     
     
     return resp;
     
     
     

}

