/* Crear funcion que reciba un entero positivo.
Si es primo retorna 1, caso contrario retorna 0. */

#include <stdio.h>
int es_divisible(int, int);
int es_primo(int);

int main() 
{
    int ingreso;
    printf("Ingrese numero:\n");
    scanf("%d", &ingreso);
    if (es_primo(ingreso) == 1)
    {
        printf("%d es primo\n", ingreso);
    }
    else 
    {  
        printf("%d no es primo\n", ingreso);
    }
}

// si los numeros son divisibles retorna 1, caso contrario retona 0
int es_divisble(int numero, int divisor) 
{
    if (numero % divisor == 0) 
    {    
        return 1;
    }
    else 
    {    
        return 0;
    }
}

// si el numero es primo retorna 1, caso contrario retona 0
int es_primo(int numero) 
{
    int i;
    for (i = 2; i < numero; i++) 
    {
        if (es_divisble(numero, i) == 1) 
        {    
            return 0;
        }
    }
    return 1;
}
