#define FILA 30
#define COLUMNA 6


void inicializar_matriz(float[][],float);
int pedir_entero(char[]);
int pedir_y_validar_entero(char[],int,int);
int validar_repeticion(float[][]);
int hay_espacio(float[][],int);
int verificar_repeticion(float[][],float,int);
float pedir_flotante(char[]);
float calcular_porcentaje(float,float);
float pedir_y_validar_flotante(char[],float);
void mensaje_no_disponible();
int hay_datos(float[][],int);
void mostrar_matriz(float[][]);
float mayor_de_columna(float[][],int);
void mostrar_legajos_mayores(float,float[][]);
void ordenar_por_dato(float[][],int);
int limite_fila(float[][],int);
