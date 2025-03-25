#include <iostream>
using namespace std;

int countZeros(int A[], int N) {
    int count = 0;  // Змінна для підрахунку нулів
    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {  // Якщо елемент масиву дорівнює нулю
            count++;
        }
    }
    return count;
}

int main() {
    int A[] = {1, 0, 3, 0, 5, 0, 7};  // Масив
    int N = sizeof(A) / sizeof(A[0]);  // Розмір масиву

    cout << "Кількість нульових елементів: " << countZeros(A, N) << endl;

    return 0;
}
