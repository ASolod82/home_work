#include <iostream>
#include <math.h>

using namespace std;

double CalcHeron(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	unsigned int a1, b1, c1, a2, b2, c2;

	cout << "Enter Triangle1 a: ";
	cin >> a1;
	cout << "Enter Triangle1 b: ";
	cin >> b1;
	cout << "Enter Triangle1 c: ";
	cin >> c1;

	cout << "Enter Triangle2 a: ";
	cin >> a2;
	cout << "Enter Triangle2 b: ";
	cin >> b2;
	cout << "Enter Triangle2 c: ";
	cin >> c2;

	double S1 = CalcHeron(a1, b1, c1);
	double S2 = CalcHeron(a2, b2, c2);

	char sign = '=';
	if (S1 > S2)
		sign = '>';
	else if (S1 < S2)
		sign = '<';
	
	cout << "S1 " << sign << " S2" << endl;

	system(("pause"));
}
