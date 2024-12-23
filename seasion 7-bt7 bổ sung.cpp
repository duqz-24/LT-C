#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Nhap cac phan tu cua mang (chi duoc nhap so le):\n");
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &numbers[i]);
        } while (numbers[i] % 2 == 0); 
    }

    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}