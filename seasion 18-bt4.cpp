#include <stdio.h>
#include <string.h>

#define MAX_SV 50

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhvien[MAX_SV];
    int i, n = 5; // Gi? s? nh?p thông tin c?a 5 sinh viên

    // Kh?i t?o ID b?t d?u t? 1
    int id = 1;

    for (i = 0; i < n; i++) {
        sinhvien[i].id = id++;
        printf("Nhap thong tin sinh vien thu %d:\n", id);

        printf("Nhap ten: ");
        fgets(sinhvien[i].name, 50, stdin);
        sinhvien[i].name[strcspn(sinhvien[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sinhvien[i].age);
        getchar(); // Tiêu th? ký t? '\n' còn sót l?i

        printf("Nhap so dien thoai: ");
        fgets(sinhvien[i].phoneNumber, 15, stdin);
        sinhvien[i].phoneNumber[strcspn(sinhvien[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nThong tin cac sinh vien:\n");
    for (i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", sinhvien[i].id);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
