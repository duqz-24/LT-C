#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 

    int do_dai = strlen(chuoi);

    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Tung ky tu trong chuoi:\n");

    for (int i = 0; i < do_dai; i++) {
        printf("%c ", chuoi[i]);
    }

    printf("\n");

    return 0;
}