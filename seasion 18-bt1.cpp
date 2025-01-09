#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhvien1;

    // Gán giá tr? cho các thành ph?n c?a c?u trúc
    strcpy(sinhvien1.name, "Nguyen Van A");
    sinhvien1.age = 20;
    strcpy(sinhvien1.phoneNumber, "0123456789");

    // In thông tin sinh viên ra màn hình
    printf("Ten sinh vien: %s\n", sinhvien1.name);
    printf("Tuoi: %d\n", sinhvien1.age);
    printf("So dien thoai: %s\n", sinhvien1.phoneNumber);

    return 0;
}
