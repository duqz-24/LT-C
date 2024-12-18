#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    cout << "Nhap 5 so nguyen: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Mang vua nhap la: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}