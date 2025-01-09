#include <stdio.h>
#include <string.h>

#define MAX_SINH_VIEN 100

typedef struct {
    int id;
    char ten[50];
    int tuoi;
    char sdt[15];
} SinhVien;

void nhapSinhVien(SinhVien sv[]) {
    printf("Nhap thong tin sinh vien:\n");
    printf("Nhap ID: ");
    scanf("%d", &sv->id);
    printf("Nhap ten: ");
    scanf("%s", sv->ten);
    printf("Nhap tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Nhap so dien thoai: ");
    scanf("%s", sv->sdt);
}

void hienThiSinhVien(SinhVien sv) {
    printf("%-10d %-20s %-5d %-15s\n", sv.id, sv.ten, sv.tuoi, sv.sdt);
}

void hienThiDanhSach(SinhVien sv[], int n) {
    printf("%-10s %-20s %-5s %-15s\n", "ID", "Ten", "Tuoi", "So dien thoai");
    for (int i = 0; i < n; i++) {
        hienThiSinhVien(sv[i]);
    }
}

void themSinhVien(SinhVien sv[], int &n) {
    if (n == MAX_SINH_VIEN) {
        printf("Danh sach da day!\n");
        return;
    }
    nhapSinhVien(&sv[n]);
    n++;
}

void xoaSinhVien(SinhVien sv[], int &n, int idXoa) {
    int i;
    for (i = 0; i < n; i++) {
        if (sv[i].id == idXoa) {
            break;
        }
    }
    if (i == n) {
        printf("Khong tim thay sinh vien can xoa!\n");
        return;
    }
    for (int j = i; j < n - 1; j++) {
        sv[j] = sv[j + 1];
    }
    n--;
}


void sapXepTheoID(SinhVien sv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sv[j].id > sv[j + 1].id) {
                SinhVien temp = sv[j];
                sv[j] = sv[j + 1];
                sv[j + 1] = temp;
            }
        }
    }
}

int timKiemTheoID(SinhVien sv[], int n, int idTim) {
    for (int i = 0; i < n; i++) {
        if (sv[i].id == idTim) {
            return i;
        }
    }
    return -1; 
}

int main() {
    SinhVien sinhVien[MAX_SINH_VIEN];
    int n = 0;

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Them sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. Sap xep theo ID\n");
        printf("4. Tim kiem sinh vien\n");
        printf("5. Hien thi danh sach\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                themSinhVien(sinhVien, n);
                break;
            case 2: {
                int idXoa;
                printf("Nhap ID sinh vien can xoa: ");
                scanf("%d", &idXoa);
                xoaSinhVien(sinhVien, n, idXoa);
                break;
            }
            case 3:
                sapXepTheoID(sinhVien, n);
                break;
            case 4: {
                int idTim;
                printf("Nhap ID sinh vien can tim: ");
                scanf("%d", &idTim);
                int index = timKiemTheoID(sinhVien, n, idTim);
                if (index != -1) {
                    hienThiSinhVien(sinhVien[index]);
                } else {
                    printf("Khong tim thay sinh vien!\n");
                }
                break;
            }
            case 5:
                hienThiDanhSach(sinhVien, n);
                break;
            case 0:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}
