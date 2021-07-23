#include <iostream>
using namespace std;

float tinhtien(int giobd,int giokt) {
    float tien;
    if (giobd>=7&&giokt<=17){
        tien = 400 * 60 * (giokt - giobd);
        if (giokt - giobd >= 6)
            tien = tien * (90 / 100);
    }
    if (giobd>=17&&giokt<=24){
        tien = 350 * 60 * (giokt - giobd);
        if (giokt - giobd >= 4)
            tien = tien * (88 / 100);
    }
    if (giobd>=0&&giokt<=7){
        tien = 300 * 60 * (giokt - giobd);
        if (giokt - giobd >= 7)
            tien = tien * (85 / 100);
    }
    return tien;
}
int main(){
    int giobd, giokt;
    for (int i = 1; i <= 3; i++) {
        cout << "Nguoi thu " << i << endl;
        do {
            cout << "Nhap vao gio bat dau va gio ket thuc: ";
            cin >> giobd >> giokt;
            if (giobd >24||giobd<1||giokt >24||giokt<1)
                cout << "Gio khong hop le\n";
        } while (giobd > 24 || giobd < 1 || giokt > 24 || giokt < 1);
        cout << "So tien nguoi thu " << i << " phai tra: " << tinhtien(giobd, giokt);
        cout << endl;
    }
    return 0;
}