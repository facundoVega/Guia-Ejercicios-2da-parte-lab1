#define SIZE_ARRAY 100

typedef struct jugador
{
        char nombre[21];
        char nombreEquipo[21];
        int  partidosJugados;
        int goles;
        float promedioGoles;
        
        
        
        
}jugador;


void pedir_cadena(char[],char[]);
void pedir_y_validar_cadena(char[],char[],int);
int pedir_entero(char[]);
int validar_entero_minimo(char[],int);
void registrar_jugadores(jugador[]);
void mostrar_menu();
int mostrar_y_validar_menu();
void inicializar_miembro(jugador[], int);
void mostrar_array(jugador[]);
void listar_mostrar(jugador[]);
void gotoxy(int ,int );
