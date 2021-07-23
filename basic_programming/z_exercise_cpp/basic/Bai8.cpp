#include <iostream>
using namespace std;

int main() {
    int n, sotachra, s = 0;
    do { 
    cout << "Nhap 1 so co 3 chu so: ";
    cin >> n;
    if (n<100|| n>999)
        cout << "Sai! Nhap lai:\n";
    } while (n < 100 || n > 999);
    while( n != 0) {
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }
    cout << "Tong cac chu so: " << s << endl;
}