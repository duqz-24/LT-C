#include <stdio.h>
#include <string.h>

#define MAX_SV 5

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhvien[MAX_SV];
    int i;

    for (i = 0; i < MAX_SV; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i+1);
        printf("Nhap ten: ");
        fgets(sinhvien[i].name, 50, stdin);
        sinhvien[i].name[strcspn(sinhvien[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sinhvien[i].age);
        // Tiêu th? ký t? '\n' còn sót l?i sau khi dùng scanf
        getchar();

        printf("Nhap so dien thoai: ");
        fgets(sinhvien[i].phoneNumber, 15, stdin);
        sinhvien[i].phoneNumber[strcspn(sinhvien[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nThong tin cac sinh vien:\n");
    for (i = 0; i < MAX_SV; i++) {
        printf("Sinh vien thu %d:\n", i+1);
        printf("Ten: %s\n", sinhvien[i].name);
        printf("Tuoi: %d\n", sinhvien[i].age);
        printf("So dien thoai: %s\n", sinhvien[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
