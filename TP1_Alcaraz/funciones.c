#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

/** \brief funcion que suma dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la suma.
 */
 
 
void suma(float x, float y)
{
    printf("La suma de A+B es: %.2f\n", x+y);
}



/** \brief funcion que resta dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la resta.
 */
 
 
void resta(float x, float y)
{
    printf("La resta entre A-B es: %.2f\n", (x-y));
}



/** \brief funcion que divide dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la division.
 */
 
 
void division(float x, float y)
{
    if(y==0)
        printf("Error al realizar la division, no se puede dividir por cero\n");
    else
        printf("La division es: %.2f\n", x/y);
}



/** \brief funcion que multiplica dos numeros ingresados.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado de la multiplicacion.
 */
 
 
void multiplicar(float x, float y)
{
    printf("La multiplicacion de A*B es %.2f\n", x*y);
}



/** \brief funcion que da el factorial de un numero.
 * \param primer numero ingresado.
 * \param segundo numero ingresado.
 * \return resultado del factorial.
 */
 
 
void factorial(float x)
{
    float fac=1;
    int   i;

    if(x<0)
        printf("Error al realizar el factorial, ingrese un numero positivo\n");
    else if(x!=(int)x)
        printf("Error al realizar el factorial, ingrese un numero entero\n");
    else
   {
        for(i=1; i<=x; i++)
        fac*=i;
        printf("La factorizacion es: %.f\n", fac);
   }
}




/** \brief imprime un mensaje por pantalla y lee un caracter del teclado para continuar.
 * \param 
 * \param 
 * \return tecla seleccionada.
 */
 
 
void mensaje()
{
    printf("Presione cualquier tecla para continuar");
    getch();
}
