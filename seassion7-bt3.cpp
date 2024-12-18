#include <iostream>

using namespace std;

int main() {
    // Khai báo mảng có 5 phần tử
    int numbers[5];

    // Yêu cầu người dùng nhập giá trị cho từng phần tử
    cout << "Nhap 5 so nguyen: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // In ra các phần tử của mảng
    cout << "Mang vua nhap la: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}