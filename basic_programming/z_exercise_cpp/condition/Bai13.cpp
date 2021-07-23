#include <iostream>
using namespace std;

int main() {
	int km;
	float moneypay, pay2, pay5;
	cout << "Nhap so km: ";
	cin >> km;
	pay2 = 15000 + 13500 * (km - 1);
	pay5 = 15000 + 13500 * 4 + 11000 * (km - 5);
	moneypay = pay5 * (90 / 100);
	if (km == 1)
		cout << "Ban phai tra: 15000" << endl;
	else if ((km >= 2) && (km <= 5))
		cout << "Ban phai tra: 15000+13500*" << (km - 1) << " = " << pay2 << endl;
	else
	{
		if (km > 12)
		{
			cout << "Ban phai tra: 15000+13500*4+11000*" << (km - 5) << " = " << pay5 << endl;
			cout << "Sau khi duoc giam gia: " << moneypay << endl;
		}
		else
			cout << "Ban phai tra: 15000+13500*4+11000*" << (km - 5) << " = " << pay5 << endl;
	}
	return 0;
}