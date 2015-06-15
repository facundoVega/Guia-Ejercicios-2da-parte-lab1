#define SIZE_ARRAY 100




typedef struct libro{
        
        int codigo;
        int cant;
        char autor[31];
        char titulo[51];
        int cantPrestado;
        int cantInicial;
        
        }libro;


void registrar(libro[]);
void prestamo(libro[]);
void devolucion(libro[]);
void listar(libro[]);
