#include <stdio.h>
int anio_actual();

int main() 
{
    int anio = anio_actual();
    printf("El anio actual es: %d\n", anio);
}

int anio_actual() 
{
    return 2020;
}
