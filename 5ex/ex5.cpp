#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[+]Переводчик\n[1]Русские слова\n[2]Английские слова\n[3]Выйти\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        system("cls");
        cout << "Переводчик \"Списоу русских слов\"\n\n[1]Дом\n[2]Дорога\n[3]Машина\n[4]Лицо\n[5]Стол\n[6]Телефон\n[7]Мышь\n[8]Клавиатура\n[9]Палец\n[10]Экран\n[11]Включить\n[12]Выключить\n[13]Небо\n[14]Стул\n[15]Ключь\n\n";
        cout << "Выберите номер слова: ";
        int rus_word;
        cin >> rus_word;
        switch (rus_word)
        {
            //rus->en
        case 1:
            cout << "Дом -> House";
            break;
        case 2:
            cout << "Дорога -> Road";
            break;
        case 3:
            cout << "Машина -> Car";
            break;
        case 4:
            cout << "Лицо -> Face";
            break;
        case 5:
            cout << "Стол -> Table";
            break;
        case 6:
            cout << "Телефон -> Phone";
            break;
        case 7:
            cout << "Мышь -> Mouse";
            break;
        case 8:
            cout << "Клавиатура -> Keyboard";
            break;
        case 9:
            cout << "Палец -> Finger";
            break;
        case 10:
            cout << "Экран -> Screen";
            break;
        case 11:
            cout << "Включить -> ON";
            break;
        case 12:
            cout << "Выключить -> OFF";
            break;
        case 13:
            cout << "Небо -> Sky";
            break;
        case 14:
            cout << "Стул -> Chair";
            break;
        case 15:
            cout << "Ключь -> Key";
            break;
        default:
            cout << "Вы ввели неверный номер";
            break;
        }
        break;
        //en->rus
    case 2:
        system("cls");
        cout << "Переводчик \"Списоу английских слов\"\n\n[1]House\n[2]Road\n[3]Road\n[4]Face\n[5]Table\n[6]Phone\n[7]Mouse\n[8]Keyboard\n[9]Finger\n[10]Screen\n[11]ON\n[12]OFF\n[13]Sky\n[14]Chair\n[15]Key\n\n";
        cout << "Выберите номер слова: ";
        int en_word;
        cin >> en_word;
        switch (en_word)
        {
        case 1:
            cout << "Houose -> Дом";
            break;
        case 2:
            cout << "Road -> Дорога";
            break;
        case 3:
            cout << "Car -> Машина";
            break;
        case 4:
            cout << "Face -> Лицо";
            break;
        case 5:
            cout << "Table -> Стол";
            break;
        case 6:
            cout << "Phone -> Телефон";
            break;
        case 7:
            cout << "Mouse -> Мышь";
            break;
        case 8:
            cout << "Keyboard -> Клавиатура";
            break;
        case 9:
            cout << "Finger -> Палец";
            break;
        case 10:
            cout << "Screen -> экран";
            break;
        case 11:
            cout << "ON -> Включить";
            break;
        case 12:
            cout << "OFF -> Выключить";
            break;
        case 13:
            cout << "Sky -> Небо";
            break;
        case 14:
            cout << "Chair -> Стул";
            break;
        case 15:
            cout << "Key -> Ключ";
            break;
        default:
            cout << "Вы ввели неверный номер";
            break;
        }
        break;
    case 3:
        system("cls");
        return 0;
    default:
        cout << "Вы ввели некорректное число";
        break;
    }
    return 0;
}
