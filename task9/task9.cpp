#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n)
{
	unsigned int i = 1, f = 1;

	while (i <= n)
		f *= i++;

	return f;
}

int main()
{
	unsigned int n;
	// Проверка ввода отсутствует
	cout << "Enter n: ";
	cin >> n;
	
	double result = .0;
	for(double ch = 2, zn = 3; ch <= n * 2.0; ch += 2.0, zn += 2.0)
	{
		result += ch / factorial(static_cast<unsigned int>(zn));
	}

	cout << "Result: " << result << endl;

	system(("pause"));
}
