#include <iostream>

using namespace std;

int main() {

    char station;
    setlocale(0, "");
    cout << "Введите букву станции: ";
    cin >> station;

    switch (station) {
    case 'a':
        cout << "Время в пути до станции " << station << " составляет 10 минут." << endl;
        break;
    case 'b':
        cout << "Время в пути до станции " << station << " составляет 15 минут." << endl;
        break;
    case 'c':
        cout << "Время в пути до станции " << station << " составляет 20 минут." << endl;
        break;
    case 'd':
        cout << "Время в пути до станции " << station << " составляет 20 минут." << endl;
        break;
    case 'e':
        cout << "Время в пути до станции " << station << " составляет 25 минут." << endl;
        break;
    case 'A':
        cout << "Время в пути до станции " << "a" << " составляет 10 минут." << endl;
        break;
    case 'B':
        cout << "Время в пути до станции " << "b" << " составляет 15 минут." << endl;
        break;
    case 'C':
        cout << "Время в пути до станции " << "c" << " составляет 20 минут." << endl;
        break;
    case 'D':
        cout << "Время в пути до станции " << "d" << " составляет 25 минут." << endl;
        break;
    case 'E':
        cout << "Время в пути до станции " << "e" << " составляет 30 минут." << endl;
        break;
    default:
        cout << "Неизвестная станция." << endl;
        break;
    }
}