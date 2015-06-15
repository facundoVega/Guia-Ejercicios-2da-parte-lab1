#define SIZE_ARRAY 30


typedef struct alumno{
        
        char apellido[21];
        int nota;
        int legajo;
        
        
        
        }alumno;




void mostrar_menu();
int mostrar_y_validar_menu();
void registrar(alumno[]);
void modificar(alumno[]);
void listar(alumno[]);
