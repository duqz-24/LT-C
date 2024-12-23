#include <stdio.h>

int main() {
    int numbers[5] = {8, 2, 15, 4, 10};
    int max = numbers[0]; 
    int min = numbers[0]; 

    for (int i = 1; i < 5; i++) {
    
        if (numbers[i] > max) {
            max = numbers[i];
        }

        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Phần tử lớn nhất trong mảng là: %d\n", max);
    printf("Phần tử nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}