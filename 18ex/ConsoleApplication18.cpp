#include <iostream>
#include <ctime>
using namespace std;

void play(string colorO, string colorX, int move, int size_area) {
    srand(time(NULL));
    const int SIZE = 5;
    string game[SIZE][SIZE];
    int minus_area = 1;
    int count = 0;
    int random = 9;
    cout << "количество игроков(1 или 2): ";
    int players;
    cin >> players;
    if (size_area == 1)
    {
        minus_area = 2;
    }
    else if (size_area == 2)
    {
        minus_area = 1;
        count = -7;
        random = 16;
    }
    else {
        minus_area = 0;
        count = -16;
        random = 25;
    }
    //values for array game
    for (int i = 0; i < SIZE - minus_area; i++)
    {
        for (int j = 0; j < SIZE - minus_area; j++) {
            game[i][j] = "_";
        }
    }

    string winner = "*";
    string player;
    if (move == 1)
    {
        player = (colorX + "X");
    }
    else
    {
        player = (colorO + "0");
    }
    while (count != 9)
    {
        count++;
        if (player == (colorX + "X"))//my step
        {
            int col = 0, row = 0;
            while (true)
            {
                //print game
                for (int i = 0; i < SIZE - minus_area; i++)
                {
                    for (int j = 0; j < SIZE - minus_area; j++) {
                        cout << game[i][j] << "\x1b[0m|";
                    }
                    cout << endl;
                }
                cout << "__________________" << endl;
                cout << "Step X" << endl;
                cout << "__________________" << endl;
                int n = 1;
                for (int i = 0; i < SIZE - minus_area; i++)
                {
                    for (int j = 0; j < SIZE - minus_area; j++) {
                        cout << n + j << "|";
                    }
                    if (size_area == 1)
                    {
                        n += 3;
                    }
                    else if (size_area == 2) {
                        n += 4;
                    }
                    else {
                        n += 5;
                    }
                    cout << endl;
                }
                int position;
                bool joke = false;
                cout << "Select option: ";
                cin >> position;
                if (size_area == 1)
                {
                    switch (position)
                    {
                    case 1: row = 0; col = 0; break;
                    case 2: row = 0; col = 1; break;
                    case 3: row = 0; col = 2; break;
                    case 4: row = 1; col = 0; break;
                    case 5: row = 1; col = 1; break;
                    case 6: row = 1; col = 2; break;
                    case 7: row = 2; col = 0; break;
                    case 8: row = 2; col = 1; break;
                    case 9: row = 2; col = 2; break;
                    }
                    if (position > 0 && position < 10 && game[row][col] == "_") { joke = true; }
                }
                else if (size_area == 2)
                {
                    switch (position)
                    {
                    case 1: row = 0; col = 0; break;
                    case 2: row = 0; col = 1; break;
                    case 3: row = 0; col = 2; break;
                    case 4: row = 0; col = 3; break;
                    case 5: row = 1; col = 0; break;
                    case 6: row = 1; col = 1; break;
                    case 7: row = 1; col = 2; break;
                    case 8: row = 1; col = 3; break;
                    case 9: row = 2; col = 0; break;
                    case 10: row = 2; col = 1; break;
                    case 11: row = 2; col = 2; break;
                    case 12: row = 2; col = 3; break;
                    case 13: row = 3; col = 0; break;
                    case 14: row = 3; col = 1; break;
                    case 15: row = 3; col = 2; break;
                    case 16: row = 3; col = 3; break;
                    }
                    if (position > 0 && position < 17 && game[row][col] == "_") {
                        joke = true;
                    }
                }
                else if (size_area == 3)
                {
                    switch (position)
                    {
                    case 1: row = 0; col = 0; break;
                    case 2: row = 0; col = 1; break;
                    case 3: row = 0; col = 2; break;
                    case 4: row = 0; col = 3; break;
                    case 5: row = 0; col = 4; break;
                    case 6: row = 1; col = 0; break;
                    case 7: row = 1; col = 1; break;
                    case 8: row = 1; col = 2; break;
                    case 9: row = 1; col = 3; break;
                    case 10: row = 1; col = 4; break;
                    case 11: row = 2; col = 0; break;
                    case 12: row = 2; col = 1; break;
                    case 13: row = 2; col = 2; break;
                    case 14: row = 2; col = 3; break;
                    case 15: row = 2; col = 4; break;
                    case 16: row = 3; col = 0; break;
                    case 17: row = 3; col = 1; break;
                    case 18: row = 3; col = 2; break;
                    case 19: row = 3; col = 3; break;
                    case 20: row = 3; col = 4; break;
                    case 21: row = 4; col = 0; break;
                    case 22: row = 4; col = 1; break;
                    case 23: row = 4; col = 2; break;
                    case 24: row = 4; col = 3; break;
                    case 25: row = 4; col = 4; break;
                    }
                    if (position > 0 && position < 26 && game[row][col] == "_") {
                        joke = true;
                    }
                }
                if (joke) { break; }
                else { cout << "Error!!! Select true option!!!!" << endl; }
            }
            game[row][col] = player;
            player = (colorO + "0");
        }
        else if (player == (colorO + "0"))//bot
        {
            int col = 0, row = 0;
            while (true)
            {
                bool joke = false;
                int position;
                if (players==1)
                {
                    position = 1 + rand() % random;
                }
                else {
                    cout << "__________________" << endl;
                    cout << "Step O" << endl;
                    cout << "__________________" << endl;
                    cout << "Select option: ";
                    cin >> position;
                }
                if (size_area == 1)
                {
                    switch (position)
                    {
                    case 1: row = 0; col = 0; break;
                    case 2: row = 0; col = 1; break;
                    case 3: row = 0; col = 2; break;
                    case 4: row = 1; col = 0; break;
                    case 5: row = 1; col = 1; break;
                    case 6: row = 1; col = 2; break;
                    case 7: row = 2; col = 0; break;
                    case 8: row = 2; col = 1; break;
                    case 9: row = 2; col = 2; break;
                    }
                    if (game[row][col] == "_") { joke = true; }
                }
                else if (size_area == 2)
                {
                    switch (position)
                    {
                    case 1: row = 0; col = 0; break;
                    case 2: row = 0; col = 1; break;
                    case 3: row = 0; col = 2; break;
                    case 4: row = 0; col = 3; break;
                    case 5: row = 1; col = 0; break;
                    case 6: row = 1; col = 1; break;
                    case 7: row = 1; col = 2; break;
                    case 8: row = 1; col = 3; break;
                    case 9: row = 2; col = 0; break;
                    case 10: row = 2; col = 1; break;
                    case 11: row = 2; col = 2; break;
                    case 12: row = 2; col = 3; break;
                    case 13: row = 3; col = 0; break;
                    case 14: row = 3; col = 1; break;
                    case 15: row = 3; col = 2; break;
                    case 16: row = 3; col = 3; break;
                    }
                    if (game[row][col] == "_") { joke = true; }
                }
                else if (size_area == 3)
                {
                    switch (position)
                    {
                    case 1: row = 0; col = 0; break;
                    case 2: row = 0; col = 1; break;
                    case 3: row = 0; col = 2; break;
                    case 4: row = 0; col = 3; break;
                    case 5: row = 0; col = 4; break;
                    case 6: row = 1; col = 0; break;
                    case 7: row = 1; col = 1; break;
                    case 8: row = 1; col = 2; break;
                    case 9: row = 1; col = 3; break;
                    case 10: row = 1; col = 4; break;
                    case 11: row = 2; col = 0; break;
                    case 12: row = 2; col = 1; break;
                    case 13: row = 2; col = 2; break;
                    case 14: row = 2; col = 3; break;
                    case 15: row = 2; col = 4; break;
                    case 16: row = 3; col = 0; break;
                    case 17: row = 3; col = 1; break;
                    case 18: row = 3; col = 2; break;
                    case 19: row = 3; col = 3; break;
                    case 20: row = 3; col = 4; break;
                    case 21: row = 4; col = 0; break;
                    case 22: row = 4; col = 1; break;
                    case 23: row = 4; col = 2; break;
                    case 24: row = 4; col = 3; break;
                    case 25: row = 4; col = 4; break;
                    }
                    if (game[row][col] == "_") { joke = true; }
                }
                if (joke) { break; }
            }
            if (game[0][0] == "_" && (game[0][1] == colorX + "X" && game[0][2] == colorX + "X" || game[1][1] == colorX + "X" && game[2][2] == colorX + "X" || game[1][0] == colorX + "X" && game[2][0] == colorX + "X")) {
                row = 0; col = 0;
            }
            else if (game[0][1] == "_" && (game[0][0] == colorX + "X" && game[0][2] == colorX + "X" || game[1][1] == colorX + "X" && game[2][1] == colorX + "X")) {
                row = 0; col = 1;
            }
            game[row][col] = player;
            player = colorX + "X";
        }
        if (size_area == 1)
        {
            if (game[0][0] != "_" && (game[0][0] == game[0][1] && game[0][1] == game[0][2] || game[0][0] == game[1][0] && game[1][0] == game[2][0] || game[0][0] == game[1][1] && game[1][1] == game[2][2])) {
                winner = game[0][0];
            }
            else if (game[0][1] != "_" && game[0][1] == game[1][1] && game[1][1] == game[2][1]) {
                winner = game[0][1];
            }
            else if (game[0][2] != "_" && (game[0][2] == game[1][2] && game[1][2] == game[2][2] || game[0][2] == game[1][1] && game[1][1] == game[2][0])) {
                winner = game[0][2];
            }
            else if (game[1][0] != "_" && game[1][0] == game[1][1] && game[1][1] == game[1][2]) {
                winner = game[1][0];
            }
            else if (game[2][0] != "_" && game[2][0] == game[2][1] && game[2][1] == game[2][2]) {
                winner = game[2][0];
            }
        }
        else if (size_area == 2)
        {
            if (game[0][0] != "_" && (game[0][0] == game[0][1] && game[0][1] == game[0][2] && game[0][2] == game[0][3] || game[0][0] == game[1][0] && game[1][0] == game[2][0] && game[2][0] == game[3][0] || game[0][0] == game[1][1] && game[1][1] == game[2][2] && game[2][2] == game[3][3])) {
                winner = game[0][0];
            }
            else if (game[0][1] != "_" && game[0][1] == game[1][1] && game[1][1] == game[2][1] && game[2][1] == game[3][1]) {
                winner = game[0][1];
            }
            else if (game[0][2] != "_" && (game[0][2] == game[1][2] && game[1][2] == game[2][2] && game[2][2] == game[3][2])) {
                winner = game[0][2];
            }
            else if (game[0][3] != "_" && (game[0][3] == game[1][3] && game[1][3] == game[2][3] && game[2][3] == game[3][3] || game[0][3] == game[1][2] && game[1][2] == game[2][1] && game[2][1] == game[3][0]))
            {
                winner = game[0][3];
            }
            else if (game[1][0] != "_" && game[1][0] == game[1][1] && game[1][1] == game[1][2] && game[1][2] == game[1][3]) {
                winner = game[1][0];
            }
            else if (game[2][0] != "_" && game[2][0] == game[2][1] && game[2][1] == game[2][2] && game[2][2] == game[2][3]) {
                winner = game[2][0];
            }
            else if (game[3][0] != "_" && game[3][0] == game[3][1] && game[3][1] == game[3][2] && game[3][2] == game[3][3]) {
                winner = game[3][0];
            }
        }
        else {
            if (game[0][0] != "_" && (game[0][0] == game[0][1] && game[0][1] == game[0][2] && game[0][2] == game[0][3] && game[0][3] == game[0][4] || game[0][0] == game[1][0] && game[1][0] == game[2][0] && game[2][0] == game[3][0] && game[3][0] == game[4][0] || game[0][0] == game[1][1] && game[1][1] == game[2][2] && game[2][2] == game[3][3] && game[3][3] == game[4][4])) {
                winner = game[0][0];
            }
            else if (game[0][1] != "_" && game[0][1] == game[1][1] && game[1][1] == game[2][1] && game[2][1] == game[3][1] && game[3][1] == game[4][1]) {
                winner = game[0][1];
            }
            else if (game[0][2] != "_" && (game[0][2] == game[1][2] && game[1][2] == game[2][2] && game[2][2] == game[3][2] && game[3][2] == game[4][2])) {
                winner = game[0][2];
            }
            else if (game[0][3] != "_" && (game[0][3] == game[1][3] && game[1][3] == game[2][3] && game[2][3] == game[3][3] && game[3][3] == game[4][3]))
            {
                winner = game[0][3];
            }
            else if (game[0][4] != "_" && (game[0][4] == game[1][4] && game[1][4] == game[2][4] && game[2][4] == game[3][4] && game[3][4] == game[4][3]|| game[0][4]==game[1][3] && game[1][3]==game[2][2] && game[2][2]==game[3][1] && game[3][1]==game[4][0]))
            {
                winner = game[0][3];
            }
            else if (game[1][0] != "_" && game[1][0] == game[1][1] && game[1][1] == game[1][2] && game[1][2] == game[1][3] && game[1][3] == game[1][4]) {
                winner = game[1][0];
            }
            else if (game[2][0] != "_" && game[2][0] == game[2][1] && game[2][1] == game[2][2] && game[2][2] == game[2][3] && game[2][3] == game[2][4]) {
                winner = game[2][0];
            }
            else if (game[3][0] != "_" && game[3][0] == game[3][1] && game[3][1] == game[3][2] && game[3][2] == game[3][3] && game[3][3] == game[3][4]) {
                winner = game[3][0];
            }
            else if (game[4][0] != "_" && game[4][0] == game[4][1] && game[4][1] == game[4][2] && game[4][2] == game[4][3] && game[4][3] == game[4][4]) {
                winner = game[4][0];
            }
        }

        if (winner != "*") {
            break;
        }
    }
    cout << "__________________" << endl;
    cout << "END GAME" << endl;
    cout << "__________________" << endl;
    if (winner == "*") {
        cout << "Draw!!!" << endl;
    }
    else {
        cout << winner << "\x1b[0m's win!" << endl;
    }
}


int main()
{
    setlocale(0, "");
    int choose;
    string colorO = "\x1b[0m", colorX = "\x1b[0m";
    int move = 1, size_area = 1;
    bool game = true;
    while (game) {
        cout << "Меню\n1. Начать игру\n2. Настройки\n3. Правила\n4. Выйти\n";
        cin >> choose;
        switch (choose)
        {
        case 1: {
            play(colorO, colorX, move, size_area);
            game = false;
            break;
        }
        case 2: {
            int stop = 0;
            while (stop != 4)
            {
                system("cls");
                cout << "Настройки\n1. Цвет крестика и нолика\n2. Кто первый ходит\n3. Размер поля\n4.Выход\n";
                cin >> choose;
                while (choose < 1 || choose>4)
                {
                    cin >> choose;
                }
                switch (choose)
                {
                case 1: {
                    cout << "Цвета:\n1)стандарт\n2)светло-серый\n3)серый\n4)красный\n5)зеленый\n6)желтый\n7)синий\n8)фиолетовый\n9)голубой\n10)белый\n";
                    cout << "Цвет крестика: ";
                    int choose;
                    cin >> choose;
                    while (choose < 1 || choose>10)
                    {
                        cin >> choose;
                    }

                    switch (choose)
                    {
                    case 1: colorX = "\x1b[0m"; break;
                    case 2: colorX = "\x1b[89m"; break;
                    case 3: colorX = "\x1b[90m"; break;
                    case 4: colorX = "\x1b[91m"; break;
                    case 5: colorX = "\x1b[92m"; break;
                    case 6: colorX = "\x1b[93m"; break;
                    case 7: colorX = "\x1b[94m"; break;
                    case 8: colorX = "\x1b[95m"; break;
                    case 9: colorX = "\x1b[96m"; break;
                    case 10: colorX = "\x1b[97m"; break;
                    default:
                        break;
                    }
                    cout << "Цвет нолика: ";
                    cin >> choose;
                    while (choose < 1 || choose>10)
                    {
                        cin >> choose;
                    }
                    switch (choose)
                    {
                    case 1: colorO = "\x1b[0m"; break;
                    case 2: colorO = "\x1b[89m"; break;
                    case 3: colorO = "\x1b[90m"; break;
                    case 4: colorO = "\x1b[91m"; break;
                    case 5: colorO = "\x1b[92m"; break;
                    case 6: colorO = "\x1b[93m"; break;
                    case 7: colorO = "\x1b[94m"; break;
                    case 8: colorO = "\x1b[95m"; break;
                    case 9: colorO = "\x1b[96m"; break;
                    case 10: colorO = "\x1b[97m"; break;
                    default:
                        break;
                    }
                    break;
                }
                case 2: {
                    cout << "Кто первый ходит: 1)X 2)O\n";
                    cin >> move;
                    while (move < 1 || move>2)
                    {
                        cin >> move;
                    }
                    break;
                }
                case 3: {
                    cout << "1)3x3 2)4x4 3)5x5\n";
                    cin >> size_area;
                    while (size_area < 1 || size_area>3)
                    {
                        cin >> size_area;
                    }
                    break;
                }
                case 4: {
                    stop = 4;
                    break;
                }
                default:
                    break;
                }
            }
            system("cls");
            break;
        }
        case 3: {
            system("cls");
            cout << "Игроки по очереди ставят на свободные клетки поля 3x3 знаки (один всегда крестики, другой всегда нолики). Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает. Первый ход делает игрок, ставящий крестики. Обычно по завершении партии выигравшая сторона зачёркивает чертой свои три знака(нолика или крестика), составляющих сплошной ряд.\n\n";
            cout << "Для выхода нажмите 1\n";
            int esc;
            cin >> esc;
            while (esc != 1)
            {
                cin >> esc;
            }
            system("cls");
            break;
        }
        case 4: {
            game = false;
            break;
        }
        default:
            system("cls");
            break;
        }
    }
    return 0;
}