#include <iostream>
using namespace std;

int main() {
    int giobd, giokt, tien;
    do
    {
        cout << "Nhap vao gio bat dau va gio ket thuc: ";
        cin >> giobd >> giokt;
        if (giobd > 24 || giobd < 1 || giokt > 24 || giokt < 1)
            cout << "Gio khong hop le\n";
    } while (giobd > 24 || giobd < 1 || giokt > 24 || giokt < 1);
    if (giobd >= 7 && giokt <= 17)
    {
        tien = 400 * 60 * (giokt - giobd);
        if (giokt - giobd >= 6)
            tien = tien * (90 / 100);
    }
    if (giobd >= 17 && giokt <= 24)
    {
        tien = 350 * 60 * (giokt - giobd);
        if (giokt - giobd >= 4)
            tien = tien * (88 / 100);
    }
    if (giobd >= 0 && giokt <= 7)
    {
        tien = 300 * 60 * (giokt - giobd);
        if (giokt - giobd >= 7)
            tien = tien * (85 / 100);
    }
    cout << "So tien ban phai tra: " << tien << endl;
}