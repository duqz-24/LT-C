#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nDo dai cua mang la: %d\n", size);

    return 0;
}