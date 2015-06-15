#define SIZE_ARRAY1 100
#define SIZE_ARRAY2 45





int pedir_entero(char[]);
int validar_entero_minimo(char[],int );
void pedir_cadena(char[],char[]);
void pedir_y_validar_cadena(char[],char[],int);
float pedir_flotante(char[]);
float pedir_y_validar_flotante(char[],float);
void mostrar_menu();
int mostrar_y_validar_menu();
void inicializar_miembro(producto[], int);
void inicializar_miembro2(cliente[], int);
int hay_cliente(cliente[]);
int hay_producto(producto[]);
int buscar_codigo_cliente(cliente[],int);
int buscar_codigo_producto(producto[],int );
int validar_repeticion(producto[],int);
int validar_repeticion_cliente(cliente[],int);
void mostrar_factura(cliente[],producto[],int,int,int);
void gotoxy(int,int);
void listar_clientes(cliente[]);
char preguntar_y_validar(char[]);
