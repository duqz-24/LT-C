#include <stdio.h>

int main() {
    int numbers[5]; 
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}