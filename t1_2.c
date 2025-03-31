#include <stdio.h>
#include <math.h>

// Prototipos de Funciones
int cuadradoDeUnEntero(int num);
void cudradoDeUnNumero(int num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

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
    int var, *pVar;
    pVar = &var;
    printf("Ingrese un numero mayor\n");
    scanf("%d", &var);

    printf("Contenido de la variable: %d \n", *pVar);
    printf("Direccion de memoria: %p", pVar);

    printf("\n");
    printf("\n*********************************************************************************\n");
    // d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
    int a = 10, b = 15;
    printf("Valor de a: %d --- Valor de b: %d Antes de invertir\n", a,b);
    invertir(&a,&b);
    printf("Valor de a: %d --- Valor de b: %d Despues de invertir\n",a,b);

    printf("\n");
    printf("\n*********************************************************************************\n");
    
    // e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor
    int num_a = 27, num_b = 22;
    printf("Antes de ordenar valor de num_a : %d --- Valor de num_b %d\n", num_a, num_b);
    orden(&num_a, &num_b);
    printf("Despues de ordenar valor de num_a : %d --- Valor de num_b %d\n", num_a, num_b);
    
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

void invertir(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    
    if( *a == *b) {
        printf("El valor de a y igual al valor de b.\n");
    } else if( *a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
   
}
