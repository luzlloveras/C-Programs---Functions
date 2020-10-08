/* Crear funcion que reciba un entero positivo.
Si es perfecto retorna 1. Caso contrario retorna 0.
Utilizarla para mostrar los primeros 4 numeros perfectos. */

#include <stdio.h>
int es_perfecto(int);

int main() {
    int j, perfectos;
    perfectos = 0 ;
    while(perfectos<5) {
        for(j=1;j<9000;j++) {
            if(es_perfecto(j)==1)
                printf("\n %d es un numero perfecto", j);
                perfectos++;
        }
    }
    return 0;
}

int es_perfecto(int numero) {
    int i, divisores;
    divisores = 0;
    for(i=1;i<numero;i++){
        if(numero % i == 0)
            divisores+=i;
    }
    if(divisores==numero)
        return 1;
    else return 0;
}
