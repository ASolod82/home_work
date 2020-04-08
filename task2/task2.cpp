#include <iostream>

using namespace std;

float min(float n1, float n2)
{
    return n1 < n2 ? n1 : n2;
}

float max(float n1, float n2)
{
    return n1 > n2 ? n1 : n2;
}

int main()
{
    float a, b, c;

	// Проверки ввода нету
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

	// Проверки знаменателя на ноль нету
    float result = (min(a, a + b) + max(a, b + c)) / (1.0 + min(a + b * c, c - a) * max(a, c));
    cout << "result: " << result << endl;

    system("pause");
}
