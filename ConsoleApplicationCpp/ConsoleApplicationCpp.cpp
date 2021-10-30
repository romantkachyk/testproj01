#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 0;

	cout << "Введите любое 4-ех значное число: ";
	cin >> a;
	a = (a - (a / 100) * 100) / 10;
	cout << "Результат: " << a << endl;
}