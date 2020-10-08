#include <stdio.h>
int anio_actual();

int main() {
    int anio = anio_actual();
    printf("\n El anio actual es: %d", anio);
}

int anio_actual() {
    return 2020;
}
