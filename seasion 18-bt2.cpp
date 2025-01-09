#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhvien1;

    printf("Nhap ten sinh vien: ");
    fgets(sinhvien1.name, 50, stdin);
    sinhvien1.name[strcspn(sinhvien1.name, "\n")] = '\0'; // Lo?i b? ký t? '\n' ? cu?i chu?i

    printf("Nhap tuoi: ");
    scanf("%d", &sinhvien1.age);

    printf("Nhap so dien thoai: ");
    fgets(sinhvien1.phoneNumber, 15, stdin);
    sinhvien1.phoneNumber[strcspn(sinhvien1.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ten: %s\n", sinhvien1.name);
    printf("Tuoi: %d\n", sinhvien1.age);
    printf("So dien thoai: %s\n", sinhvien1.phoneNumber);

    return 0;
}
