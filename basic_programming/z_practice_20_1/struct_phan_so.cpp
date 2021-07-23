#include <iostream>
using namespace std;

struct phanso {
    int tuso;
    int mauso;
};
void nhap_1_phanso(phanso &a) {
    cout << "Tu so = ";
    cin >> a.tuso;
    cout << "Mau so = ";
    cin >> a.mauso;
}
void xuat_1_phanso(phanso a) {
    cout << a.tuso << "/" << a.mauso << endl;
}
int UCLN(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        if (b > a) {
            b = b - a;
        }
    }
    return a;
}
void rut_gon(phanso &a) {
    int n = UCLN(a.tuso, a.mauso);
    a.tuso = a.tuso / n;
    a.mauso = a.mauso / n;
}
phanso tong(phanso a, phanso b) {
    phanso kq;
    kq.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
    kq.mauso = a.mauso * b.mauso;
    rut_gon(kq);
    return kq;
}
phanso hieu(phanso a, phanso b) {
    phanso kq;
    kq.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
    kq.mauso = a.mauso * b.mauso;
    rut_gon(kq);
    return kq;
}
phanso tich(phanso a, phanso b) {
    phanso kq;
    kq.tuso = a.tuso * b.tuso;
    kq.mauso = a.mauso * b.mauso;
    rut_gon(kq);
    return kq;
}
phanso thuong(phanso a, phanso b) {
    phanso kq;
    kq.tuso = a.tuso * b.mauso;
    kq.mauso = a.mauso * b.tuso;
    rut_gon(kq);
    return kq;
}
bool KT_Phansotoigian(phanso a) {
    if (UCLN(a.tuso, a.mauso) != 1) {
        return false;
    }
    return true;
}
void Quy_Dong(phanso &a, phanso &b) {
    int n = a.mauso;
    a.tuso = a.tuso * b.mauso;
    a.mauso = a.mauso * b.mauso;
    b.tuso = b.tuso * n;
    b.mauso = b.mauso * n;
}
bool KT_Am_duong(phanso a) {
    if (a.tuso > 0 && a.mauso > 0) {
        return true;
    }
    if (a.tuso < 0 && a.mauso < 0) {
        return true;
    }
    if (a.tuso > 0 && a.mauso < 0) {
        return false;
    }
    if (a.tuso < 0 && a.mauso > 0) {
        return false;
    }
}
int so_sanh_2_ps(phanso a,phanso b) {
    double n = a.tuso / a.mauso + a.tuso % a.mauso;
    double m = b.tuso / b.mauso + a.tuso % a.mauso;
    if ( n - m > 0) {
        return 1;
    }
    if (n - m < 0) {
        return -1;
    }
    return 0;
}
void menu(phanso a, phanso b) {
    while (true) {
        system("cls");
        cout << "1. Nhap hai phan so" << endl;
        cout << "2. Xuat hai phan so" << endl;
        cout << "3. Rut gon phan so" << endl;
        cout << "4. Tinh toan tren hai phan so" << endl;
        cout << "5. Kiem tra phan so toi gian" << endl;
        cout << "6. Quy dong hai phan so" << endl;
        cout << "7. Kiem tra phan so am hay duong" << endl;
        cout << "8. So sanh hai phan so" << endl;
        cout << "9. Ket thuc" << endl;

        char lc;
        cout << "Nhap vao lua chon cua ban: ";
        cin >> lc;
        
        if (lc == '9') {
            system("cls");
            cout << "Ket thuc chuong trinh\n";
            system("pause");
            break;
        }
        switch (lc) {
            case '1': {
                system("cls");
                cout << "Nhap phan so A:\n";
                nhap_1_phanso(a);
                cout << "Nhap phan so B:\n";
                nhap_1_phanso(b);
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                cout << "Phan so A: ";
                xuat_1_phanso(a);
                cout << "Phan so B: ";
                xuat_1_phanso(b);
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                rut_gon(a);
                rut_gon(b);
                cout << "Phan so A sau khi rut gon: ";
                xuat_1_phanso(a);
                cout << "Phan so B sau khi rut gon: ";
                xuat_1_phanso(b);
                system("pause");
                break;
            }
            case '4': {
                system("cls");
                system("pause");
                break;
            }
            case '5': {
                system("cls");
                char k;
                do {
                    cout << "1. Kiem tra A\n";
                    cout << "2. Kiem tra B\n";
                    cout << "Nhap lua chon: ";
                    cin >> k;
                    if (k != '1' && k != '2')
                        cout << "Nhap khong hop le! Nhap lai\n";
                } while (k != '1' && k != '2');

                if (k == '1') {
                    if (KT_Phansotoigian(a)) {
                        system("cls");
                        cout << "Phan so da toi gian\n";
                    }
                    else {
                        system("cls");
                        cout << "Phan so chua toi gian\n";
                    }
                }
                else {
                    if (KT_Phansotoigian(b)) {
                        system("cls");
                        cout << "Phan so da toi gian\n";
                    }
                    else {
                        system("cls");
                        cout << "Phan so chua toi gian\n";
                    }
                }
                system("pause");
                break;
            }    
            case '6': {
                system("cls");
                Quy_Dong(a, b);
                cout << "Phan so A sau khi quy dong: ";
                xuat_1_phanso(a);
                cout << "Phan so B sau khi quy dong: ";
                xuat_1_phanso(b);
                system("pause");
                break;
            }
            case '7': {
                system("cls");
                char k;
                do {
                    cout << "1. Kiem tra A\n";
                    cout << "2. Kiem tra B\n";
                    cout << "Nhap lua chon: ";
                    cin >> k;
                    if (k != '1' && k != '2')
                        cout << "Nhap khong hop le! Nhap lai\n";
                } while (k != '1' && k != '2');

                if (k == '1') {
                    if (KT_Am_duong(a) == true) {
                        system("cls");
                        cout << "Phan so duong\n";
                    }
                    else {
                        system("cls");
                        cout << "Phan so am\n";
                    }
                }
                else {
                    if (KT_Am_duong(b) == true) {
                        system("cls");
                        cout << "Phan so duong\n";
                    }
                    else {
                        system("cls");
                        cout << "Phan so am\n";
                    }
                }
                system("pause");
                break;
            }    
            case '8': {
                system("cls");
                int k = so_sanh_2_ps(a, b);
                if (k == 1) {
                    cout << "Phan so A lon hon B\n";
                }
                else if (k == -1) {
                    cout << "Phan so A nho hon B\n";
                }
                else {
                    cout << "Hai phan so bang nhau\n";
                }
                system("pause");
                break;
            }
            default:
                cout << "Lua chon khong hop le! Nhap lai\n";
                break;
        }
    }
}
int main() {
    phanso a, b;
    menu(a, b);
    return 0;
}