#include <iostream>

using namespace std;

int main() {
    // Khai báo và gán giá trị cho mảng
    int numbers[5] = {1, 2, 3, 4, 5};

    // Duyệt qua từng phần tử trong mảng
    for (int i = 0; i < 5; ++i) {
        // Kiểm tra xem phần tử có phải số lẻ không
        if (numbers[i] % 2 != 0) {
            // Nếu là số lẻ thì tăng lên 2 đơn vị
            numbers[i] += 2;
        } else {
            // Nếu là số chẵn thì tăng lên 3 đơn vị
            numbers[i] += 3;
        }
    }

    // In ra mảng sau khi thay đổi
    cout << "Mang sau khi thay doi: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}