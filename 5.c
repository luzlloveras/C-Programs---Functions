/* Crear funcion que reciba dos enteros positivos y retorne la cantidad
de numeros primos que se encuentran en el rango determinado por ellos. */

#include <stdio.h>
int es_primo(int);
int primos_en_rango(int, int);

int main() 
{
    int ingreso1, ingreso2, cant_primos;

    printf("Ingrese dos numeros:\n");
    scanf("%d %d", &ingreso1, &ingreso2);
    cant_primos = primos_en_rango(ingreso1, ingreso2);
    printf("La cantidad de primos encontrandos en el rango entre %d y %d es: %d\n", ingreso1, ingreso2, cant_primos);

    return 0;
}

// si el numero es primo retorna 1, caso contrario retona 0
int es_primo(int numero) 
{
    int i;
    for (i = 2; i<numero; i++) 
        if (numero % i == 0) 
            return 0;
    return 1;
}

int primos_en_rango(int num1, int num2) 
{
    int i, contador=0;
    for (i = num1; i <= num2; i++) 
        if (es_primo(i) == 1)
            contador++;
    return contador;
}
