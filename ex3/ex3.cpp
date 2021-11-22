#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "складывать[+]\nвычитать[-]\nумножать[*]\nделить[/]\nделение от остатка[%]\n";
    cout << "Введите действие:";
    string choice;
    cin >> choice;
    float one;
    cout << "Введите первое число:";
    cin >> one;
    float two;
    cout << "Введите второе число:";
    cin >> two;
    if (choice == "+") {
        cout << "[" << choice << "] Результат: " << one << choice << two << " = " << one + two;
    }
    else if (choice == "-") {
        cout << "[" << choice << "] Результат: " << one << choice << two << " = " << one - two;
    }
    else if (choice == "*") {
        cout << "[" << choice << "] Результат: " << one << choice << two << " = " << one * two;
    }
    else if (choice == "/") {
        if (two == 0 || one == 0) {
            cout << "Ноль и на нолль делить нельзя";
        }
        else {
            cout << "[" << choice << "] Результат: " << one << choice << two << " = " << one / two;
        }
    }
    else if (choice == "%") {
        int three = one;
        int four = two;
        cout << "[" << choice << "] Результат: " << one << choice << two << " = " << three % four;
    }
    else {
        cout << "Вы ввели некоректное действие";
    }
    return 0;
}

