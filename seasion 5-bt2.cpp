#include <stdio.h>

int main() {
    int soChoTruoc, soNhap;

    // Gán giá trị cho số cho trước (bạn có thể thay đổi giá trị này)
    soChoTruoc = 42; 

    printf("Nhap vao mot so: ");
    while (1) {
        scanf("%d", &soNhap);
        if (soNhap == soChoTruoc) {
            printf("Ban da nhap dung!\n");
            break; // Kết thúc vòng lặp
        } else {
            printf("So ban nhap sai. Vui long nhap lai: ");
        }
    }

    return 0;
}