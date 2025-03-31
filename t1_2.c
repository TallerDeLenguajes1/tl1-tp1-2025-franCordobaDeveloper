#include <stdio.h>
#include <math.h>

// Prototipos de Funciones
int cuadradoDeUnEntero(int num);
void cudradoDeUnNumero(int num);

int main()
{
    // a) Haga una función que devuelva el cuadrado de un número
    int num = 5, resultado;   
    resultado = cuadradoDeUnEntero(num);
    printf("\nCuadrado del numero %d es: %d\n",num,resultado);

    printf("\n");
    printf("\n*********************************************************************************\n");

    // b) Haga la función anterior, pero devolviendo un tipo void
    cudradoDeUnNumero(num);

    printf("\n");
    printf("\n*********************************************************************************\n");

    // c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    int var;
    
    return 0;
}

int cuadradoDeUnEntero(int num)
{
    return num*num;
}

void cudradoDeUnNumero(int num)
{
    printf("\nCuadrado de un numero implementado en una funcion de tipo Void\n");
    printf("\nCuadrado del numero es: %d\n", (int)pow(num,2));
}
