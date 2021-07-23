#include <iostream>
using namespace std;

int main(){
    int thang;
    do {
        cout << "Nhap thang: ";
        cin >> thang;
        if (thang < 1 || thang > 12)
            cout << "Thang khong hop le!\n Nhap lai: ";
    } while (thang < 1 || thang > 12);
    if (thang < 4) {
        cout << "Mua Xuan!";
    }
    if (thang >= 4 && thang < 7) {
        cout << "Mua He!";
    }
    if (thang >= 7 && thang < 10) {
        cout << "Mua Thu!";
    }
    else if (thang >= 10) {
        cout << "Mua Dong!";
    }
}