#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

void suma(float x, float y)
{
    printf("La suma de A+B es: %.2f\n", x+y);
}

void resta(float x, float y)
{
    printf("La resta entre A-B es: %.2f\n", (x-y));
}

void division(float x, float y)
{
    if(y==0)
        printf("Error al realizar la division, no se puede dividir por cero\n");
    else
        printf("La division es: %.2f\n", x/y);
}

void multiplicar(float x, float y)
{
    printf("La multiplicacion de A*B es %.2f\n", x*y);
}

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

void mensaje()
{
    printf("Presione cualquier tecla para continuar");
    getch();
}
