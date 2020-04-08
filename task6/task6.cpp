#include <iostream>

using namespace std;

double exponentiation(double x, int n)
{
    if (0 == n)
        return 1;
	
    double tmp = exponentiation(x, n / 2);
    if (0 == n % 2) 
        return tmp * tmp;

	if (n > 0)
        return x * tmp * tmp;

	return (tmp * tmp) / x;
}

int main()
{
	int x, n;
	cout << "x: ";
	cin >> x;
	cout << "n: ";
	cin >> n;

	//x = 2; n = 3;
	//cout << "Result: " << exponentiation(x, n) << endl;
	//x = -2; n = 3;
	//cout << "Result: " << exponentiation(x, n) << endl;
	//x = 2; n = -2;
	//cout << "Result: " << exponentiation(x, n) << endl;
	//x = -2; n = -2;
	cout << "Result: " << exponentiation(x, n) << endl;

	system(("pause"));
}
