#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float A,
          B;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",A);
        printf("2- Ingresar 2do operando (B=%.2f)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            {
                system("cls");
                printf("Ingrese el 1er operando: ");
                scanf("%f",&A);
                break;
            }

            case 2:
            {
                system("cls");
                printf("Ingrese el 2do operando: ");
                scanf("%f",&B);
                break;
            }
            case 3:
            {
                system("cls");
                suma(A,B);
                mensaje();
                break;
            }
            case 4:
            {
                system("cls");
                resta(A, B);
                mensaje();
                break;
            }
            case 5:
            {
                system("cls");
                division(A, B);
                mensaje();
                break;
            }
            case 6:
            {
                system("cls");
                multiplicar(A, B);
                mensaje();
                break;
            }
            case 7:
            {
                system("cls");
                factorial(A);
                mensaje();
                break;
            }
            case 8:
            {
                system("cls");
                suma(A, B);
                resta(A, B);
                division(A, B);
                multiplicar(A, B);
                factorial(A);
                mensaje();
                break;
            }
            case 9:
            {
                seguir = 'n';
                break;
            }
             default:
            {
            printf("\nError, esa opcion no es valida. Elija una opcion entre 1 y 9\n\n");
            system("pause");

            break;
            }
        }
        system("cls");
        fflush(stdin);
    }
    return 0;
}


