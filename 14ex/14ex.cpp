#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    const int SIZE = 10;
    int intenger[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    long longer[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    short shorter[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    float floater[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    double doubler[SIZE]{ 1,2,3,4,5,6,7,8,9,10 };
    bool booler[SIZE]{ true,true, true, true, true, false,false, false, false, false };
    char charer[SIZE]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    string stringer[SIZE]{ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j" };

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << intenger[i] << " - тип int\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << longer[i] << " - тип long\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << shorter[i] << " - тип short\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << floater[i] << " - тип float\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << doubler[i] << " - тип double\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << booler[i] << " - тип bool\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << charer[i] << " - тип char\n";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "[+] " << stringer[i] << " - тип stringer\n";
    }
}