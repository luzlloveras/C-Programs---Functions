#include <stdio.h>
void funcion();
int x = 30;

int main() {
    x++;
    funcion();
    printf("\n x en main vale %d", x);
}

void funcion () {
    int x = 20;
    printf("\n x en funcion vale %d", x);
}