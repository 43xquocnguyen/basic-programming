#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct NhanVien {
    string MSNV;
    string Hoten;
    int Namsinh;
};
void Nhap_1_nv(NhanVien &a) {
    cout << "Nhap MSNV: ";
    getline(cin, a.MSNV);
    cout << "Nhap vao ho ten nhan vien: ";
    getline(cin, a.Hoten);

    do {
        cout << "Nhap vao nam sinh: ";
        cin >> a.Namsinh;
        cin.ignore();
        if (a.Namsinh <= 0) {
            cout << "Nam sinh khong hop le! Nhap lai\n";
        }
    } while (a.Namsinh <= 0);
}
void Nhap_1_cty(NhanVien a[], int &n) {
    cout << "Nhap so luong nhan vien can them thong tin: ";
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++) {
        system("cls");
        cout << "Nhap thong tin cho nhan vien thu " << i + 1 << endl;
        Nhap_1_nv(a[i]);
    }
}
void Xuat_1_cty(NhanVien a[], int n) {
    cout << setw(10) << left << "STT";
    cout << setw(12) << left << "MSNV";
    cout << setw(35) << left << "Ho va ten";
    cout << setw(10) << left << "Nam sinh";
    cout << endl;

    cout << setfill('-');
    cout << setw(70) << "-" << endl;

    for (int i = 0; i < n; i++) {
        cout << setfill(' ');
        cout << setw(10) << left << i + 1;
        cout << setw(12) << left << a[i].MSNV;
        cout << setw(35) << left << a[i].Hoten;
        cout << setw(10) << left << a[i].Namsinh;
        cout << endl;
    }
}
bool Tim_Nhan_Vien(NhanVien a[], int n, int ns_timkiem) {
    for (int i = 0; i < n; i++) {
        if (a[i].Namsinh ==  ns_timkiem) {
            return true;
        }
    }
    return false;
}
void In_Ra_DS_NV_TimKiem(NhanVien *a, int n) {
    int ns_timkiem;
    do {
        cout << "Nhap vao nam sinh cua nv ban tim kiem: ";
        cin >> ns_timkiem;
        cin.ignore();
        if (ns_timkiem <= 0) {
            cout << "Nam sinh khong hop le! Nhap lai\n";
        }
    } while (ns_timkiem <= 0);
    
    if (Tim_Nhan_Vien(a,n,ns_timkiem)) {
        
        cout << setw(10) << left << "STT";
        cout << setw(12) << left << "MSNV";
        cout << setw(35) << left << "Ho va ten";
        cout << setw(10) << left << "Nam sinh";
        cout << endl;

        cout << setfill('-');
        cout << setw(70) << "-" << endl;

        int j = 1;
        for (int i = 0; i < n; i++) {
            if (ns_timkiem == a[i].Namsinh) {
                cout << setfill(' ');
                cout << setw(10) << left << j;
                cout << setw(12) << left << a[i].MSNV;
                cout << setw(35) << left << a[i].Hoten;
                cout << setw(10) << left << a[i].Namsinh;
                cout << endl;
                j++;
            }
        }
    
    }
    else {
        cout << "Khong tim thay nhan vien nao sinh nam " << ns_timkiem << endl;
    }
}
void MENU(NhanVien a[], int n) {
    while(69) {
        system("cls");
        cout << "1. NHAP MOI 1 DANH SACH NHAN VIEN\n";
        cout << "2. XUAT DANH SACH NHAN VIEN\n";
        cout << "3. LOC THEO NAM SINH DANH SACH NHAN VIEN\n";
        cout << "0. KET THUC CHUONG TRINH\n";
        cout << "\nNHAP VAO LUA CHON CUA BAN: ";
        char luachon;
        cin >> luachon;

        if (luachon == '0') {
            system("cls");
            cout << "CHUONG TRINH KET THUC\n";
            system("pause");
            break;
        }

        switch (luachon) {
            case '1' : { 
            system("cls");
            Nhap_1_cty(a, n);
            system("pause");
            break;
            }
            case '2' : { 
            system("cls");
            Xuat_1_cty(a, n);
            system("pause");
            break;
            }
            case '3' : { 
            system("cls");
            In_Ra_DS_NV_TimKiem(a, n);
            system("pause");
            break;
            }
            default: {
                cout << "LUA CHON KHONG HOP LE! NHAP LAI\n";
                system("pause");
                break;
            }
        }
    }
}
int main() {
    int n;
    NhanVien a[100];
    MENU(a, n);
    return 0;
}
