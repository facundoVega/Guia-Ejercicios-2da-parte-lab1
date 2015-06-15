#define SIZE_ARRAY 100



typedef struct persona
{
        int edad;
        char nombre[21];
        char direccion[21];
        char numero[5];
        char telefono[10];
        char apellido[21];
        
        
        
        
}persona;


void mostrar_menu();
int mostrar_y_validar_menu();
void registrar(persona[],int*);
void pedir_cadena(char[],char[]);
void pedir_y_validar_cadena(char[],char[],int);
char pedir_char(char[]);
char pedir_y_validar_char(char[],char,char);
int pedir_entero(char[]);
int pedir_y_validar_entero(char[],int,int);
void inicializar_miembro(persona[], int);
void listar(persona[]);
int hay_elemento(persona[]);
void ordenar(persona[]);
void mostrar_array(persona[]);
void gotoxy(int,int);
