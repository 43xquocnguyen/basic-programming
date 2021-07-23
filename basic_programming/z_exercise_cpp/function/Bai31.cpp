#include <iostream>
using namespace std;

long int power(long int a, long int b) {
    long int kq = 1;
    for(int i = 1; i <= b; i++) {
        kq *= a;
    }
    return kq;
}
float tong(int n, int x) {
    float S = power(5, 8), T = 1;
    if (n == 0)
        return power(5, 8);
    for (int i = 1; i <= n; i++) {
        T = power((x + i), i) * power(-1, n);
        S = S + T / (i * i);
    }
    return S;
}
int main() {
    long int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << a << "^" << b << " = " << power(a, b);

    int n, x;
    cout << "\nNhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "S = " << tong(n, x) << endl;
    return 0;
}