#include <iostream>

using namespace std;

int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int max(int num1, int num2, int num3)
{
	return max(max(num1, num2), num3);
}

int main()
{
	int num1, num2, num3;
	cout << "Number 1: ";
	cin >> num1; // Требования проверки ввода не было в задании
	cout << "Number 2: ";
	cin >> num2;
	cout << "Number 3: ";
	cin >> num3;

	cout << "Max == " << max(num1, num2, num3) << endl;
	system("pause");
}
