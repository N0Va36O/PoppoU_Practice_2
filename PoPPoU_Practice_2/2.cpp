#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(0, "");
	string schedule[7] = { "�����������: ������", "�������: �����", "�����: KFC", "�������:  �����", "�������: Pump", "�������: ��2", "�����������: �����" };


	int day;
	cout << "������� ���������� ����� ��� ������: ";
	cin >> day;


	cout << schedule[day - 1] << endl;

	return 0;
}