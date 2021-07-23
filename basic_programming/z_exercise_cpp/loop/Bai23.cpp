#include <iostream>
using namespace std;

int main() {
    int n, S4 = 0, T4;
    int S3 = 1, T3;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        T3 = 2 * i - 1 / 2 * i;
        S3 = S3 * T3;
    }
    for (int j = 1; j <= n; j++) {
        T4 = (j * (j + 1) * (j + 2));
        S4 = S4 + T4;
    }
    cout << "S3 = " << S3 * 3.14 << endl;
    cout << "S4 = " << S4 << endl;


}