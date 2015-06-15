#define SIZE_ARRAY 10

 typedef struct direccion{
        
        char calle[31];
        char localidad[31];
        char numero[5];
        
        
        
        
        }direccion;







typedef struct empleado{
        
        char nombre[21];
        int edad;
        char sexo;
        direccion dire;
        
        
        
        }empleado;
        
        

void registrar(empleado[]);
void listar1(empleado[]);
void listar2(empleado[]);
void listar3(empleado[]);
void listar4(empleado[]);
