#define FILA 100
#define COLUMNA 6


void cargar_num_clientes(float[][]);
int pedir_entero(char[]);
int pedir_y_validar_entero(char[],int,int);
int buscar_elemento(float[][],int,int);
int mostrar_y_validar_transaccion();
void depositar(float[][],float,int);
float pedir_flotante(char[]);
float pedir_y_validar_flotante(char[],float);
void inicializar_campos(float[][]);
void extracciones(float[][],float,int);
void gotoxy(int,int);
void mostrar_y_listar_matriz(float[][]);
float mayor_de_columna(float[][],int);
void mostrar_mayor_deposito(float[][]);
