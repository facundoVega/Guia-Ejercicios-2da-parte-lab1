#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "funciones.h"


#define SIZE_ARRAY1 100
#define SIZE_ARRAY2 45



void carga_cliente(cliente p[])
{
     int i;
     int auxCodigo;
     char resp;
     
     if (hay_cliente(p)==0)
     {
                           printf("ya se registraron  clientes\npor lo tanto esta opcion ya no esta disponible\n\n\n");
                           system("PAUSE");
                           system("cls");
                           
     }
     else
     {
         printf("\tCARGA DE CLIENTES:\n\n\n");
         for(i=0;i<SIZE_ARRAY2;i++)
         {
                               printf("cliente numero %d\n\n:", i+1);                
                               
                               auxCodigo=validar_entero_minimo("Numero de codigo del cliente",1 ); 
                
                
                if(validar_repeticion_cliente(p,auxCodigo))
                {
                                                           printf("El numero de codigo ingresado ya fue registrado previamente\nPor favor ingrese otro numero de codigo\n");
                                                           i--;                                                                           
                                                           
                                                           
                                                           
                }
                else
                {
                    p[i].codigo=auxCodigo;
                    pedir_y_validar_cadena("nombre del cliente",p[i].dat.nombre,30);  
                    pedir_y_validar_cadena("apellido del cliente",p[i].dat.apellido,30);
                     pedir_y_validar_cadena("direccion del cliente",p[i].dat.direccion,30);
                     p[i].montoCompras=pedir_y_validar_flotante("monto acummulado de las compras",0);
                               
                }          
                               
         }
     }
     
     
     
}


void carga_producto(producto p[])
{
     int i;
     int auxCodigo;
     
     if(hay_producto(p)==0)
     {
                           printf("ya se registraron  los productos\npor lo tanto esta opcion ya no esta disponible\n\n\n");
                           system("PAUSE");
                           system("cls");
                           
                           
                           
                           
                           
     }
     else
     {
         printf("\tCARGA DE PRODUCTOS:\n\n\n");
     
         for(i=0;i<SIZE_ARRAY1;i++)
         {
                               
                               printf("producto numero: %d\n\n\n", i+1);
                                               
                auxCodigo=validar_entero_minimo("Numero de codigo del producto",1 );  
                if(validar_repeticion(p,auxCodigo))
                {
                                                           printf("El numero de codigo ingresado ya fue registrado previamente\nPor favor ingrese otro numero de codigo\n");
                                                           i--;
                                                           
                }
                else
                {
                                    p[i].codigo=auxCodigo;
                                    p[i].precio=pedir_y_validar_flotante("precio unitario de los productos",0);        
                                    pedir_y_validar_cadena("descripcion del producto",p[i].descripcion,20);          
                                    p[i].stock=validar_entero_minimo("cantidad del producto en stock",1 );  
                                    
                 }              
                 
         }
         
     }
     
     
     
     
     
}


void hacer_mostrar_factura(cliente c[],producto p[])
{
    int cantVendida;
     if(hay_cliente(c)==1 || hay_producto(p)==1)
     {
                          printf("Debe registrar datos para clientes y para productos para poder usar esta opcion\n");
                          system("PAUSE");
                          system("cls");
                          
                          
                          
                          
     }
     else
     {
         int auxCodigo;
         int posCliente;
         
             auxCodigo=validar_entero_minimo("Numero de codigo del cliente",1 );     
             posCliente=buscar_codigo_cliente(c,auxCodigo);
             
             if(posCliente==-2)
             {
                               printf("El numero de codigo ingresado no pertenee a ningun cliente registrado\n");
                               system("PAUSE");
                               system("cls");
                               
                               
             }
             else
             {
                 int auxCodProduc;
                 int posProducto;
         
                 
                 
                 
                 
                            auxCodProduc=validar_entero_minimo("Numero de codigo del producto",1 );   
                            posProducto=buscar_codigo_producto( p,auxCodProduc);
                 
                 
                 if(posProducto==-2)
                 {
                                    
                     printf("El numero de codigo ingresado no pertenee a ningun producto registrado\n");
                     system("PAUSE");
                     system("cls");
                               
                                    
                                     
                 }
                 else
                 {
                                  // int cantVendida;
                     
                       
                       cantVendida=validar_entero_minimo("cantidad vendida",1 );
                                              
                     
                     
                     
                     if(cantVendida>p[posProducto].stock)
                     {
                                                         printf("no se puede efectuar la venta por que la cantidad solicitada es mayor a la cantidad en stock\n");
                                                         system("PAUSE");
                                                         system("cls");
                                                         
                                                         
                     }   
                     else
                     {
                         float totalProducto;
                         
                         p[posProducto].stock=p[posProducto].stock-cantVendida;
                         totalProducto=cantVendida*(p[posProducto].precio);
                         c[posCliente].montoCompras=c[posCliente].montoCompras+totalProducto;
                         
                         mostrar_factura(c,p,posCliente,posProducto,cantVendida);
                         
                     }
                     
                     
                     
                     
                     
                 }
                 
                 
             } 
             
         
         
         
     }
     
     
     
     
     
     
     
     
     
}


void listar(cliente c [],producto p[])
{
     if(hay_cliente(c)==1 || hay_producto(p)==1)
     {
                          printf("Debe registrar datos para clientes y para productos para poder usar esta opcion\n");
                          system("PAUSE");
                          system("cls");
                          
                          
                          
                          
     }
     else
     {
         listar_clientes(c);
         
         
         
         
     }
     
     
     
     
}
