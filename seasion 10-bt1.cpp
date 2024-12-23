#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, x, found;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            printf("Phan tu %d co trong mang tai vi tri %d\n", x, i);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    }

    return 0;
}