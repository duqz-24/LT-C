#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100]; 

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, 100, stdin); '\0';

    chuoi[strcspn(chuoi, "\n")] = '\0';

    int do_dai = strlen(chuoi);

    printf("Chuoi ban vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %d\n", do_dai);

    return 0;
}