#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban hoc sinh"; 
    int dem_tu = 0, i;

    printf("Chuoi ban dau: %s\n", chuoi);

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == ' ') {
            dem_tu++;
        }
    }

    dem_tu++;

    printf("So tu trong chuoi la: %d\n", dem_tu);

    return 0;
}