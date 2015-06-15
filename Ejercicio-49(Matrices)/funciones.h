#define FILA 10
#define COLUMNA 8 

void mostrar_menu();
int mostrar_y_validar_menu();
float pedir_flotante(char[]);
float pedir_y_validar_flotante(char[],float);
void inicializar_matriz(float[][],float);
int hay_datos(float[][],int);
int pedir_entero(char[]);
int pedir_y_validar_entero(char[],int,int);
void ordenar_matriz(float[][]);
void mostrar_matriz(float[][]);
void gotoxy(int,int);
int buscar_elemento(float[][],int,int);
