#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100]; 

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    chuoi[strcspn(chuoi, "\n")] = '\0';

    int do_dai = strlen(chuoi);

    printf("Chuoi vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %d ky tu\n", do_dai);

    return 0;
}
