/* Crear una funcion que lea un caracter de teclado y lo escriba en pantalla
colocando el caracter cuyo codigo ASCII es el siguiente al recibido. */

#include <stdio.h>
void next_ASCII();

int main() {
    next_ASCII();
    return 0;
}

void next_ASCII() {
    char x;
    printf("Ingrese un caracter:\n");
    scanf("%c", &x);
    x=(int)x;
    x+=1;
    x=(char)x;
    printf("El codigo ASCII siguiente al recibido es:%c\n", x);
}
