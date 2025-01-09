#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SAN_PHAM 100

typedef struct {
    int maSanPham;
    char tenSanPham[50];
    float giaNhap;
    float giaBan;
    int soLuong;
} SanPham;

SanPham sanPham[MAX_SAN_PHAM];
int soLuongSanPham = 0;
float doanhThu = 0;

void nhapSanPham(SanPham *sp) {
    printf("Nhap ma san pham: ");
    scanf("%d", &sp->maSanPham);
    printf("Nhap ten san pham: ");
    scanf("%s", sp->tenSanPham);
    printf("Nhap gia nhap: ");
    scanf("%f", &sp->giaNhap);
    printf("Nhap gia ban: ");
    scanf("%f", &sp->giaBan);
    printf("Nhap so luong: ");
    scanf("%d", &sp->soLuong);
    doanhThu -= sp->soLuong * sp->giaNhap; 
}

void hienThiSanPham(SanPham sp) {
    printf("%-10d %-30s %-10.2f %-10.2f %-10d\n",
           sp.maSanPham, sp.tenSanPham, sp.giaNhap, sp.giaBan, sp.soLuong);
}

void hienThiDanhSachSanPham() {
    if (soLuongSanPham == 0) {
        printf("Danh sach san pham rong!\n");
        return;
    }
    printf("%-10s %-30s %-10s %-10s %-10s\n", "Ma SP", "Ten san pham", "Gia nhap", "Gia ban", "So luong");
    for (int i = 0; i < soLuongSanPham; i++) {
        hienThiSanPham(sanPham[i]);
    }
}

void themSanPham() {
    if (soLuongSanPham == MAX_SAN_PHAM) {
        printf("Danh sach san pham da day!\n");
        return;
    }
    SanPham spMoi;
    nhapSanPham(&spMoi);
    int found = 0;
    for (int i = 0; i < soLuongSanPham; i++) {
        if (sanPham[i].maSanPham == spMoi.maSanPham) {
            sanPham[i].soLuong += spMoi.soLuong;
            doanhThu -= spMoi.soLuong * spMoi.giaNhap;
            found = 1;
            printf("San pham da ton tai, so luong da duoc cap nhat!\n");
            break;
        }
    }
    if (!found) {
        sanPham[soLuongSanPham++] = spMoi;
        doanhThu -= spMoi.soLuong * spMoi.giaNhap;
        printf("Them san pham thanh cong!\n");
    }
}

void xoaSanPham() {
    int maSanPhamXoa;
    printf("Nhap ma san pham can xoa: ");
    scanf("%d", &maSanPhamXoa);
    int i;
    for (i = 0; i < soLuongSanPham; i++) {
        if (sanPham[i].maSanPham == maSanPhamXoa) {
            break;
        }
    }
    if (i == soLuongSanPham) {
        printf("Khong tim thay san pham can xoa!\n");
        return;
    }
    for (int j = i; j < soLuongSanPham - 1; j++) {
        sanPham[j] = sanPham[j + 1];
    }
    soLuongSanPham--;
    printf("Xoa san pham thanh cong!\n");
}


void menu() {
     int luaChon;
    scanf("%d", &luaChon);
    switch (luaChon) {
        case 1:
            themSanPham();
            break;
        case 2:
            hienThiDanhSachSanPham();
            break;
        
    }
}

int main() {
    while (1) {
        menu();
    }
    return 0;
}
