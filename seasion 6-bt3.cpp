#include <stdio.h>
#include <string.h>

#define MAX_PASSWORD_LENGTH 20

int main() {
    char password[MAX_PASSWORD_LENGTH] = "123456"; // Mật khẩu mặc định
    char inputPassword[MAX_PASSWORD_LENGTH];

    printf("Nhap mat khau: ");

    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && i < MAX_PASSWORD_LENGTH - 1) {
        inputPassword[i++] = ch;
        printf("*");
    }
    inputPassword[i] = '\0';

    if (strcmp(inputPassword, password) == 0) {
        printf("\nMat khau dung!\n");
    } else {
        printf("\nMat khau sai!\n");
    }

    return 0;
}