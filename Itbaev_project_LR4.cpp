#include <iostream>
#include <vector>
using namespace std;

vector<int> results;

int enterA()
{
    int A;
    cout << "Введите A: ";
    while (!(cin >> A))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ошибка! Введите целое число A: ";
    }
    return A;
}

int enterB()
{
    int B;
    cout << "Введите B: ";
    while (!(cin >> B))
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ошибка! Введите целое число B: ";
    }
    return B;
}

int enterC()
{
    int C;
    cout << "Введите C (≠ 0): ";
    while (!(cin >> C) || C == 0)
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Ошибка! Введите целое число C, не равное нулю: ";
    }
    return C;
}

void remainder_of_difference()
{
    int A = enterA();
    int B = enterB();
    int C = enterC();

    int result = (A - B) % C;
    cout << "Результат: (A - B) % C = " << result << "\n";
    results.push_back(result);
}

void integer_division_part()
{
}

void showResults()
{
    if (results.empty())
    {
        cout << "Результатов пока нет.\n";
        return;
    }

    cout << "\nСписок всех полученных результатов:\n";
    for (size_t i = 0; i < results.size(); ++i)
    {
        cout << i + 1 << ") " << results[i] << "\n";
    }
}

int main()
{
    int choice;
    do
    {
        cout << "\n=== МЕНЮ ===\n";
        cout << "1. Найти остаток от деления разности A и B на C\n";
        cout << "2. Найти целую часть от деления A на сумму B и C\n";
        cout << "3. Показать все полученные результаты\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            remainder_of_difference();
            break;
        case 2:
            integer_division_part();
            break;
        case 3:
            showResults();
            break;
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Ошибка: неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}
