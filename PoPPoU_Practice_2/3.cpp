#include <iostream>

using namespace std;

int main() {

    char station;
    setlocale(0, "");
    cout << "������� ����� �������: ";
    cin >> station;

    switch (station) {
    case 'a':
        cout << "����� � ���� �� ������� " << station << " ���������� 10 �����." << endl;
        break;
    case 'b':
        cout << "����� � ���� �� ������� " << station << " ���������� 15 �����." << endl;
        break;
    case 'c':
        cout << "����� � ���� �� ������� " << station << " ���������� 20 �����." << endl;
        break;
    case 'd':
        cout << "����� � ���� �� ������� " << station << " ���������� 20 �����." << endl;
        break;
    case 'e':
        cout << "����� � ���� �� ������� " << station << " ���������� 25 �����." << endl;
        break;
    case 'A':
        cout << "����� � ���� �� ������� " << "a" << " ���������� 10 �����." << endl;
        break;
    case 'B':
        cout << "����� � ���� �� ������� " << "b" << " ���������� 15 �����." << endl;
        break;
    case 'C':
        cout << "����� � ���� �� ������� " << "c" << " ���������� 20 �����." << endl;
        break;
    case 'D':
        cout << "����� � ���� �� ������� " << "d" << " ���������� 25 �����." << endl;
        break;
    case 'E':
        cout << "����� � ���� �� ������� " << "e" << " ���������� 30 �����." << endl;
        break;
    default:
        cout << "����������� �������." << endl;
        break;
    }
}