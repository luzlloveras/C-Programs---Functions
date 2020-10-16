#include <stdio.h>
float promedio(float, float);

int main() 
{
    float num1, num2, resultado;
    scanf("%f %f", &num1, &num2);
    resultado = promedio(num1, num2);
    printf("El resultado vale: %f\n", resultado);
}

float promedio(float x, float y) 
{
    float aux = (x + y) / 2;
    return aux;
}
