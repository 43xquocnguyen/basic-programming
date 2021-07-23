#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;

struct Diem6mon {
    float Toan;
    float Li;
    float Hoa;
    float Anh;
    float Van;
    float Sinh;
};
struct SinhVien {
    string mssv;
    string hoten;
    char gioitinh;
    string diachilienhe;
    Diem6mon diem;
};
void nhap_diem_6_mon(Diem6mon &diem) {
    do {
        cout << "Nhap diem mon Toan: ";
        cin >> diem.Toan;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            diem.Toan = -1;
        }
        if (diem.Toan <= 0 || diem.Toan > 10)
            cout << "Diem Toan khong hop le! Nhap lai\n";
    } while (diem.Toan <= 0 || diem.Toan > 10);
    do {
        cout << "Nhap diem mon Li: ";
        cin >> diem.Li;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            diem.Li = -1;
        }
        if (diem.Li <= 0 || diem.Li > 10)
            cout << "Diem Li khong hop le! Nhap lai\n";
    } while (diem.Li <= 0 || diem.Li > 10);
    do {
        cout << "Nhap diem mon Hoa: ";
        cin >> diem.Hoa;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            diem.Hoa = -1;
        }
        if (diem.Hoa <= 0 || diem.Hoa > 10)
            cout << "Diem Hoa khong hop le! Nhap lai\n";
    } while (diem.Hoa <= 0 || diem.Hoa > 10);
    do {
        cout << "Nhap diem mon Anh: ";
        cin >> diem.Anh;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            diem.Anh = -1;
        }
        if (diem.Anh <= 0 || diem.Anh > 10)
            cout << "Diem Anh khong hop le! Nhap lai\n";
    } while (diem.Anh <= 0 || diem.Anh > 10);
    do {
        cout << "Nhap diem mon Van: ";
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            diem.Van = -1;
        }
        if (diem.Van <= 0 || diem.Van > 10)
            cout << "Diem Van khong hop le! Nhap lai\n";
    } while (diem.Van <= 0 || diem.Van > 10);
    do {
        cout << "Nhap diem mon Sinh: ";
        cin >> diem.Sinh;
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            diem.Sinh = -1;
        }
        if (diem.Sinh <= 0 || diem.Sinh > 10)
            cout << "Diem Sinh khong hop le! Nhap lai\n";
    } while (diem.Sinh <= 0 || diem.Sinh > 10);
}

void nhap_1_sv(SinhVien &sv) {
    do {
        cout << "Nhap mssv: ";
        getline(cin, sv.mssv);
        if(sv.mssv.length() == 0 || sv.mssv.length() > 8) {
            cout << "MSSV khong hop le! Nhap lai\n";
        }
    } while (sv.mssv.length() == 0 ||sv.mssv.length() > 8);

    do {
        cout << "Nhap ho ten: ";
        getline(cin, sv.hoten);
        if(sv.hoten.length() == 0 ||sv.hoten.length() > 30) {
            cout << "Ho ten sv khong hop le! Nhap lai\n";
        }
    } while (sv.hoten.length() == 0 ||sv.hoten.length() > 30);

    do {
        cout << "Chon gioi tinh (0. Nam / 1.Nu): ";
        cin >> sv.gioitinh;
        if(sv.gioitinh != '0' && sv.gioitinh != '1') {
            cout << "Gioi tinh khong hop le! Nhap lai\n";
        }
    } while (sv.gioitinh != '0' && sv.gioitinh != '1');

    cin.ignore();

    do {
        cout << "Nhap dia chi lien he sv: ";
        getline(cin, sv.diachilienhe);
        if(sv.diachilienhe.length() == 0 || sv.diachilienhe.length() > 50) {
            cout << "Gioi tinh khong hop le! Nhap lai: ";
        }
    } while (sv.diachilienhe.length() == 0 || sv.diachilienhe.length() > 50);

    nhap_diem_6_mon(sv.diem);
    cin.ignore();
}
void nhap_1_lop(SinhVien lop1[], int &siso) {
    cout << "Nhap vao si so lop: ";
    cin >> siso;
    cin.ignore();
    for (int i = 0; i < siso; i++) {
        system("cls");
        cout << "Nhap thong tin cho sv thu " << i + 1 << endl;
        nhap_1_sv(lop1[i]);
        cout << "=======================================" << endl;
    }
}
void xuat_diem_6_mon(Diem6mon diem) {
    cout << setfill(' ');
    cout << setw(12) << left << diem.Toan;
    cout << setw(12) << left << diem.Li;
    cout << setw(12) << left << diem.Hoa;
    cout << setw(12) << left << diem.Anh;
    cout << setw(12) << left << diem.Van;
    cout << setw(12) << left << diem.Sinh;
}
void xuat_1_sv(SinhVien a) {
    cout << setfill(' ');
    cout << setw(12) << left << a.mssv;
    cout << setw(35) << left << a.hoten;
    cout << setw(12) << left << a.gioitinh;
    cout << setw(55) << left << a.diachilienhe;
    xuat_diem_6_mon(a.diem);
}
void xuat_1_lop(SinhVien lop1[], int siso) {
    cout << setw(5) << left << "STT";
    cout << setw(12) << left << "MSSV";
    cout << setw(35) << left <<  "Ho va ten";
    cout << setw(12) << left << "Gioi tinh";
    cout << setw(55) << left << "Dia chi";
    cout << setw(12) << left << "Toan";
    cout << setw(12)<< left << "Li";
    cout << setw(12) << left << "Hoa";
    cout << setw(12) << left << "Anh";
    cout << setw(12) << left << "Van";
    cout << setw(12) << left << "Sinh" ;

    cout << endl;
    cout << setfill('-');
    cout << setw(200) << '-';
    cout << endl;

    for (int i = 0; i < siso; i++) {
        cout << setfill(' ');
        cout << setw(5) << left << i + 1;
        xuat_1_sv(lop1[i]);
        cout << endl;
    }
}
void Timkiemsv_theomssv(SinhVien lop1[], int siso) {
    bool k = false;
    string mssv_cantim;
    do {
        cout << "Nhap mssv can tim: ";
        getline(cin, mssv_cantim);
        if(mssv_cantim.length() > 8) {
            cout << "MSSV khong hop le! Nhap lai\n";
        }
    } while (mssv_cantim.length() > 8);
    for (int i = 0; i < siso; i++) {
        if (lop1[i].mssv == mssv_cantim) {
            cout << "Sinh vien can tim la:\n";
            xuat_1_sv(lop1[i]);
            cout << endl;
            k = true;
            break;
        }
    }
    if(k == false) {
        cout << "Khong tim thay sinh nao!" << endl;
    }
}
void Timkiemsv_theoten(SinhVien lop1[], int siso) {
    bool k = false;
    string ten_cantim;
    do {
        cout << "Nhap ten can tim: ";
        getline(cin, ten_cantim);
        if(ten_cantim.length() > 30) {
            cout << "MSSV khong hop le! Nhap lai\n";
        }
    } while (ten_cantim.length() > 30);
    for (int i = 0; i < siso; i++) {
        if (lop1[i].hoten == ten_cantim) {
            cout << "Sinh vien can tim la:\n";
            xuat_1_sv(lop1[i]);
            cout << endl;
            k = true;
            break;
        }
    }
    if (k = false) {
        cout << "Khong tim thay sinh vien nao ca!" << endl;
    }
}
void Them_1sv(SinhVien lop1[], int &siso) {
    siso++;
    nhap_1_sv(lop1[siso - 1]);
}
void Huy_1sv(SinhVien lop1[], int &siso) {
    siso--;
}
int so_sv_no_mon(SinhVien lop1[], int siso) {
    int dem = 0;
    for (int i = 0; i < siso; i++) {
        if (lop1[i].diem.Toan < 5 || lop1[i].diem.Li < 6 || lop1[i].diem.Hoa < 5 || lop1[i].diem.Anh < 5 || lop1[i].diem.Van < 5 || lop1[i].diem.Sinh < 5) {
            dem++;
        }
    }
    return dem;
}
void DS_SV_Nomon(SinhVien lop1[], int siso) {
    if (so_sv_no_mon(lop1, siso)) {
        cout << "Danh sach cac sinh vien no mon:\n";
        for (int i = 0; i < siso; i++) {
            if (lop1[i].diem.Toan < 5 || lop1[i].diem.Li < 6 || lop1[i].diem.Hoa < 5 || lop1[i].diem.Anh < 5 || lop1[i].diem.Van < 5 || lop1[i].diem.Sinh < 5) {
                for (int j = 1; j <= so_sv_no_mon(lop1, siso); j++) {
                    cout << setfill(' ');
                    cout << setw(7) << left << i;
                    xuat_1_sv(lop1[i]);
                    cout << endl;
                }
            }
        }
    }
    else {
        cout << "Khong co sinh vien nao no mon ca\n";
    }
}
void menu(SinhVien lop1[], int siso) {
    char lc;
    while (true) {
        system("cls");
        cout << "1. Nhap moi mot danh sach sinh vien" << endl;
        cout << "2. Xuat danh sach sinh vien" << endl;
        cout << "3. Tim kiem mot sinh theo mssv hoac ten" << endl;
        cout << "4. Them mot sinh vien" << endl;
        cout << "5. Huy mot sinh vien" << endl;
        cout << "6. Xuat danh sach sinh vien con no diem (diem < 5)" << endl;
        cout << "7. Ket thuc\n" << endl;
        cout << "Nhap vao lua chon cua ban: ";
        cin >> lc;

        if (lc == '7') {
            system("cls");
            cout << "Chuong trinh ket thuc\n";
            break;
        }

        switch (lc) {
            case '1': {
                system("cls");
                nhap_1_lop(lop1, siso);
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                xuat_1_lop(lop1, siso);
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                char i;
                do {
                    cout << "A. Tim theo ten" << endl;
                    cout << "B. Tim theo MSSV" << endl;
                    cout << "Nhap lua chon cua ban: ";
                    cin >> i;
                    cin.ignore();
                    if (i != 'A' && i != 'a' && i != 'B' && i != 'b')
                        cout << "Khong hop le! Nhap lai\n";
                } while (i != 'A' && i != 'a' && i != 'B' && i != 'b');

                if (i == 'a' || i == 'A') {
                    Timkiemsv_theoten(lop1, siso);
                    system("pause");
                    break;
                }
                else {
                    Timkiemsv_theomssv(lop1, siso);
                    system("pause");
                    break;
                }
            }
            case '4': {
                system("cls");
                cout << "Nhap thong tin sv can them:\n";
                cin.ignore();
                Them_1sv(lop1, siso);
                system("pause");
                break;
            }
            case '5': {
                system("cls");
                Huy_1sv(lop1, siso);
                cout << "Da huy 1 sv o cuoi danh sach\n";
                system("pause");
                break;
            }
            case '6': {
                system("cls");
                DS_SV_Nomon(lop1, siso);
                system("pause");
                break;
            }
            default:
                cout << "Lua chon khong hop le! Vui long chon lai\n";
        }
    }
}
int main() {
    int siso;
    SinhVien lop1[150];
    menu(lop1, siso);
    return 0;
}