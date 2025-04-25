#include <iostream>
#include <climits>  
using namespace std;

int findLastMaxNegativeAfterT(int A[], int N, int T) {
    int* pA = A;  
    int* pT = nullptr; 
    int lastMaxIndex = -1;  
    int maxNegative = INT_MIN;  

 
    for (int i = 0; i < N; ++i) {
        if (*(pA + i) == T) {
            pT = pA + i;  // Знайшли елемент T, pT вказує на нього
            break;
        }
    }

    if (pT == nullptr) {
        return -1;
    }

    // Ітеруємо по елементах масиву після елемента T
    for (int* p = pT + 1; p < pA + N; ++p) {
        if (*p < 0 && *p > maxNegative) {
            maxNegative = *p;
            lastMaxIndex = p - pA;  // Визначаємо індекс цього елемента
        }
    }

    return lastMaxIndex;  // Повертаємо індекс останнього максимального від'ємного елемента
}

int main() {
    int A[] = {1, -5, 3, -10, -2, 7, -3, -8};  // Масив
    int N = sizeof(A) / sizeof(A[0]);  // Розмір масиву
    int T = -10;  // Точний елемент для пошуку

    int result = findLastMaxNegativeAfterT(A, N, T);

    if (result == -1) {
        cout << "Не знайдено елемент, рівний " << T << ", або немає від'ємних елементів після нього." << endl;
    } else {
        cout << "Номер останнього максимального від'ємного елемента після елемента " << T << ": " << result << endl;
    }

    return 0;
}
