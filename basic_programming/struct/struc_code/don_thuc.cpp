#include <iostream>
#include <math.h>
using namespace std;

struct DonThuc {
    float heso;
    int somu;
};
void NhapDonThuc(DonThuc &a) {
    cout << "Nhap he so: ";
    cin >> a.heso;
    cout << "Nhap so mu: ";
    cin >> a.somu;
}
void XuatDonThuc(DonThuc a) {
    if (a.somu == 1 && a.heso == 1) {
        cout << "x";
    }
    else if (a.heso == 1) {
        cout << "x^" << a.somu;
    }
    else {
        cout << a.heso << "x";
    }
    
}
DonThuc tich2DonThuc(DonThuc a, DonThuc b) {
    DonThuc kq;
    kq.heso = a.heso * b.heso;
    kq.somu = a.somu + b.somu;
    return kq;
}
DonThuc Dao_ham_cap_1(DonThuc a) {
    DonThuc kq;
    kq.heso = a.heso * a.somu;
    kq.somu = a.somu - 1;
    return kq;
}
DonThuc chia2DonThuc(DonThuc a, DonThuc b) {
    DonThuc kq;
    kq.heso = a.heso / b.heso;
    kq.somu = a.somu - b.somu;
    return kq;
}
DonThuc Dao_Ham_Cap_k(DonThuc a, int k) {
    for (int i = 0; i < k; i++) {
        a = Dao_ham_cap_1(a);
    }
    return a;
}
float Tinh_Tai_xo(DonThuc a, int x0) {
    return a.heso * pow(x0, a.heso);
}
void menu(DonThuc a, DonThuc b) {
    while (true) {
        system("cls");
        cout << "1. NHAP DON THUC\n";
        cout << "2. XUAT DON THUC\n";
        cout << "3. NHAN 2 DON THUC\n";
        cout << "4. TINH DAO HAM CAP 1\n";
        cout << "5. CHIA HAI DON THUC\n";
        cout << "6. TINH DAO HAM CAP k\n";
        cout << "7. TINH GIA TRI TAI x0\n";
        cout << "8. KET THUC\n";

        char luachon;
        cout << "Nhap lua chon cua ban: ";
        cin >> luachon;
        if (luachon == '8') {
            system("cls");
            cout << "CHUONG TRINH KET THUC\n";
            system("pause");
            break;
        }
        switch (luachon) {
            case '1': {
                system("cls");
                cout << "NHAP DON THUC A: \n";
                NhapDonThuc(a);
                cout << "NHAP DON THUC B: \n";
                NhapDonThuc(b);
                cout << endl;
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                cout << "DON THUC A: ";
                XuatDonThuc(a);
                cout << endl;
                cout << "DON THUC B: ";
                XuatDonThuc(b);
                cout << endl;
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                DonThuc kq = tich2DonThuc(a, b);
                cout << "Ket qua la: ";
                XuatDonThuc(kq);
                cout << endl;
                system("pause");
                break;
            }
            case '4': {
                system("cls");
                DonThuc kq;
                char k;
                do {
                    cout << "1. TINH DAO HAM DON THUC A\n";
                    cout << "2. TINH DAO HAM DON THUC B\n";
                    cout << "NHAP LUA CHON: ";
                    cin >> k;
                    if (k != '1' && k != '2')
                        cout << "NHAP SAI! NHAP LAI\n";
                } while (k != '1' && k != '2');

                if (k == '1') {
                    system("cls");
                    kq = Dao_ham_cap_1(a);
                    cout << "Ket qua la: ";
                    XuatDonThuc(kq);
                }
                else {
                    system("cls");
                    kq = Dao_ham_cap_1(b);
                    cout << "Ket qua la: ";
                    XuatDonThuc(kq);
                }
                cout << endl;
                system("pause");
                break;
            }
            case '5': {
                system("cls");
                DonThuc kq = chia2DonThuc(a, b);
                cout << "Ket qua la: ";
                XuatDonThuc(kq);
                cout << endl;
                system("pause");
                break;
            }
            case '6': {
                system("cls");
                char k;
                do {
                    cout << "1. TINH DAO HAM CAP k DON THUC A\n";
                    cout << "2. TINH DAO HAM CAP k DON THUC B\n";
                    cout << "NHAP LUA CHON: ";
                    cin >> k;
                    if (k != '1' && k != '2')
                        cout << "NHAP SAI! NHAP LAI\n";
                } while (k != '1' && k != '2');
                int n;
                cout << "Nhap cap k can dao ham: ";
                cin >> n;
                if (k == '1') {
                    system("cls");
                    DonThuc kq = Dao_Ham_Cap_k(a, n);
                    cout << "Ket qua la: ";
                    XuatDonThuc(kq);
                }
                else {
                    system("cls");
                    DonThuc kq = Dao_Ham_Cap_k(b, n);
                    cout << "Ket qua la: ";
                    XuatDonThuc(kq);
                }
                cout << endl;
                system("pause");
                break;
            }
            case '7': {
                system("cls");
                int x0;
                cout << "Nhap gia tri tai x0: ";
                cin >> x0;
                cout << "KET QUA LA: ";
                cout << Tinh_Tai_xo(a, x0);
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
    DonThuc a, b;
    menu(a, b);
    return 0;
}