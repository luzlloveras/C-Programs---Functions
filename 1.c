#include <stdio.h>

int main () {
    int a, i;
    a = 0;
    for (i=1;i<4;i++) {
        a++;
        printf("a del bloque es %d\n", a);
    }
    printf("%d\n", a);
}
