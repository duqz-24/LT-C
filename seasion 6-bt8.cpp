#include <stdio.h>
#include <math.h>

int main() {
    float tien_gui, lai_suat, so_thang;
    float tien_lai, tong_tien;

    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &tien_gui);

    printf("Nhap lai suat hang thang (%): ");
    scanf("%f", &lai_suat);

    printf("Nhap so thang gui: ");
    scanf("%f", &so_thang);

    lai_suat /= 100;

    tien_lai = tien_gui * pow(1 + lai_suat, so_thang) - tien_gui;
    tong_tien = tien_gui + tien_lai;

    printf("Tien lai: %.2f\n", tien_lai);
    printf("Tong tien nhan duoc: %.2f\n", tong_tien);

    return 0;
}