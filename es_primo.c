//programa que determina si un numero es primo o no lo es

#include <stdio.h>
int es_divisible(int, int);
int es_primo(int);

int main() {
    int ingreso;
    scanf("%d", &ingreso);

    if(es_primo(ingreso) == 1) printf("\n %d es primo", ingreso);
    else printf("\n %d no es primo", ingreso);
}

// retorna 1 si numero es divisble por divisor, caso contrario retorna 0
int es_divisible(int numero, int divisor) {
    if(numero % divisor == 0) return 1;
    else return 0;
}

// retorna 1 si numero es primo, caso contrario retorna 0
int es_primo(int numero) {
    int i;
    for(i=2; i<numero; i++) {
        if(es_divisible(numero, i) == 1) return 0;
    }
    return 1;
}