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
        return 0; // File không t?n t?i ho?c l?i
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
            return 1; // Tài kho?n dã t?n t?i
        }
    }
    return 0; // Tài kho?n chua t?n t?i
}

void dang_ky() {
    if (num_accounts == MAX_ACCOUNTS) {
        printf("Danh sách tài kho?n dã d?y. Không th? dang ký thêm.\n");
        return;
    }

    Account new_account;
    printf("Nh?p tài kho?n: ");
    scanf(" %[^\n]s", new_account.username);

    if (tim_tai_khoan(new_account.username)) {
        printf("Tài kho?n dã t?n t?i. Vui lòng nh?p tài kho?n khác.\n");
        return;
    }

    printf("Nh?p m?t kh?u: ");
    scanf(" %[^\n]s", new_account.password);

    char confirm_password[MAX_PASSWORD_LENGTH];
    printf("Xác nh?n m?t kh?u: ");
    scanf(" %[^\n]s", confirm_password);

    if (strcmp(new_account.password, confirm_password) != 0) {
        printf("M?t kh?u không kh?p. Vui lòng th? l?i.\n");
        return;
    }

    accounts[num_accounts++] = new_account;
    ghi_du_lieu_vao_file();
    printf("Ðang ký thành công.\n");
}

void dang_nhap() {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Nh?p tài kho?n: ");
    scanf(" %[^\n]s", username);
    printf("Nh?p m?t kh?u: ");
    scanf(" %[^\n]s", password);

    for (int i = 0; i < num_accounts; i++) {
        if (strcmp(accounts[i].username, username) == 0 && strcmp(accounts[i].password, password) == 0) {
            printf("Ðang nh?p thành công.\n");
            return;
        }
    }

    printf("Ðang nh?p th?t b?i. Vui lòng ki?m tra tài kho?n và m?t kh?u.\n");
}

void hien_thi_menu() {
    printf("\n--- MENU --- \n");
    printf("1. Ðang nh?p \n");
    printf("2. Ðang ký \n");
    printf("3. Thoát \n");
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
                printf("C?m on b?n dã s? d?ng chuong trình!\n");
                break;
            default:
                printf("L?a ch?n không h?p l?. Vui lòng th? l?i.\n");
        }
    } while (choice != 3);

    return 0;
}
