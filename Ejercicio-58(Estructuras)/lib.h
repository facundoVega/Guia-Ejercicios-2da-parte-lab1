



#define SIZE_ARRAY1 100
#define SIZE_ARRAY2 45



typedef struct producto {
        
        int codigo;
        float precio;
        char descripcion [21];
        int stock;
        
        }producto;
        
        
typedef struct datos{
        
        char nombre[31];
        char apellido[31];
        char direccion[31];
        
        
        
        
        }datos;
        
        
typedef struct cliente{
        
        
        int codigo;
        datos dat;
        float montoCompras;
        
        
        
        
        
        
        }cliente;
        
        
        
void carga_cliente(cliente[]);
void carga_producto(producto[]);
void hacer_mostrar_factura(cliente[],producto[]);
void listar(cliente[],producto[]);
