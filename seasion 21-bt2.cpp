#include <stdio.h>

int main() {
    FILE *fptr;
    char kytuDauTien;

    fptr = fopen("bt01.txt", "r");

    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    kytuDauTien = fgetc(fptr);

    printf("Ky tu dau tien trong file la: %c\n", kytuDauTien);

    fclose(fptr);

    return 0;
}
