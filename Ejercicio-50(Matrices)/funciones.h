#define FILA 8
#define COLUMNA 7

void inicializar_matriz(float[][],float);
int hay_espacio(float[][],int);
int pedir_entero(char[]);
int pedir_y_validar_entero(char[],int,int);
int validar_repeticion(float[][],float,int);
int preguntar_y_validar(char[]);
void ingreso_y_calculos_datos_matriz(float[][],int);
float pedir_flotante(char[]);
float pedir_y_validar_flotante(char[],float);
float calcular_total(float,float);
float calcular_ganancia_perdida(float,float,float);
int hay_datos(float[][],int);
void mensaje_no_disponible();
int buscar_elemento(float[][],int,int);
void modificar_datos_matriz(float[][],int);
void ordenar(float[][],int);
int limite_ordenar(float[][],int);
void listar_matriz(float[][]);
void gotoxy(int ,int );
void mostrar_titulos_lista();
