#include <iostream>
using namespace std;

int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main() {
    int a = 0, b = 1, i, c, n, j;
    cout << "Nhap vao chieu cao day Fibonaci: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a = 0;
        b = 1;
        cout << " " << b;
        for (j = 1; j < i; j++) {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
        cout << endl;
    }  


    int chieucao;
    cout << "\nNhap vao chieu cao tam giac pascal: ";
    cin >> chieucao;
    cout << "---------PASCAl---------" << endl;
    for (int i = 0; i < chieucao; i++) {
        for (int j = 0; j <= i; j++) {
            cout << C(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}