#include <iostream>
using namespace std;

int main() {
    int N, a, b, c, d;
    cout << "Nhap vao so tien: ";
    cin >> N;
    a = N / 10;
    b = (N % 10) / 5;
    c = ((N % 10) % 5) / 2;
    d = (((N % 10) % 5) % 2) / 1;
    cout << "Ban co: " << endl;
    cout << a << " to 10d" << endl;
    cout << b << " to 5d" << endl;
    cout << c << " to 2d" << endl;
    cout << d << " to 1d" << endl;

}