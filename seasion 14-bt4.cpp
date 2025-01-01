#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao cac ban!"; 
    char ky_tu;

    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &ky_tu); 

    int dem = 0;
    int do_dai = strlen(chuoi);

  
    for (int i = 0; i < do_dai; i++) {
        if (chuoi[i] == ky_tu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ky_tu, dem);

    return 0;
}