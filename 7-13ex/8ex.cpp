#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Фигуры\nВыберите фигуру:\n[1]Линия\n[2]Квадрат\n[3]Прямоугольник\n[4]Треугольник\n[5]Решётка\n[6]Крестик\n[7]Плюс\n";
    int figure;
    cin >> figure;
    switch (figure)
    {
    case 1://линия
        system("cls");
        cout << "Введите длину фигуры: ";
        int length;
        cin >> length;
        cout << "Введите текстуру: ";
        char texture;
        cin >> texture;
        cout << "Выберите направление: [1]по горизонтали [2]по вертикали\n";
        int direction;
        cin >> direction;
        if (length <= 0)
        {
            cout << "Некорректное значение длинны";
            return 0;
        }
        while (length > 0)
        {
            if (direction == 1)
            {
                cout << texture;
                length--;
            }
            else if (direction == 2) {
                cout << texture << endl;
                length--;
            }
            else {
                cout << "Нет такого направления";
                break;
            }
        }
        break;
    case 2: {//квадрат
        system("cls");
        cout << "[+]Фигура: Квадрат\n";
        cout << "[1]Заполненный\n[2]Пустой\n";
        cout << "[+]Выберите тип: ";
        int type;
        cin >> type;
        cout << "Размер: ";
        int size;
        cin >> size;
        cout << "[+]Текстура: ";
        char texture;
        cin >> texture;
        switch (type)
        {
        case 1: {//заполненный
            int res = size;
            int i = size;
            while (res > 0) {
                while (size > 0)
                {
                    cout << texture << " ";
                    size--;
                }
                size = i;
                cout << endl;
                res--;
            }
            break;
        }
        case 2: {//незаполненный
            int res = size;
            int i = size;
            bool quest = true;
            while (res > 0) {
                if (quest) {
                    while (size > 0)
                    {
                        cout << texture << " ";
                        size--;
                    }
                    quest = false;
                }
                else {
                    cout << texture << " ";
                    while (size - 2 > 0) {
                        cout << "  ";
                        size--;
                    }
                    cout << texture;
                }
                size = i;
                cout << endl;
                res--;
                if (res == 1)
                {
                    quest = true;
                }
            }
            break;
        }
        default:
            cout << "Вы ввели некорректное значение";
            break;
        }
        break;
    }
    case 3: {//прямоугольник
        system("cls");
        cout << "[+]Фигура: Прямоугольник\n";
        cout << "[1]Заполненный\n[2]Пустой\n";
        cout << "Выберите тип: ";
        int type;
        cin >> type;
        cout << "[+]Ширина: ";
        int width;
        cin >> width;
        cout << "[+]Высота: ";
        int high;
        cin >> high;
        cout << "[+]Текстура: ";
        char texture;
        cin >> texture;
        switch (type)
        {
        case 1: {//заполненный
            while (high > 0) {
                for (int i = 0; i < width; i++)
                {
                    cout << texture << " ";
                }
                cout << endl;
                high--;
            }
            break;
        }
        case 2: {//незаполненный
            bool quest = true;
            while (high > 0) {
                if (quest) {
                    for (int i = 0; i < width; i++)
                    {
                        cout << texture << " ";
                    }
                    quest = false;
                }
                else {
                    cout << texture << " ";
                    for (int i = 0; i < width - 2; i++)
                    {
                        cout << texture << " ";
                    }
                    cout << texture;
                }
                cout << endl;
                if (high == 1)
                {
                    quest = true;
                }
                high--;
            }
            break;
        }
        default:
            cout << "Вы ввели некорректное значение";
            break;
        }
        break;
    }
    case 4: {//треугольник
        system("cls");
        cout << "[+]Фигура: Треуголник\n";
        cout << "[1]Заполненный\n[2]Пустой\n";
        cout << "Выберите тип: ";
        int type;
        cin >> type;
        cout << "[+]Высота: ";
        int high;
        cin >> high;
        cout << "[+]Текстура: ";
        char texture;
        cin >> texture;
        switch (type)
        {
        case 1: {
            int chek = high;
            int chek1 = 0;
            while (high > 0) {
                for (int i = 0; i < high - 1; i++)
                {
                    cout << " ";
                }
                cout << texture << " ";
                if (high < chek) {
                    for (int i = 0; i < chek1; i++)
                    {
                        cout << texture << " ";
                    }
                    cout << texture;
                    chek1 += 1;
                }
                cout << endl;
                high--;
            }
            break;
        }
        case 2: {
            int chek = high;
            int chek1 = 1;
            while (high > 0) {
                for (int i = 0; i < high - 1; i++)
                {
                    cout << " ";
                }
                if (high == 1)
                {
                    while (high <= chek) {
                        cout << texture << " ";
                        high++;
                    }
                    return 0;
                }
                cout << texture;
                if (high < chek) {
                    for (int i = 0; i < chek1; i++)
                    {
                        cout << " ";
                    }
                    cout << texture;
                    chek1 += 2;
                }
                cout << endl;
                high--;
            }
            break;
        }
        default:
            cout << "Некорректное значение";
            break;
        }
        break;
    }
    case 5: {//решетка
        system("cls");
        cout << "[+]Фигура: Решётка\n";
        cout << "[+]Размер: ";
        int size;
        cin >> size;
        cout << "[+]Текстура: ";
        char texture;
        cin >> texture;
        int chek = size;
        while (size > 0) {
            if (size % 2 == 1)
            {
                for (int i = 1; i <= chek; i++) {
                    if (i % 2 == 1) {
                        cout << "  ";
                    }
                    else {
                        cout << texture << " ";
                    }
                }
            }
            else {
                for (int i = 1; i <= chek; i++)
                {
                    cout << texture << " ";
                }
            }
            cout << endl;
            size--;
        }
        break;
    }
    case 6: {
        system("cls");
        int size;

        cout << "[+]Фигура \"крестик\"\n";

        while (true) {
            cout << "Размер крестика: ";
            cin >> size;

            if (size < 1) {
                cin.clear();
                cin.ignore();
                cout << "\nнекорректные размеры\n";
            }
            else {
                break;
            }
        }

        cout << "\nТекстура крестика: ";
        cin >> texture;

        system("cls");

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || size - 1 - j == i) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
        break;
    }
    case 7: {
        int size;

        cout << "[+]Фигура \"плюс\"\n";

        while (true) {
            cout << "Укажите размер плюса. Размер плюса: ";
            cin >> size;

            if (size < 1 || size % 2 == 0) {
                cin.clear();
                cin.ignore();
                cout << "\nЛови ошибку в лицо, некорректные размеры он тут пишет...\n";
            }
            else {
                break;
            }
        }

        cout << "Текстура плюса: ";
        cin >> texture;

        system("cls");

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (size / 2 == i || size / 2 == j) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
        break;
    }
    default:
        cout << "У нас нет такой фигуры(";
        break;
    }
    return 0;
}