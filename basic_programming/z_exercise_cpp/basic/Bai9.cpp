#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int gio1;
	int phut1;
	int giay1;
	int gio2;
	int phut2;
	int giay2;
    do {
    cout << "Nhap gio 1: ";
    cin >> gio1;
    cout << "Nhap phut 1: ";
    cin >> phut1;
    cout << "Nhap giay 1: ";
    cin >> giay1;
    cout << "Nhap gio 2: ";
    cin >> gio2;
    cout << "Nhap phut 2: ";
    cin >> phut2;
    cout << "Nhap giay 2: ";
    cin >> giay2;
    if (giay1 < 0 || giay1 > 59 || phut1 < 0 || phut1 > 59 || gio1 < 0 || gio1 > 23 || giay2 < 0 || giay2 > 59 || phut2 < 0 || phut2 > 59 || gio2 < 0 || gio2 > 23)
    {
        cout << "\n Xin vui long kiem tra lai !";
    }
    } while (giay1 < 0 || giay1 > 59 || phut1 < 0 || phut1 > 59 || gio1 < 0 || gio1 > 23 || giay2 < 0 || giay2 > 59 || phut2 < 0 || phut2 > 59 || gio2 < 0 || gio2 > 23);
    int giayHieu = abs(giay1 - giay2);
	int phutHieu = abs(phut1 - phut2);
	int gioHieu = abs(gio1 - gio2);

    cout << "\n Hieu hai gio: " << gioHieu << ":" << phutHieu << ":" << giayHieu;

    int gioTong = gio1 + gio2;
	int phutTong = phut1 + phut2;
	int giayTong = giay1 + giay2;

	if (giayTong >= 60) {

		giayTong %= 60;
		phutTong++;

		if (phutTong >= 60) {

			phutTong %= 60;
			gioTong++;

			if (gioTong >= 24) {

				if (gioTong == 24) {

					gioTong = 0;
				}
				else {

					gioTong %= 24;
					gioTong--;
				}
			}
		}
	}

    cout << "\n Tong hai gio: " << gioTong << ":" << phutTong << ":" << giayTong;

    return 0;
}