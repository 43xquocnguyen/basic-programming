#include <iostream>
#include <fstream>
using namespace std;

struct PhanSo {
    int tu, mau;
};
int UCLN(int a, int b) {
    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}
void RutgonPhanSo(PhanSo &a) {
    int n = UCLN(a.tu, a.mau);
    a.tu = a.tu / n;
    a.mau = a.mau / n;
}
istream &operator>>(istream &is, PhanSo &a) {
    cout << "Nhap tu so = ";
    is >> a.tu;
    cout << "Nhap mau so = ";
    is >> a.mau;
    return is;
}
ostream &operator<<(ostream &os, PhanSo a) {
    cout << a.tu << "/" << a.mau;
    return os;
}
PhanSo operator+(PhanSo a, PhanSo b) {
    a.tu = a.tu * b.mau + b.tu * a.mau;
    a.mau = a.mau * b.mau;
    RutgonPhanSo(a);
    return a;
}
PhanSo operator/(PhanSo a, PhanSo b) {
    a.tu = a.tu * b.mau;
    a.mau = a.mau * b.tu;
    RutgonPhanSo(a);
    return a;
}
int main() {
    PhanSo a, b;
    cout << "Nhap phan so a: \n";
    cin >> a;
    cout << "Nhap phan so b: \n";
    cin >> b;

    cout << "PHAN SO a: " << a << endl;
    cout << "PHAN SO b: " << b << endl;

    PhanSo c = a + b;
    cout << "a + b = " << c;
}
