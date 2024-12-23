#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int getDaysInMonth(int year, int month) {
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}

int main() {
    int year, month;

    printf("Nhap nam: ");
    scanf("%d", &year);

    printf("Nhap thang: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le!\n");
    } else {
        int days = getDaysInMonth(year, month);
        printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    }

    return 0;
}