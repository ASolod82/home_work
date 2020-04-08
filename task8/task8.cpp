#include <iostream>

using namespace std;

double denominator(unsigned int n)
{
	double result = .0;
	for (double ch = 5, zn1 = 1, zn2 = 2; ch <= n * 5.0; ch += 5.0)
	{
		result += ch / (zn1 += zn2++);
	}
	return result;
}

int main()
{
	unsigned int n;
	// Проверка ввода отсутствует
	cout << "Enter n: ";
	cin >> n;

	cout << "Result: " << denominator(n) << endl;

	system(("pause"));
}
