#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a == b) {
        return a;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}
int BCNN(int a, int b) {
    int max = a > b ? a : b;
    for (int i = max; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}
int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "UCLN cua " << a << " va " << b << " la " << UCLN(a, b) << endl;
    cout << "BCNN cua " << a << " va " << b << " la " << BCNN(a, b) << endl;
    return 0;
}