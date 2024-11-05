// 12.Створити чергу цілих чисел. Обчислити кількість та суму елементів більше 100 елементів черги.//

#include <iostream>
#include <queue>
#include <cstdlib> 
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    queue<int> q;
    int n, x, sum = 0, k = 0;
    srand(time(0));

    cout << "12.Створити чергу цілих чисел. Обчислити кількість та суму елементів більше 100 елементів черги." << endl;
    cout << "Введіть розмір черги: ";
    cin >> n;

    cout << "Заповнення черги випадковими числами:\n";
    for (int i = 0; i < n; i++) {
        x = rand() % 500;
        q.push(x);
        cout << x <<endl;
    }
        while (!q.empty()) {
            if (q.front() >= 100) {
                sum += q.front();
                k += 1;
            }
            q.pop();
        }

        cout << "Сума елементів більших за 100: " << sum << endl;
        cout << "Кількість елементів більших за 100: " << k << endl;

        return 0;
    }