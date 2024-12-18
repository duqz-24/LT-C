#include <iostream>

using namespace std;

int main() {
    // Khai báo và gán giá trị cho mảng
    int numbers[5] = {20, 15, 30, 5, 25};

    // Tìm phần tử lớn nhất
    int max = numbers[0];
    for (int i = 1; i < 5; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Tìm phần tử nhỏ nhất
    int min = numbers[0];
    for (int i = 1; i < 5; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // In ra kết quả
    cout << "Phần tử lớn nhất trong mảng là: " << max << endl;
    cout << "Phần tử nhỏ nhất trong mảng là: " << min << endl;

    return 0;
}