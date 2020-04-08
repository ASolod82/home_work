#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h> // для пи

using namespace std;

double SurfaceArea(double r)
{
	return 4 * M_PI * pow(r, 2.0);
}

double EquatorLength(double r)
{
	return 2 * M_PI * r;
}

int main()
{
	double radius;
	cout << "Enter planet radius: ";
	cin >> radius;

	// Округление отсутствует
	cout.precision(numeric_limits<double>::max_digits10);
    cout << "Surface area: " << SurfaceArea(radius) << endl;
	cout << "Equator length: " << EquatorLength(radius) << endl;

	system(("pause"));
}
