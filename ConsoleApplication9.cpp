#include <iostream>

int main() {
    const int SIZE = 8;
    int n[SIZE];

    std::cout << "Введіть 8 чисел:\n";
    for (int i = 0; i < SIZE; i = i + 1) {
        std::cout << "Число " << i + 1 << ": ";
        std::cin >> n[i];
    }

    for (int i = 0; i < SIZE - 1; i = i + 1) {
        for (int j = 0; j < SIZE - i - 1; j = j + 1) {
            if (n[j] > n[j + 1]) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    std::cout << "\nВідсортовані числа (від найменшого до найбільшого):\n";
    for (int i = 0; i < SIZE; i = i + 1) {
        std::cout << n[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}