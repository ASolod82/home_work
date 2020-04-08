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
	cout << "Enter n: ";
	cin >> n;

	cout << "Factorial (n+1): " << factorial(n+1) << endl;

	system(("pause"));
}
