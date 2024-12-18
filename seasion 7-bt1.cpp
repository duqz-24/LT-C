#include <stdio.h>

using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Các số trong mảng là: ";
    for (int i = 0; i < length; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Mảng có " << length << " phần tử." << endl;

    return 0;
}