#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "[+]Календарь\n\n[1]Январь\n[2]Февраль\n[3]Март\n[4]Апрель\n[5]Май\n[6]Июнь\n";
    cout << "[7]Июль\n[8]Август\n[9]Сентябрь\n[10]Октябрь\n[11]Ноябрь\n[12]Декабрь\n\n";
    cout << "[+]Выберите месяц: ";
    string month_name;
    int number_month, number_day; cin >> number_month;
    cout << "\n";
    system("cls");

    switch (number_month) {
    case 1:
        month_name = "Января";
        cout << "Выбран месяц: \"Январь\"\nВведите день месяца: ";
        break;
    case 2:
        month_name = "Февраля";
        cout << "Выбран месяц: \"Февраль\"\nВведите день месяца: ";
        break;
    case 3:
        month_name = "Марта";
        cout << "Выбран месяц: \"Март\"\nВведите день месяца: ";
        break;
    case 4:
        month_name = "Апреля";
        cout << "Выбран месяц: \"Апрель\"\nВведите день месяца: ";
        break;
    case 5:
        month_name = "Мая";
        cout << "Выбран месяц: \"Май\"\nВведите день месяца: ";
        break;
    case 6:
        month_name = "Июня";
        cout << "Выбран месяц: \"Июнь\"\nВведите день месяца: ";
        break;
    case 7:
        month_name = "Июля";
        cout << "Выбран месяц: \"Июль\"\nВведите день месяца: ";
    case 8:
        month_name = "Августа";
        cout << "Выбран месяц: \"Август\"\nВведите день месяца: ";
        break;
    case 9:
        month_name = "Сентября";
        cout << "Выбран месяц: \"Сентябрь\"\nВведите день месяца: ";
        break;
    case 10:
        month_name = "Октября";
        cout << "Выбран месяц: \"Октябрь\"\nВведите день месяца: ";
        break;
    case 11:
        month_name = "Ноября";
        cout << "Выбран месяц: \"Ноябрь\"\nВведите день месяца: ";
        break;
    case 12:
        month_name = "Декабря";
        cout << "Выбран месяц: \"Декабрь\"\nВведите день месяца: ";
        break;
    default:
        cout << "Некорректное значение\n\n";
        exit(1);
        break;
    }

    cin >> number_day;
    cout << "\n";

    switch (number_month) {
    case 4:
    case 6:
    case 9:
    case 11:

        switch (number_day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            cout << "\nКалендарь: " << number_day << " " << month_name;
            break;
        default:
            cout << "Некорретное значение";
            break;
        }
        break;
    case 2:
        switch (number_day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            cout << "\nКалендарь: " << number_day << " " << month_name;
            break;
        default:
            cout << "Некорретное";
            break;
        }
        break;
    default:
        switch (number_day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
            cout << "\nКалендарь: " << number_day << " " << month_name;
            break;
        default:
            cout << "Некорретное значение";
            break;
        }
        break;
    }
}