#include <iostream>

using namespace std;

int main() {

    setlocale(0, "");
    int a, b;

    cout << "������� ��� ����������� �����: ";
    cin >> a >> b;

    int correct = a * b;

    cout << "����� ����� ���������, ���� �������� " << a << " �� " << b << "? ";

    int user_answer;
    cin >> user_answer;

    if (user_answer == correct) {
        cout << "���������! �����: " << correct << endl;
    }
    else {
        cout << "�����������! ���������� �����: " << correct << endl;
    }

    return 0;
}