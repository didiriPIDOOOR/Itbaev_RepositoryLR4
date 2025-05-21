#include <iostream>
using namespace std;

int enterA();
int enterB();
int enterC();

void remainder_of_difference();
void integer_division_part();

int main()
{
    int choice;
    do
    {
        cout << "\n=== МЕНЮ ===\n";
        cout << "1. Найти остаток от деления разности A и B на C\n";
        cout << "2. Найти целую часть от деления A на сумму B и C\n";
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
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Ошибка: неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}
