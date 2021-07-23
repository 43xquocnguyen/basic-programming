#include <iostream>
using namespace std;

int main(){
    int ngay, tien;
    char loai;
    cout << "Nhap vao so ngay thue: ";
    cin >> ngay;
    cout << "Nhap loai phong: ";
    cin >> loai;
    if (ngay > 12){
        switch (loai)
        {
        case 'A':
            tien = 250000 * ngay * 90 / 100;
            break;
        case 'B':
            tien = 200000 * ngay * 88 / 100;
            break;
        case 'C':
            tien = 150000 * ngay * 88 / 100;
            break;
        }
    }
    else
    {
        switch (loai)
        {
        case 'A':
            tien = 250000 * ngay;
            break;
        case 'B':
            tien = 200000 * ngay;
            break;
        case 'C':
            tien = 150000 * ngay;
            break;
        }
    }
    
    cout << "So tien ban phai tra: " << tien;
}