#define SIZE_ARRAY 200

void mostrar_menu();
int mostrar_y_validar_menu();
void inicializar_miembro(contacto[], int);
int hay_espacio(contacto[]);
int pedir_entero(char[]);
int validar_entero_minimo(char[],int );
int validar_repeticion_entero(int,contacto[]);
void pedir_cadena(char[],char[]);
void pedir_y_validar_cadena(char[],char[],int);
int pedir_y_validar_entero(char[],int,int);
int hay_elementos(contacto[]);
void mensaje_no_disponible();
int existe_numero(contacto[],int*);
void mostrar_menu_modificar();
int mostrar_y_validar_menu_modificar();
void ordenar_array(contacto[]);
void mostrar_array(contacto[]);
void gotoxy(int,int);
int buscar_posicion(contacto[]);
