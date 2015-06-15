#include <stdio.h>
#include <stdlib.h>
#include "lib.h"



#define SIZE_ARRAY 100





void mostrar_menu()
{
        
        printf("\tMENU PRINCIPAL:\n\n\n");
        printf("\t1_REGISTRAR PERSONA\n");
        printf("\t2_INFORMAR\n");
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



void registrar(persona p[],int* cont)
{
     
     if(*cont >=SIZE_ARRAY)
     {
              printf("Ya se registrarom a todas las personas necesarias\npor lo tanto esta opcion no esta disponible\n");
              system("PAUSE");
              system("cls");
              
              
     }
     else
     {
         
         pedir_y_validar_cadena("nombre de la persona",p[*cont].nombre,20);
         p[*cont].sexo=pedir_y_validar_char("sexo F o M",'F','M');
         p[*cont].edad=pedir_y_validar_entero("edad de la persona",150,0);
         
         *cont=*cont +1;
              
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




/*retorna un caracter que es leido por pantalla.
*/

char pedir_char(char mensaje[])
{
     char letra;
     
     printf("Ingrese %s\n", mensaje);
     fflush(stdin);
     scanf("%c", &letra);
     system("cls");
     
     return letra;
     
     
     
     
     
}



/*pide un caracter por console y valida que sea igual a uno de los dos recibidos como parametros("letra1", "letra2")
/*retorna el caracter validado
*/

char pedir_y_validar_char(char mensaje[],char letra1,char letra2)
{
     int a=0;
     char caracter;
     
     do
     {
          if(a)    
                   printf("ERROR , conteste con %c o con %c en esta pregunta\nIntente nuevamente\n", letra1,letra2);
          
          
          caracter=pedir_char(mensaje);
          a=1;

          caracter =toupper(caracter);

          
          
     }
     while(caracter!=letra1 &&caracter!=letra2);
     
     return caracter;
     
     
     
     
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

void calcular(persona p[])
{
     if(hay_elemento(p))
     {
                        int contMujeres;
                        int contHombres;
                        
                        contMujeres=contar_mujeres(p);
                        contHombres=contar_hombre(p);
                        
                        printf(" CANTIDAD DE HOMBRES MENORES A 37 ANIOS:%d\n", contHombres);
                        printf(" CANTIDAD DE MUJERES DE ENTRE 20 A 30 ANIOS:%d\n\n\n", contMujeres);
                        
                        system("PAUSE");
                        system("cls");
                        
     }
     else
     {
         printf("No hay datos cargados al programa \nPor lo tanto esta opcion no esta disponible\n\n\n");
         system("PAUSE");
         system("cls");
         
         
         
     }
     
     
     
     
     
     
}

/*inicializa el miembro de la estructura al num pasado como parametro.
*/

void inicializar_miembro(persona p1[],int num)
{
     int i;
     
     for(i=0;i<SIZE_ARRAY;i++)
     {
                              p1[i].edad=num;
                              
                              
                              
     }
     
     
     
}


//verifica si hay elementos carcgados en la estructura.
int hay_elemento(persona p[])
{
    int i;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].edad!=-1)
                             {
                                              return 1;
                                              
                                              
                             }
                             
                             
                             
                             
    }
    return 0;
    
    
    
    
    
    
}


int contar_mujeres(persona p[])
{
    int i;
    int cont=0;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].sexo=='F')
                             {
                                               if(p[i].edad>=20 && p[i].edad<=30)
                                               {
                                                         cont++;       
                                                                
                                                                
                                                                
                                                                
                                               }
                                               
                                               
                                               
                                               
                             }
                             
                             
                             
                             
    }
    return cont;
    
    
    
    
}

int contar_hombre(persona p[])
{
    int i;
    int cont=0;
    
    for(i=0;i<SIZE_ARRAY;i++)
    {
                             if(p[i].edad!=-1 && p[i].sexo=='M')
                             {
                                              if(p[i].edad<37)
                                              {
                                                              cont++;
                                                              
                                                              
                                                              
                                              }
                                              
                                              
                                              
                                              
                             }
                             
                             
                             
                             
                             
    }
    return cont;
    
    
    
    
}
