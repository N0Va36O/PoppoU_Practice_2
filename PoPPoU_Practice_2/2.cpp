#include <iostream>
#include <string>

using namespace std;

int main() {

	setlocale(0, "");
	string schedule[7] = { "Понедельник: работа", "Вторник: учеба", "Среда: KFC", "Четверг:  Треня", "Пятница: Pump", "Суббота: КС2", "Воскресенье: семья" };


	int day;
	cout << "Введите порядковый номер дня недели: ";
	cin >> day;


	cout << schedule[day - 1] << endl;

	return 0;
}