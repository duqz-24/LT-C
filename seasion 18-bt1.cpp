#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct SinhVien sinhvien1;

    // G�n gi� tr? cho c�c th�nh ph?n c?a c?u tr�c
    strcpy(sinhvien1.name, "Nguyen Van A");
    sinhvien1.age = 20;
    strcpy(sinhvien1.phoneNumber, "0123456789");

    // In th�ng tin sinh vi�n ra m�n h�nh
    printf("Ten sinh vien: %s\n", sinhvien1.name);
    printf("Tuoi: %d\n", sinhvien1.age);
    printf("So dien thoai: %s\n", sinhvien1.phoneNumber);

    return 0;
}
