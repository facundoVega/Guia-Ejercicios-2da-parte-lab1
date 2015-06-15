#define SIZE_ARRAY 100

typedef struct persona
{
        char nombre[21];
        char sexo;
        int edad;
        
        
        
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
void calcular(persona[]);
void inicializar_miembro(persona[], int);
int hay_elemento(persona[]);
int contar_mujeres(persona[]);
int contar_hombre(persona[]);
