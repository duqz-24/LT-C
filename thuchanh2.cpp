#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    int soGioLam;
    float mucLuongGio, luongCoBan, phuCap, tongLuong;

    // Nhập dữ liệu
    cout << "Nhap so gio lam viec trong thang: ";
    cin >> soGioLam;
    cout << "Nhap muc luong theo gio: ";
    cin >> mucLuongGio;

    // Tính lương cơ bản
    luongCoBan = soGioLam * mucLuongGio;

    // Tính phụ cấp (nếu có)
    if (soGioLam > 160) {
        phuCap = luongCoBan * 0.1;
    } else {
        phuCap = 0;
    }

    // Tính tổng lương
    tongLuong = luongCoBan + phuCap;

    // In kết quả
    cout << "Luong co ban: " << luongCoBan << endl;
    cout << "Phu cap: " << phuCap << endl;
    cout << "Tong luong: " << tongLuong << endl;

    return 0;
}