/* Crear funcion que reciba dos numeros enteros positivos.
Si el par de numeros es amigo retorna 1, caso contrario retorna 0. */

#include <stdio.h>
int son_amigos(int, int);

int main() {
    int ingreso1, ingreso2;
    
    printf("\n Ingrese dos numeros");
    scanf("%d %d", &ingreso1, &ingreso2);

    if(son_amigos(ingreso1, ingreso2)==1)
        printf("\n El par %d y %d son amigos", ingreso1, ingreso2);
    else
        printf("\n El par %d y %d NO son amigos", ingreso1, ingreso2);
    
    return 0;
}

/* Retorna 1 si dos numeros son amigos, caso contrario retorna 0.

Dos numeros son amigos si cada uno de ellos es igual
a la suma de los divisores exactos del otro. */

int son_amigos(int numero1, int numero2) {
    int i, j, divisores_num1, divisores_num2;
    divisores_num1 = 0;
    divisores_num2 = 0;
    for(i=1;i<numero1;i++){
        if(numero1 % i == 0)
            divisores_num1+=i;
    }
    for(j=1;j<numero2;j++) {
        if(numero2 % j == 0)
            divisores_num2+=j;
    }
    if(numero1==divisores_num2 && numero2==divisores_num1)
        return 1;
    else return 0;
}

