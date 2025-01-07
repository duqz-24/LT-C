#include <stdio.h>

int main() {
    int so = 10;
    int *ptr = &so;

    printf("Cách 1:\n");
    printf("Gia tri cua bien so la: %d\n", so);
    printf("Dia chi cua bien so la: %p\n", &so);

    printf("\nCách 2:\n");
    printf("Gia tri cua bien so (qua con tro) la: %d\n", *ptr);
    printf("Dia chi cua bien so (qua con tro) la: %p\n", ptr);

    return 0;
}
