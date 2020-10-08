#include <stdio.h>

int main () {
    int a, i;
    a = 0;
    for (i=1;i<4;i++) {
        a++;
        printf("\n a del bloque es %d", a);
    }
    printf("\n %d", a);
}