#include <iostream>

using namespace std;

int main() {
    int n;

    // Yêu cầu người dùng nhập số lượng phần tử
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Khai báo mảng
    int numbers[n];

    // Nhập các phần tử của mảng, kiểm tra và nhập lại nếu không phải số lẻ
    cout << "Nhap cac phan tu cua mang (chi nhap so le): " << endl;
    for (int i = 0; i < n; ++i) {
        do {
            cout << "Nhap so thu " << i + 1 << ": ";
            cin >> numbers[i];
        } while (numbers[i] % 2 == 0); // Kiểm tra số có phải là số lẻ không
    }

    // In ra các phần tử của mảng
    cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}