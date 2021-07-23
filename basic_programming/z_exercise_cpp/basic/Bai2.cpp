#include <iostream>
using namespace std;

int main(){
    int ns, tuoi;
    do {
    cout << "Nhap nam sinh: ";
    cin >> ns;
    if (ns >= 2020)
        cout << "\nNam khong hop le! Nhap lai: \n";
    } while (ns >= 2020);
    tuoi = 2020 - ns;
    cout << "Tuoi cua ban la: " << tuoi;
}
