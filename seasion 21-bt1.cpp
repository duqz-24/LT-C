#include<stdio.h>
#include<string.h>

int main(){
	char chuoi[100]; 
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin); 

    chuoi[strcspn(chuoi, "\n")] = '\0';

    FILE *fptr;
    fptr = fopen("bt01.txt", "w");

    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    fprintf(fptr, "%s", chuoi);
    fclose(fptr);

    printf("Da ghi chuoi vao file bt01.txt thanh cong!\n");
	
	return 0;
	}
	
