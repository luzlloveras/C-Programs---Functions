/* Crear una funcion que calcule y retorne el valor de X^Y.
Siendo X e Y enteros positivos, dando un resultado entero. */

#include <stdio.h>
#include <math.h>
int calcular_potencia(int, int);

int main() 
{
    int x, y, potencia;
    x = 2;
    y = 7;
    potencia = calcular_potencia(x, y);
    printf("La potencia de x^y es: %d\n", potencia);
}

int calcular_potencia(x, y) 
{
    int i, resultado;
    resultado=x;
    for(i=1; i<y; i++) 
    {
        resultado *= x;
    }
    return resultado;
}
