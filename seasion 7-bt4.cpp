#include <iostream>

using namespace std;

int main() {
    int n;

    // Yêu cầu người dùng nhập số lượng phần tử
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Khai báo mảng với số lượng phần tử đã nhập
    int numbers[n];

    // Yêu cầu người dùng nhập giá trị cho từng phần tử
    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // In ra các phần tử của mảng
    cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}