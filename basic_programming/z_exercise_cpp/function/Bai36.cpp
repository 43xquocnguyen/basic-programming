#include <iostream>
using namespace std;

int main() {
    char luachon;
    float nhietdoc, nhietdof;
    cout << "1. Chuyen doi tu do C sang do F" << endl;
    cout << "2. Chuyen doi tu do F sang do C" << endl;
    cout << "Ban chon giua 1 va 2 : ";
    do {
        cin >> luachon;
        switch (luachon) {
            case '1':   
                cout << "Nhap do C : " << endl;
                cin >> nhietdoc;
                nhietdof = (1.8 * nhietdoc) + 32;
                cout << "Do F tuong ung = " << nhietdof << endl;
                break;
            case '2':
                cout << "Nhap do C : " << endl;
                cin >> nhietdoc;
                nhietdof = (1.8 * nhietdoc) + 32;
                cout << "Do F tuong ung = " << nhietdof << endl;
                break;
            default:
                cout << "Lua chon khong hop le! Chon lai: ";
        }
        if (luachon == '1' || luachon == '2')
            break;
    } while (luachon != '1' || luachon != '2');
}

