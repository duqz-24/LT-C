#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int stt;
    char hoTen[50];
    float toan, ly, hoa, sinh, van, diemTB;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    // Nhập số lượng học sinh
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);

    // Nhập thông tin cho từng học sinh
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);
        printf("STT: ");
        scanf("%d", &students[i].stt);
        printf("Ho va ten: ");
        scanf(" %[^\n]", students[i].hoTen);
        printf("Toan: ");
        scanf("%f", &students[i].toan);
        // ... tương tự cho các môn khác
        
        // Tính điểm trung bình
        students[i].diemTB = (students[i].toan + students[i].ly + students[i].hoa + students[i].sinh + students[i].van) / 5;
    }

    // Hiển thị bảng điểm
    printf("\nBang diem:\n");
    printf("%-5s %-30s %-8s %-8s %-8s %-8s %-8s %-8s\n", "STT", "Ho va Ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Van", "Diem TB");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-30s %-8.2f %-8.2f %-8.2f %-8.2f %-8.2f %-8.2f\n",
               students[i].stt, students[i].hoTen, students[i].toan, students[i].ly,
               students[i].hoa, students[i].sinh, students[i].van, students[i].diemTB);
    }

    return 0;
}