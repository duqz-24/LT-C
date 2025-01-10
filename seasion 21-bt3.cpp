#include <stdio.h>
#include <string.h>

int main() {
    char filename[50], str[100];
    FILE *fp;

    printf("Nhap ten file: ");
    gets(filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    printf("Nhap chuoi: ");
    gets(str);

    fputs(str, fp);

    fclose(fp);

    printf("Da ghi chuoi vao file thanh cong!\n");

    return 0;
}
