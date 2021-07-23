#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout << "Nhap vao a,b,c,d: ";
    cin >> a >> b >> c >> d;
    int max = a, max2 = b, min = c, min2 = d;
    if (b>max)
        max = b;
    if (c>max)
        max = c;
    if (d>max)
        max = d;

    if (a>max2&&a<max)
        max2 = a;
    if (c>max2&&c<max)
        max = c;
    if (d>max2&&d<max)
        max = d;

    if (a<min)
        min = a;
    if (b<min)
        min = c;
    if (d<min)
        min = d;

    if (a<min2 && a>min)
        max2 = a;
    if (b<min2 && b>min)
        min2 = b;
    if (c<min2 && c>min)
        min2 = c;

    cout << "2 so lon nhat: " << max << "\t" << max2 << endl;
    cout << "2 so nho nhat: " << min2 << "\t" << min << endl;  
    cout << "2 so khong phai lon nhat nho nhat: " << max2 << "\t" << min2 << endl;




}
