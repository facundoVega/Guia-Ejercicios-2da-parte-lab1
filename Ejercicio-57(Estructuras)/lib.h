#define SIZE_ARRAY 200



typedef struct direccion{
        
        char dire[31];
        char telefono[31];
        
        
        
        
        
        }direccion;

typedef struct fecha{
        
        int dia;
        int mes;
        int anio;        
        
        
        
        
        
        
        }fecha;


typedef struct contacto{
        
        char nombre [21];
        char apellido[21];
        fecha date;
        direccion dir;
        int dni;
        
        }contacto;


void altas(contacto[]);
void modificar(contacto[]);
void baja(contacto[]);
void listar(contacto[]);
