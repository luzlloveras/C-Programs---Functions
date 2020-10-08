#include <stdio.h>
void funcion();
int x = 30;

int main() {
    x++;
    funcion();
    printf("x en main vale %d\n", x);
}

void funcion () {
    int x = 20;
    printf("x en funcion vale %d\n", x);
}
