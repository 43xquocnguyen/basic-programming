#include <iostream>
using namespace std;

int main() {
	int i, n;
	float x, S, T;
	long M;
    cout << "Nhap x: ";
    cin >> x;
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n < 1)
            cout << "\n N phai >= 1. Xin nhap lai !" << endl;
    } while (n < 1);

	S = 1;
	T = 1;
	M = 1;
	i = 1;

	while(i <= n) {
		T = T * x;
		M = M * i;
		S = S + T / M;
		i++;
	}
    cout << "e^" << x << "= " << S;
    return 0;
}