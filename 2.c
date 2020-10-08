/* En el programa se esta cometiendo un error al transferir
un entero a la funcion y recibirlo en un parametro tipo char */

#include <stdio.h>
void funcion(int);

int main() {
    int a;
    a = 1857;
    funcion(a);
    printf("Main %d\n", a);
}

void funcion(int a) {
    printf("Funcion %d\n", a);
}
