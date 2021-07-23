#include <iostream>
#include <math.h>
using namespace std;

struct SoPhuc {
    float a;
    float b;
};

void Nhap(SoPhuc &a) {
    cout << "Nhap phan thuc: ";
    cin >> a.a;
    cout << "Nhap phan ao: ";
    cin >> a.b;
}
void Xuat(SoPhuc a) {
    if (a.b > 0) {
        cout << a.a << " + " << a.b << "i";
    }
    else if (a.b < 0) {
        float t = abs(a.b);
        cout << a.a << " - " << t << "i";
    }
}

SoPhuc Tong(SoPhuc a, SoPhuc b) {
    SoPhuc kq;
    kq.a = a.a + b.a;
    kq.b = a.b + b.b;
    return kq;
}
SoPhuc Hieu(SoPhuc a, SoPhuc b) {
    SoPhuc kq;
    kq.a = a.a - b.a;
    kq.b = a.b - b.b;
    return kq;
}
SoPhuc Tich(SoPhuc a, SoPhuc b) {
    SoPhuc kq;
    kq.a = a.a * b.a + a.b * b.b;
    kq.b = a.a * b.b + a.b * b.a;
    return kq;
}
SoPhuc Thuong(SoPhuc a, SoPhuc b) {
    SoPhuc kq;
    kq.a = (a.a * b.a + a.b * b.b) / pow(b.a, 2) + pow(b.b, 2);
    kq.b = (b.a * a.b - b.b * a.a) / pow(b.a, 2) + pow(b.b, 2);
}

void Menu(SoPhuc a, SoPhuc b) {
    while (true) {
        system("cls");
        cout << "1. NHAP SO PHUC\n";
        cout << "2. XUAT SO PHUC\n";
        cout << "3. TONG 2 SO PHUC\n";
        cout << "4. HIEU 2 SO PHUC\n";
        cout << "5. NHAN 2 SO PHUC\n";
        cout << "6. CHIA 2 SO PHUC\n";
        cout << "7. KET THUC\n";

        char luachon;
        cout << "Nhap lua chon cua ban: ";
        cin >> luachon;

        if (luachon == '7') {
            system("cls");
            cout << "CHUONG TRINH KET THUC\n";
            system("pause");
            break;
        }
        switch (luachon) {
            case '1': {
                system("cls");
                cout << "NHAP SO PHUC A: \n";
                Nhap(a);
                cout << "NHAP SO PHUC B: \n";
                Nhap(b);
                cout << endl;
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                cout << "SO PHUC A: ";
                Xuat(a);
                cout << endl;
                cout << "SO PHUC B: ";
                Xuat(b);
                cout << endl;
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                SoPhuc kq = Tong(a, b);
                cout << "Ket qua la: ";
                Xuat(kq);
                cout << endl;
                system("pause");
                break;
            }
            case '4': {
                system("cls");
                SoPhuc kq = Hieu(a, b);
                cout << "Ket qua la: ";
                Xuat(kq);
                cout << endl;
                system("pause");
                break;
            }
            case '5': {
                system("cls");
                SoPhuc kq = Tich(a, b);
                cout << "Ket qua la: ";
                Xuat(kq);
                cout << endl;
                system("pause");
                break;
            }
            case '6': {
                system("cls");
                SoPhuc kq = Thuong(a, b);
                cout << "Ket qua la: ";
                Xuat(kq);
                cout << endl;
                system("pause");
                break;
            }
            default:
                cout << "LUA CHON KHONG HOP LE!\n";
        }

    }
}

int main () {
    SoPhuc a, b;
    Menu(a, b);
    return 0;
}