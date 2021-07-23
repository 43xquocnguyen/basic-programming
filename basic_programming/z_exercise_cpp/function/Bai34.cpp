#include<iostream>
using namespace std;

int D(int a1, int b1, int a2, int b2) {
    return a1 * b2 - a2 * b1;
}
int Dx(int b1,int b2,int c1, int c2) {
    return c1 * b2 - c2 * b1;
}
int Dy(int a1,int a2,int c1,int c2) {
    return a1 * c2 - a2 * c1;
}
int main() {
    int a1, b1, c1, a2, b2, c2;
    float x, y;
    cout << "a1*x + b1*y = c1" << endl;
    cout << "a2*x + b2*y = c2" << endl;
    cout << "Nhap a1: ";
    cin >> a1;
    cout << "Nhap b1: ";
    cin >> b1;
    cout << "Nhap c1: ";
    cin >> c1;
    cout << "Nhap a2: ";
    cin >> a2;
    cout << "Nhap b2: ";
    cin >> b2;
    cout << "Nhap c2: ";
    cin >> c2;
    float d = D(a1, b1, a2, b2);
    float dx = Dx(b1, b2, c1, c2);
    float dy = Dy(a1, a2, c1, c2);
    if (d == 0) {
        if (dx + dy == 0)
            cout << "He phuong trinh co vo so nghiem";
        else
            cout << "He phuong trinh vo nghiem";
    }
    else {
        x = dx / d;
        y = dy / d;
        cout << "He phuong trinh nghiem" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y;
    }
}
 