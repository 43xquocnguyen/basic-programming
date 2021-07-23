#include <iostream>
using namespace std;

struct POINT {
    float x, y, z;
};
struct POLYGON {
    POINT *toado;
    int sodiem;
};
void NhapDiem(POLYGON &a) {
    cout << "Nhap so diem: ";
    cin >> a.sodiem;
    a.toado = new POINT[a.sodiem];
    for (int i = 0; i < a.sodiem; i++) {
        cout << "Nhap toa do diem " << i + 1 << endl;
        cout << "x = ";
        cin >> a.toado->x;
        cout << "y = ";
        cin >> a.toado->y;
        cout << "z = ";
        cin >> a.toado->z;
    }
}
void XuatDiem(POLYGON a) {
    cout << "Toa do cac diem la:\n";
    for (int i = 0; i < a.sodiem; i++) {
        char c = (int)65 + i;
        cout << c;
        cout << "(" << a.toado->x << ";" << a.toado->y << ";" << a.toado->z << ")";
        cout << endl;
    }
}
int main(){
    POLYGON a;
    NhapDiem(a);
    XuatDiem(a);
}