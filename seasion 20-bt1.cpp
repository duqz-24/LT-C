#include <stdio.h>
#include <string.h>

#define MAX_SACH 100

typedef struct {
    int maSach;
    char tenSach[50];
    char tacGia[50];
    float giaTien;
    char theLoai[50];
} Sach;

Sach sach[MAX_SACH];
int soLuongSach = 0;

void nhapSach(Sach *s) {
    printf("Nhap ma sach: ");
    scanf("%d", &s->maSach);
}

void hienThiSach(Sach s) {
    printf("%-10d %-30s %-20s %-10.2f %-20s\n",
           s.maSach, s.tenSach, s.tacGia, s.giaTien, s.theLoai);
}

void hienThiDanhSachSach() {
    if (soLuongSach == 0) {
        printf("Danh sach sach rong!\n");
        return;
    }
    printf("%-10s %-30s %-20s %-10s %-20s\n", "Ma sach", "Ten sach", "Tac gia", "Gia tien", "The loai");
    for (int i = 0; i < soLuongSach; i++) {
        hienThiSach(sach[i]);
    }
}

void themSach() {
    if (soLuongSach == MAX_SACH) {
        printf("Danh sach sach da day!\n");
        return;
    }
    nhapSach(&sach[soLuongSach]);
    soLuongSach++;
}

void xoaSach() {
    int maSachXoa;
    printf("Nhap ma sach can xoa: ");
    scanf("%d", &maSachXoa);
    int i;
    for (i = 0; i < soLuongSach; i++) {
        if (sach[i].maSach == maSachXoa) {
            break;
        }
    }
    if (i == soLuongSach) {
        printf("Khong tim thay sach can xoa!\n");
        return;
    }
    for (int j = i; j < soLuongSach - 1; j++) {
        sach[j] = sach[j + 1];
    }
    soLuongSach--;
}

void capNhatSach() {
    int maSachCapNhat;
    printf("Nhap ma sach can cap nhat: ");
    scanf("%d", &maSachCapNhat);
}

void sapXepSachTangDan() {
    for (int i = 0; i < soLuongSach - 1; i++) {
        for (int j = 0; j < soLuongSach - i - 1; j++) {
            if (sach[j].giaTien > sach[j + 1].giaTien) {
                Sach temp = sach[j];
                sach[j] = sach[j + 1];
                sach[j + 1] = temp;
            }
        }
    }
}

void timKiemSach() {
    char tenSachTim[50];
    printf("Nhap ten sach can tim: ");
    scanf("%s", tenSachTim);
    int found = 0;
    for (int i = 0; i < soLuongSach; i++) {
        if (strcmp(sach[i].tenSach, tenSachTim) == 0) {
            hienThiSach(sach[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sach!\n");
    }
}

void menu() {
    int luaChon;
    scanf("%d", &luaChon);
    switch (luaChon) {
        case 1:
            themSach();
            break;
        case 2:
            hienThiDanhSachSach();
            break;
        
    }
}

int main() {
    while (1) {
        menu();
    }
    return 0;
}
