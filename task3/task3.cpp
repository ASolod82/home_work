#include <iostream>

using namespace std;

float CalcPriceAfterDiscount(float price, float discount)
{
	return price * (1.0 - discount / 100.0);
}

int main()
{
    float price, disc1, disc2;

    // Проверки ввода нету
    cout << "Price: ";
    cin >> price;
    cout << "Discount 1: ";
    cin >> disc1;
    cout << "Discount 2: ";
    cin >> disc2;

	// Округление отсутствует
    cout << "Price after two discounts: " << CalcPriceAfterDiscount(CalcPriceAfterDiscount(price, disc1), disc2) << endl;

    system("pause");
}
