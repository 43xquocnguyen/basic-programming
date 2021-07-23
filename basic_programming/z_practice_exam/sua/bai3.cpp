#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
using namespace std;

struct SinhVien {
    string MSSV;
    string Hoten;
    float diem_QT;
    float diem_GK;
    float diem_CK;
    float TongDiem;
    string ghichu;
};
void Nhap_1_sv(SinhVien &a) {
    cout << "Nhap MSSV: ";
    getline(cin, a.MSSV);

    cout << "Nhap ho ten sinh vien: ";
    getline(cin, a.Hoten);

    fflush(stdin);

    do {
        cout << "Nhap diem qua trinh: ";
        cin >> a.diem_QT;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            a.diem_QT = -1;
        }
        if (a.diem_QT < 0 || a.diem_QT > 10) {
            cout << "Diem QT khong hop le! Nhap lai\n";
        }
    } while (a.diem_QT < 0 || a.diem_QT > 10);

    fflush(stdin);

    do {
        cout << "Nhap diem giua ki: ";
        cin >> a.diem_GK;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            a.diem_GK = -1;
        }
        if (a.diem_GK < 0 || a.diem_GK > 10) {
            cout << "Diem QT khong hop le! Nhap lai\n";
        }
    } while (a.diem_GK < 0 || a.diem_GK > 10);

    fflush(stdin);

    do {
        cout << "Nhap diem cuoi ki: ";
        cin >> a.diem_CK;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            a.diem_CK = -1;
        }
        if (a.diem_CK < 0 || a.diem_CK > 10) {
            cout << "Diem QT khong hop le! Nhap lai\n";
        }
    } while (a.diem_CK < 0 || a.diem_CK > 10);

    fflush(stdin);

    a.TongDiem = (a.diem_GK * 2 + a.diem_QT * 3 + a.diem_CK * 5) / 10;

    cout << "Nhap ghi chu cho sinh vien (neu co): ";
    getline(cin, a.ghichu);
}
void Nhap_1_lop(SinhVien a[], int &n) {
    do {
        cout << "Nhap vao so luong sinh vien can them thong tin: ";
        cin >> n;
        if (n <= 0) {
            cout << "So luong khong hop le! Nhap lai\n";
        }
    } while (n <= 0);

    fflush(stdin);

    for (int i = 0; i < n; i++) {
        system("cls");
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << endl;
        Nhap_1_sv(a[i]);
    }
}
void SapXep(SinhVien a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].TongDiem < a[j].TongDiem) {
                SinhVien b = a[j];
                a[j] = a[i];
                a[i] = b;
            }
        }
    }
}
void Xuat() {
    cout << setw(8) << left << "STT";
    cout << setw(12) << left << "MSSV";
    cout << setw(35) << left << "Ho va ten";
    cout << setw(12) << left << "Diem QT";
    cout << setw(12) << left << "Diem GK";
    cout << setw(12) << left << "Diem CK";
    cout << setw(12) << left << "Tong diem";
    cout << setw(20) << left << "Ghi chu";
    cout << endl;
    cout << setfill('-');
    cout << setw(120) << "-" << endl;
}
void Xuat_1_sv(SinhVien a) {
    cout << setw(12) << left << a.MSSV;
    cout << setw(35) << left << a.Hoten;
    cout << setw(12) << left << a.diem_QT;
    cout << setw(12) << left << a.diem_GK;
    cout << setw(12) << left << a.diem_CK;
    cout << setw(12) << left << a.TongDiem;
    cout << setw(20) << left << a.ghichu;
}
void Xuat_1_lop(SinhVien a[], int n) {
    Xuat();
    SapXep(a, n);
    for (int i = 0; i < n; i++) {
        cout << setfill(' ');
        cout << setw(8) << left << i + 1;
        Xuat_1_sv(a[i]);
        cout << endl;
    }
}
string Ten(string a) {
    //họ = s.substr(0, s.find_last_of(' '));
    //tên = s.substr(s.find_last_of(' ') + 1);
    int n = a.length();
    int i = 0;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] == ' ') {
            break;
        }
    }
    string ten = a.substr(i + 1);
    return ten;
}
bool KT_Sinh_Vien_Can_Tim(SinhVien a[], int n, string tencantim) {
    for (int i = 0; i < n; i++) {
        if (Ten(a[i].Hoten) == tencantim) {
            return true;
        }
    }
    return false;
}
void Xuat_Sinh_Vien_Can_Tim(SinhVien a[], int n, string tencantim) {
    if (KT_Sinh_Vien_Can_Tim(a, n, tencantim)) {
        Xuat();
        int l = 0;
        for (int i = 0; i < n; i++) {
            if (Ten(a[i].Hoten) == tencantim) {
                cout << setfill(' ');
                cout << setw(8) << left << l + 1;
                Xuat_1_sv(a[i]);
                cout << endl;
                l++;
            }
        }
    }
    else {
        cout << "Khong tim thay sinh vien nao co ten " << tencantim << endl;;
    }
}
void MENU(SinhVien a[], int n) {
    while (true) {
        system("cls");
        cout << "1. NHAP MOI MOT DANH SACH SINH VIEN" << endl;
        cout << "2. XUAT DANH SACH SINH VIEN CO TONG DIEM TU CAO DEN THAP" << endl;
        cout << "3. TIM KIEM HOC VIEN THEO HO VA TEN" << endl;
        cout << "4. KET THUC" << endl;
        char luachon;
        cout << "\nNHAP VAO LUA CHON CUA BAN: ";
        cin >> luachon;

        if (luachon == '4') {
            system("cls");
            cout << "CHUONG TRINH KET THUC\n";
            system("pause");
            break;
        }
        switch (luachon) {
            case '1': {
                system("cls");
                Nhap_1_lop(a, n);
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                Xuat_1_lop(a, n);
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                fflush(stdin);
                string tencantim;
                cout << "Nhap ten can tim: ";
                getline(cin, tencantim);
                Xuat_Sinh_Vien_Can_Tim(a, n, tencantim);
                system("pause");
                break;
            }
 
        }
        
    }
}

int main() {
    SinhVien a[100];
    int n;
    MENU(a, n);
    return 0;
}