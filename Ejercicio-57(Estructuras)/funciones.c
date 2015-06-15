#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"
#include <string.h>
#include <windows.h>

#define SIZE_ARRAY 200


/*muestra un menu de opciones en pantalla
*/
void mostrar_menu()
{
        
        printf("\tMENU AGENDA:\n\n\n");
        printf("\t1_ALTAS\n");
        printf("\t2_MODIFICAR\n");
        printf("\t3_BAJA\n");
        printf("\t4_LISTAR\n");
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

void inicializar_miembro(contacto p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              p1[i].dni=num;
                              
                              
                              
     }
     
     
     
}


/*verifica si hay espacio para ingresar datos  a partir de un miembro de la estructura
/*si encuentra un menos uno retornara 1 y significa que hay espacio de lo contrario no hay espacio  y retornara 0.
*/ 
int hay_espacio(contacto p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].dni==-1)
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




/*valida que el numero entero pasado como parametro no coincida con ningun elemento del vector que tambien se recibe como parametro
/*retorna 1 si no hay coincidencia y retorna cero si la hay
*/

int validar_repeticion_entero(int num,contacto aux[])
{
    int i;
    int j;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(num==aux[i].dni)
                             {
                                            break;
                                            
                                            
                             }
                             
                             
                             
    }
    if(i==SIZE_ARRAY)
    {
                     
                     for(j=0;j<SIZE_ARRAY;j++)
                     {
                                              if(aux[j].dni==-1)
                                              {
                                                            aux[j].dni=num;
                                                            return 1;
                                                            break;
                                                            
                                              }
                                              
                                              
                                              
                     }
    }                    
                     
    else
    {
        return 0;
        
        
        
    }
    
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

//verifica si hay elementos cxargados a traves de una flag que en este caso el es el valor -1 del miembro dni de la estructura
int hay_elementos(contacto p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].dni!=-1)
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


/*si el numero recibido como parametro coincide con uno almacenado en el vector la funcion devuelve la posicion donde se da la coincidencia
/*si no coincide devolvera -1.
*/

int existe_numero(contacto vector[],int *numero)
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             
                if(vector[i].dni==*numero)
                {
                                     return i;
                                     
                                     
                                     
                }             
                             
                             
                             
    }
    return -1;
    
    
    
}

/*Muestra un menu correspondiete a "modificar"
*/
void mostrar_menu_modificar()
{
     
     printf("\tMENU DE MODIFICACIONES:\n\n\n");
     printf("\t1_NOMBRE DEL CONTACTO\n");
     printf("\t2_APELLIDO DEL CONTACTO\n");
     printf("\t3_DIRECCION DEL CONTACTO\n");
     printf("\t4_TELEFONO DEL CONTACTO\n");
     printf("\t5_ANIO DE NACIMINTO DEL CONTACTO\n");
     printf("\t6MES DE NACIMIENTO DEL CONTACTO\n");
     printf("\t7_DIA DE NACIMIENTO DEL CONTACTO\n");
     printf("\t8_VOLVER AL MENU PRINCIPAL\n\n\n");
     
     printf("Elija e ingrese un numero correspondiente\n al dato que desea modificar\n");
     
     
     
     
     
     
     
}




/*muestra el menu y valida que la opcion ingresada corresponda a una de las disponibles para el menu.
*/ 

int mostrar_y_validar_menu_modificar()
{
    int a=0;
    long int auxOpcion;
    int opcion;
    
    do
    {
         if(a)
              printf("ERROR,el numero ingresado no corresponde  a una opcion disponible del menu modificar\nIntente nuevamente\n");
              
         mostrar_menu_modificar();
         fflush(stdin);
         scanf("%d", &auxOpcion);
         system("cls");
         
         a=1;
    }
    while(auxOpcion>8||auxOpcion<1);
    opcion=auxOpcion;
    
    return opcion;
    
    
    
    
}


void ordenar_array(contacto p[])
{
     
     int i,j;
     contacto auxCont;
     
     for(i=0;i<SIZE_ARRAY-1;i++)
     {
                                for(j=i+1;j<SIZE_ARRAY;j++)
                                {
                                                           if(p[i].dni!=-1 && p[j].dni!=-1)
                                                           {
                                                                           
                                                                  if(strcmp(p[i].nombre,p[j].nombre)>0)
                                                                  {
                                                                                                       auxCont=p[i];
                                                                                                       p[i]=p[j];
                                                                                                       p[j]=auxCont;
                                                                                                       
                                                                  
                                                                                                       
                                                                                                       
                                                                                                       
                                                                  }         
                                                                           
                                                                           
                                                                           
                                                           }
                                                           
                                                           
                                                           
                                                           
                                                           
                                }
                                
                                
                                
     }
     
     
     
     
     
}


void mostrar_array(contacto p[])
{
     int i;
     
     printf("NOMBRE:      APELLIDO:     TELEFONO:     DIRECCION:       FECHA DE NACIMIENTO:\n");
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              if(p[i].dni!=-1)
                              {
                                                                     
                                                                     

                                  
                                  gotoxy(0,i+1);printf("%s", p[i].nombre);  
                                  gotoxy(13,i+1);printf("%s",p[i].apellido);                                                             
                                  gotoxy(27,i+1);printf("%s",p[i].dir.telefono);      
                                  gotoxy(42,i+1);printf("%s", p[i].dir.dire);              
                                  gotoxy(67,i+1);printf("%d/%d/%d ", p[i].date.dia,p[i].date.mes,p[i].date.anio);                             
                                                                 
                              
                              
                              
                                                                     
                              }                                   
                              
      }
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



//funcion que busca la primer posicion en donde el valor del miebro valga -1.
//devuelve esa posicion.En caso de no encontrar ese valor en ninguna posicion devuelve -1
int buscar_posicion(contacto p[])
{
    int  i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].dni==-1)
                             {
                                                return i;
                                                
                                                
                                                
                                                
                             }
                             
                             
                             
                             
    }
    return -1;
    
    
    
}
