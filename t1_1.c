#include <stdio.h>



int main()
{
    int numero = 10;
    int *p_numero;

    p_numero = &numero;
    
    printf("\nContenido del puntero p_numero: %d\n", *p_numero);

    printf("\nDireccion de memoria almacenada por el puntero: %p\n", p_numero);

    printf("\nDireccion de memoria de la varaible: %p\n", &numero);

    printf("\nDireccion de memoria del puntero: %p\n", &p_numero);
    
    printf("\nTamanio de memoria utilizado por la variables %zu bytes\n", sizeof(numero));


    return 0;
}