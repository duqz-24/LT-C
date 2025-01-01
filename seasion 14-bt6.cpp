#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban hoc sinh 123";
    int dem_chu_cai = 0, i;

    printf("Chuoi ban dau: %s\n", chuoi);

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            dem_chu_cai++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", dem_chu_cai);

    return 0;
}