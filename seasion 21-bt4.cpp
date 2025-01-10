#include <stdio.h>

int main() {
    char filename[50], str[100];
    FILE *fp;

    printf("Nhap ten file: ");
    gets(filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    fgets(str, 100, fp);

    printf("Dong dau tien: %s", str);

    fclose(fp);

    return 0;
}
