#define SIZE_ARRAY 200


typedef struct direccion {
        
        char direcc [31];
        char localidad [31];
        char codigoPostal[8];
        
        
        
        
        
        }direccion;
        
        
        
        
typedef struct fecha{
        
        int dia;
        int mes;
        int anio;
        
        
        
        }fecha;
        
        
typedef struct persona
{
        char nombre[21];
        char apellido[21];
        direccion dire;
        fecha date;
        
        
        
        
        
        
}persona;
