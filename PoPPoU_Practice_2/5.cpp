#include <iostream>

using namespace std;

int main() {

    int finger_number;
    setlocale(0, "");
    cout << "������� ���������� ����� ������: ";
    cin >> finger_number;

    switch (finger_number) {
    case 1: {
        cout << "������� �����";
        break;
    }
    case 2: {
        cout << "������������ �����";
        break;
    }
    case 3: {
        cout << "������� �����";
        break;
    }
    case 4: {
        cout << "���������� �����";
        break;
    }
    case 5: {
        cout << "�������";
        break;
    }
    default: {
        cout << "�������� ����� ������";
        break;
    }
    }

    return 0;
}