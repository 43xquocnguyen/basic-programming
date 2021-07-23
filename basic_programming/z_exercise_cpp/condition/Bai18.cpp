#include <iostream>
using namespace std;

int main() {
    int thang, ngay;
    do
    {
        cout << "Nhap vao 1 thang: ";
        cin >> thang;
        if (thang < 1 || thang > 12)
            cout << "Thang khong hop le\n";
    } while (thang < 1 || thang > 12);

    switch (thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            do
            {
                cout << "Nhap vao 1 ngay: ";
                cin >> ngay;
                if (ngay < 1 || ngay > 31)
                    cout << "Ngay khong hop le! Nhap lai: \n";
            } while (ngay < 1 || ngay > 31);
            cout << "Ngay thang hop le!\n";
            cout << "Thang " << thang << " co 31 ngay!";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            do
            {
                cout << "Nhap vao 1 ngay: ";
                cin >> ngay;
                if (ngay < 1 || ngay > 30)
                    cout << "Ngay khong hop le! Nhap lai: \n";
            } while (ngay < 1 || ngay > 30);
            cout << "Ngay thang hop le!\n";
            cout << "Thang " << thang << " co 30 ngay!";
            break;
        case 2:
            do
            {
                cout << "Nhap vao 1 ngay: ";
                cin >> ngay;
                if (ngay < 1 || ngay > 28)
                    cout << "Ngay khong hop le! Nhap lai: \n";
            } while (ngay < 1 || ngay > 28);
            cout << "Ngay thang hop le!\n";
            cout << "Thang " << thang << " co 28 ngay!";
            break;
    }
}