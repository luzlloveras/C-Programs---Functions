/* Utilizar funcion primos_en_rango para mostrar cantidades de numeros
primos que hay en los rangos [1000-2000], [2000,3000] y [3000,4000]. */

#include <stdio.h>
int es_primo(int);
int primos_en_rango(int, int);

int main() {
    int rango1, rango2, rango3;

    rango1 = primos_en_rango(1000, 3000);
    rango2 = primos_en_rango(2000, 3000);
    rango3 = primos_en_rango(3000, 4000);
    
    printf("En rango [1000-2000] hay %d numeros primos, en el rango [2000-3000] hay %d numeros primos y en el rango [3000-4000] hay %d numeros primos\n", rango1, rango2, rango3);
    return 0;
}

// si el numero es primo retorna 1, caso contrario retona 0
int es_primo(int numero) {
    int i;
    for(i=2; i<numero; i++) {
        if(numero % i == 0) return 0;
    }
    return 1;
}

int primos_en_rango(int num1, int num2) {
    int i, contador=0;
    for(i=num1; i<=num2; i++) {
        if(es_primo(i)==1) contador++;
    }
    return contador;
}

