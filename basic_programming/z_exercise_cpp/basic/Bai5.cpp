#include <iostream>
using namespace std;
#define PI 3.14

int main(){
    int r, h;
    cout << "Nhap vao ban kinh & chieu cao: ";
    cin >> r >> h;
    cout << "Dien tich day = " << PI * r * r << endl;
    cout << "Dien tich xung quanh = " << 2 * PI * r * h << endl;
    cout << "The tich = " << PI * r * r * h << endl;
}
