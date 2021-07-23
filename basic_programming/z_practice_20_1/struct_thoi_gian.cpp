#include <iostream>
using namespace std;

struct ThoiGian {
    int ngay;
    int thang;
    int nam;
};
bool nam_nhuan(ThoiGian a) {
    if (a.nam % 400 == 0 || (a.nam % 4 == 0 && a.nam % 100 != 0))
    {
        return true;
    }
    return false;
}
void nhap_ngay(ThoiGian &a) {
    do {
        cout << "Nhap nam: ";
        cin >> a.nam;
        if (a.nam <= 0)
            cout << "Nam khong hop le! Nhap lai\n";
    } while (a.nam <= 0);

    do {
        cout << "Nhap thang: ";
        cin >> a.thang;
        if (a.thang <= 0 || a.thang > 12)
            cout << "Thang khong hop le! Nhap lai\n";
    } while (a.thang <= 0 || a.thang > 12);

    if (a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12) {
        do {
        cout << "Nhap ngay: ";
        cin >> a.ngay;
        if (a.ngay <= 0 || a.ngay > 31)
            cout << "Ngay khong hop le! Nhap lai\n";
        } while (a.ngay <= 0 || a.ngay > 31);
    }
    else if (a.thang == 2) {
        if (nam_nhuan(a)) {
            do {
            cout << "Nhap ngay: ";
            cin >> a.ngay;
            if (a.ngay <= 0 || a.ngay > 29)
                cout << "Ngay khong hop le! Nhap lai\n";
            } while (a.ngay <= 0 || a.ngay > 29);
        }
        else {
            do {
            cout << "Nhap ngay: ";
            cin >> a.ngay;
            if (a.ngay <= 0 || a.ngay > 28)
                cout << "Ngay khong hop le! Nhap lai\n";
            } while (a.ngay <= 0 || a.ngay > 28);
        }
        
    }
    else {
        do {
            cout << "Nhap ngay: ";
            cin >> a.ngay;
            if (a.ngay <= 0 || a.ngay > 30)
                cout << "Ngay khong hop le! Nhap lai\n";
        } while (a.ngay <= 0 || a.ngay > 30);
    }
    
}
void xuat_ngay(ThoiGian a) {
    cout << a.ngay << "/" << a.thang << "/" << a.nam << endl;
}
int songaytrongthang(ThoiGian a) {
    if (a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12) {
        return 31;
    }
    else if (a.thang == 2) {
        if (nam_nhuan(a)) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else {
        return 30;
    }
}
int so_ngaycuanam(ThoiGian a) {
    if (nam_nhuan(a)) {
        return 366;
    }
    return 365;
}
ThoiGian ngaytieptheo(ThoiGian a) {
    ThoiGian b = a;
    if (b.ngay < songaytrongthang(b)) {
        b.ngay++;
    }
    else if (b.thang != 12) {
        b.ngay = 1;
        b.thang++;
    }
    else {
        b.ngay = 1;
        b.thang = 1;
        b.nam++;
    }
    return b;
}
ThoiGian ngaytruocdo(ThoiGian a) {
    ThoiGian b = a;
    if (b.ngay != 1) {
        b.ngay--;
    }
    else if (b.ngay == 1 && b.thang != 1) {
        b.thang--;
        b.ngay = songaytrongthang(b);
    }
    else {
        b.nam--;
        b.thang = 12;
        b.ngay = songaytrongthang(b);
    }
    return b;
}
void menu(ThoiGian a) {
    char lc;
    while (true) {
        cout << "\t\tMENU\n";
        cout << "1. Nhap thoi gian" << endl;
        cout << "2. Xuat thoi gian" << endl;
        cout << "3. Tinh so ngay trong nam" << endl;
        cout << "4. Cho biet co phai nam nhuan hay khong" << endl;
        cout << "5. Tinh ngay truoc do" << endl;
        cout << "6. Tinh ngay sau do" << endl;
        cout << "7. Ket thuc" << endl;
        cout << "Nhap vao lua chon cua ban: ";
        cin >> lc;
        cout << "=======================================" << endl;
        if (lc == '7') {
            system("cls");
            cout << "Chuong trinh ket thuc\n";
            break;
        }
        switch (lc) {
            case '1': {
                system("cls");
                nhap_ngay(a);
                system("pause");
                break;
            }
            case '2': {
                system("cls");
                xuat_ngay(a);
                system("pause");
                break;
            }
            case '3': {
                system("cls");
                cout << "So ngay trong nam la: " << so_ngaycuanam(a) << endl;
                system("pause");
                break;
            }
            case '4': {
                system("cls");
                if (nam_nhuan(a))
                    cout << "Day la nam nhuan\n";
                else {
                    cout << "Khong phai nam nhuan\n";
                }
                system("pause");
                break;
            }
            case '5': {
                system("cls");
                ThoiGian b = ngaytruocdo(a);
                cout << "Ngay truoc do la: ";
                xuat_ngay(b);
                system("pause");
                break;
            }
            case '6': {
                system("cls");
                ThoiGian b = ngaytieptheo(a);
                cout << "Ngay tiep theo la: ";
                xuat_ngay(b);
                system("pause");
                break;
            }
            default:
                cout << "Lua chon khong hop le! Vui long nhap lai\n";
        }
        system("cls");
    }


}
int main() {
    ThoiGian a;
    system("cls");
    menu(a);
    return (0);
}