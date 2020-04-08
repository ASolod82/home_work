#include <iostream>

using namespace std;

unsigned int SumOfNumbers(unsigned int n)
{
	unsigned int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	unsigned int numbers;
	// Нет проверки корректности ввода
	cout << "Enter numbers: ";
	cin >> numbers;

	cout << "Sum of numbers: " << SumOfNumbers(numbers) << endl;

	system(("pause"));
}
