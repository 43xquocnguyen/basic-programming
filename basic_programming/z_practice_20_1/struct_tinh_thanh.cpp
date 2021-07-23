#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;

struct TinhThanh {
    int matinh;
    string tentinh;
    long long int danso;
    float dientich;
};
void nhap_1_tinh(TinhThanh &tinh) {
    cout << "Nhap ma tinh : ";
    cin >> tinh.matinh;
    cin.ignore(); // 32767,'\n'
    cout << "Nhap ten tinh : ";
    getline(cin, tinh.tentinh);
    cout << "Nhap dan so tinh: ";
    cin >> tinh.danso;
    cout << "Nhap dien tich tinh: ";
    cin >> tinh.dientich;
}
void nhap_cac_tinh(TinhThanh tinh[], int &sotinh) {
    cout << "Nhap so tinh can them thong tin: ";
    cin >> sotinh;
    cout << "=======================================" << endl;
    for (int i = 0; i < sotinh; i++) {
        cout << "Nhap thong tin cho tinh thu " << i + 1 << " : " << endl;
        nhap_1_tinh(tinh[i]);
        cout << "=======================================" << endl;
    }
}
void xuat_1_tinh(TinhThanh tinh) {
    cout << setfill(' ');
    cout << setw(15) << left << tinh.matinh;
    cout << setw(30) << left << tinh.tentinh;
    cout << setw(25) << left << tinh.danso;
    cout << setw(25) << left << tinh.dientich;
}
void xuat_cac_tinh(TinhThanh tinh[], int sotinh) {
    cout << setw(7) << left << "STT";
    cout << setw(15) << left << "MA TINH";
    cout << setw(30) << left << "TEN TINH";
    cout << setw(25) << left << "DAN SO";
    cout << setw(25) << left << "DIEN TICH";
    cout << endl;
    cout << setfill('-');
    cout << setw(100) << "-" << endl;
    for (int i = 0; i < sotinh; i++) {
        cout << setfill(' ');
        cout << setw(7) << i + 1;
        xuat_1_tinh(tinh[i]);
        cout << endl;
    }
}
bool co_tinh_nao_ds_tren_1_tr_khong(TinhThanh tinh[], int sotinh) {
    for (int i = 0; i < sotinh; i++) {
        if (tinh[i].danso >= 1000000) {
            return true;
        }
    }
    return false;
}
void dan_so_tren_1tr(TinhThanh tinh[], int sotinh) {
    if (co_tinh_nao_ds_tren_1_tr_khong(tinh, sotinh)) {
        cout << "Cac tinh co dan so tren 1 trieu la:\n";
        for (int i = 0; i < sotinh; i++) {
            if (tinh[i].danso >= 1000000) {
                xuat_1_tinh(tinh[i]);
                cout << endl;
            }
        }
    }
    else {
        cout << "Khong co tinh nao dan so tren 1 trieu\n";
    }
}
void dien_tich_max(TinhThanh tinh[], int sotinh) {
    cout << "Tinh co dien tich lon nhat: ";
    float max = 0;
    int vtmax = 0;
    for (int i = 0; i < sotinh; i++) {
        if(tinh[i].dientich > max) {
            max = tinh[i].dientich;
            vtmax = i;
        }
    }
    cout << tinh[vtmax].tentinh << endl;
}
void menu(TinhThanh tinh[], int &sotinh) {
    char lc;
    while (true) {
        system("cls");
        cout << "\t\tMENU\n";
        cout << "1. Nhap du lieu cho cac tinh" << endl;
        cout << "2. Xuat du lieu cho cac tinh" << endl;
        cout << "3. Xuat tinh co dan so lon hon 1 trieu nguoi" << endl;
        cout << "4. Tim tinh co dien tich lon nhat" << endl;
        cout << "0. Ket thuc" << endl;
        cout << "Nhap vao lua chon cua ban: ";
        cin >> lc;
        cout << "=======================================" << endl;
        if (lc == '0') {
            system("cls");
            cout << "Chuong trinh ket thuc\n";
            break;
        }
        switch (lc) {
            case '1': {
                system("cls");
                nhap_cac_tinh(tinh, sotinh);
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                xuat_cac_tinh(tinh, sotinh);
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                dan_so_tren_1tr(tinh, sotinh);
                system("pause");
                break;
            }
            case '4': {
                system("cls");
                dien_tich_max(tinh, sotinh);
                system("pause");
                break;
            }
            default:
                cout << "Nhap khong hop le! Vui long nhap lai\n";
        }
        system("cls");
    }

}
int main() {
    int sotinh;
    TinhThanh tinh[64];
    menu(tinh, sotinh);
    return 0;
}