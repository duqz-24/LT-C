#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50


typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
} SinhVien;


SinhVien students[MAX_STUDENTS];
int num_students = 0;


void hien_thi_menu() {
    printf("\n--- MENU QUAN LY SINH VIEN ---\n");
    printf("1. In danh sach sinh vien\n");
    printf("2. Them sinh vien\n");
    printf("3. Sua thong tin sinh vien\n");
    printf("4. Xoa sinh vien\n");
    printf("5. Tim kiem sinh vien\n");
    printf("6. Sap xep danh sach sinh vien\n");
    printf("7. Thoat\n");
    printf("Nhap lua chon cua ban: ");
}


void in_danh_sach_sinh_vien() {
    if (num_students == 0) {
        printf("Danh sach sinh vien trong.\n");
        return;
    }
    printf("DANH SACH SINH VIEN:\n");
    for (int i = 0; i < num_students; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d\n", students[i].id, students[i].name, students[i].age);
    }
}


void them_sinh_vien() {
    if (num_students == MAX_STUDENTS) {
        printf("Danh sach sinh vien da day. Khong the them.\n");
        return;
    }

    printf("Nhap ID sinh vien: ");
    scanf("%d", &students[num_students].id);
    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]s", students[num_students].name);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &students[num_students].age);

    num_students++;
    printf("Them sinh vien thanh cong.\n");
}


void sua_thong_tin_sinh_vien() {
    int id;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);

    for (int i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            printf("Nhap ten sinh vien moi: ");
            scanf(" %[^\n]s", students[i].name);
            printf("Nhap tuoi sinh vien moi: ");
            scanf("%d", &students[i].age);
            printf("Sua thong tin sinh vien thanh cong.\n");
            return;
        }
    }

    printf("Khong tim thay sinh vien co ID %d.\n", id);
}


void xoa_sinh_vien() {
    int id;
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &id);

    for (int i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            for (int j = i; j < num_students - 1; j++) {
                students[j] = students[j + 1];
            }
            num_students--;
            printf("Xoa sinh vien thanh cong.\n");
            return;
        }
    }

    printf("Khong tim thay sinh vien co ID %d.\n", id);
}


void tim_kiem_sinh_vien() {
    int id;
    printf("Nhap ID sinh vien can tim: ");
    scanf("%d", &id);

    for (int i = 0; i < num_students; i++) {
        if (students[i].id == id) {
            printf("Tim thay sinh vien:\n");
            printf("ID: %d, Ten: %s, Tuoi: %d\n", students[i].id, students[i].name, students[i].age);
            return;
        }
    }

    printf("Khong tim thay sinh vien co ID %d.\n", id);
}


void sap_xep_danh_sach_sinh_vien() {
    
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                SinhVien temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep danh sach sinh vien theo ID.\n");
}

int main() {
    int choice;
    do {
        hien_thi_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                in_danh_sach_sinh_vien();
                break;
            case 2:
                them_sinh_vien();
                break;
            case 3:
                sua_thong_tin_sinh_vien();
                break;
            case 4:
                xoa_sinh_vien();
                break;
            case 5:
                tim_kiem_sinh_vien();
                break;
            case 6:
                sap_xep_danh_sach_sinh_vien();
                break;
            case 7:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 7);

    return 0;
}
