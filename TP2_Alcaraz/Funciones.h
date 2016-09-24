#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

int validarOpcion();
 /**
 * Da un valor inicial a cada array.
 * @param iniciar se pasa como parametro.
 * @return un valor 0 a cada array.
 */
void iniciarArray(EPersona iniciar[]);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

/**
 * Obtiene el indice con los nombres dados de alta.
 * @param lista el array se pasa como parametro.
 * @return lista ordenada alfabeticamente.
 */
void ordenarPersonas(EPersona lista[]);

/**
 * Obtiene el indice con las edades de las personas dadas de alta.
 * @param lista el array se pasa como parametro.
 * @return grafico de barras.
 */
void mostrarGrafico(EPersona lista[]);
#endif // FUNCIONES_H_INCLUDED
