#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define MAX_USERNAME_LENGTH 50
#define MAX_PASSWORD_LENGTH 50
#define FILENAME "accounts.bin"

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} Account;

Account accounts[MAX_ACCOUNTS];
int num_accounts = 0;

int doc_du_lieu_tu_file() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        return 0; // File kh�ng t?n t?i ho?c l?i
    }
    num_accounts = fread(accounts, sizeof(Account), MAX_ACCOUNTS, file);
    fclose(file);
    return 1;
}

int ghi_du_lieu_vao_file() {
    FILE *file = fopen(FILENAME, "wb");
    if (file == NULL) {
        return 0; // L?i m? file
    }
    fwrite(accounts, sizeof(Account), num_accounts, file);
    fclose(file);
    return 1;
}


int tim_tai_khoan(const char *username) {
    for (int i = 0; i < num_accounts; i++) {
        if (strcmp(accounts[i].username, username) == 0) {
            return 1; // T�i kho?n d� t?n t?i
        }
    }
    return 0; // T�i kho?n chua t?n t?i
}

void dang_ky() {
    if (num_accounts == MAX_ACCOUNTS) {
        printf("Danh s�ch t�i kho?n d� d?y. Kh�ng th? dang k� th�m.\n");
        return;
    }

    Account new_account;
    printf("Nh?p t�i kho?n: ");
    scanf(" %[^\n]s", new_account.username);

    if (tim_tai_khoan(new_account.username)) {
        printf("T�i kho?n d� t?n t?i. Vui l�ng nh?p t�i kho?n kh�c.\n");
        return;
    }

    printf("Nh?p m?t kh?u: ");
    scanf(" %[^\n]s", new_account.password);

    char confirm_password[MAX_PASSWORD_LENGTH];
    printf("X�c nh?n m?t kh?u: ");
    scanf(" %[^\n]s", confirm_password);

    if (strcmp(new_account.password, confirm_password) != 0) {
        printf("M?t kh?u kh�ng kh?p. Vui l�ng th? l?i.\n");
        return;
    }

    accounts[num_accounts++] = new_account;
    ghi_du_lieu_vao_file();
    printf("�ang k� th�nh c�ng.\n");
}

void dang_nhap() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Nh?p t�i kho?n: ");
    scanf(" %[^\n]s", username);
    printf("Nh?p m?t kh?u: ");
    scanf(" %[^\n]s", password);

    for (int i = 0; i < num_accounts; i++) {
        if (strcmp(accounts[i].username, username) == 0 && strcmp(accounts[i].password, password) == 0) {
            printf("�ang nh?p th�nh c�ng.\n");
            return;
        }
    }

    printf("�ang nh?p th?t b?i. Vui l�ng ki?m tra t�i kho?n v� m?t kh?u.\n");
}

void hien_thi_menu() {
    printf("\n--- MENU --- \n");
    printf("1. �ang nh?p \n");
    printf("2. �ang k� \n");
    printf("3. Tho�t \n");
    printf("L?a ch?n c?a b?n: ");
}

int main() {
    if (!doc_du_lieu_tu_file()) {
        printf("Kh?i t?o file d? li?u m?i.\n");
    }

    int choice;
    do {
        hien_thi_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                dang_nhap();
                break;
            case 2:
                dang_ky();
                break;
            case 3:
                printf("C?m on b?n d� s? d?ng chuong tr�nh!\n");
                break;
            default:
                printf("L?a ch?n kh�ng h?p l?. Vui l�ng th? l?i.\n");
        }
    } while (choice != 3);

    return 0;
}
