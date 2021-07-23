#include <iostream>
#include<math.h>
using namespace std;

int delta1(int a,int b,int c) {
    return b * b - 4 * a * c;
}
int main() {
    int a, b, c;
    double delta, x, x1, x2;
    cout << "Phuong trinh bac 2 co dang ax^2+b*x+c " << endl;
    cout << "Nhap a,b,c : ";
    cin >> a >> b >> c;
    if(a == 0) {
        if(b == 0) {
            if(c == 0)
                cout << "Phuong trinh vo so nghiem" << endl;
            else
                cout << "Phuong trinh vo nghiem" << endl;
        }
        else {
            x = -c / b;
            cout << "Phuong trinh co nghiem : " << x << endl;
        }
    }
    else {
        if(delta1(a,b,c) < 0) cout << "Phuong trinh vo nghiem" << endl;
        if(delta1(a,b,c) == 0) {
            x1 = -b / (2 * a);
            cout << "Phuong trinh co 1 nghiem kep = " << x1;
        }
        if(delta1(a,b,c) > 0)
        {
            x1 = ((-b + sqrt(delta)) / (2 * a));
            x2 = ((-b - sqrt(delta)) / (2 * a));
            cout << "Phuong trinh co 2 nghiem phan biet " << endl;
            cout << x1 << "\t" << x2 << endl;
        }
    }
    return 0;
}