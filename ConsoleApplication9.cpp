// Підключення бібліотек
#include <iostream>
#include <algorithm>
#include <windows.h>

// Оголошення простору імен
using namespace std;

// Функція бульбашкового сортування масива по зростанню
void BubbleSort(int numbers[], int size) {
    bool swapped;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break; // Якщо не було обмінів - масив уже відсортований
    }
}

// Основна функція
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Оголошення змінних
    const int ARRAY_SIZE = 8;
    int number[ARRAY_SIZE];

    // Введення масиву
    cout << "Введіть 8 чисел:\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Число " << i + 1 << ": ";
        cin >> number[i];
    }

    // Виклик функції сортування
    BubbleSort(number, ARRAY_SIZE);

    // Виведення результату
    cout << "\nВідсортовані числа (від найменшого до найбільшого):\n";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << number[i] << " ";
    }

    cout << endl;
    return 0;
}