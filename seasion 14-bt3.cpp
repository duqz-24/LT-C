#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 
    int do_dai = strlen(chuoi);
    char chuoi_dao_nguoc[100]; 
 
    for (int i = 0; i < do_dai; i++) {
        chuoi_dao_nguoc[i] = chuoi[do_dai - i - 1];
    }
    chuoi_dao_nguoc[do_dai] = '\0'; 

    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Chuoi dao nguoc: %s\n", chuoi_dao_nguoc);

    return 0;
}