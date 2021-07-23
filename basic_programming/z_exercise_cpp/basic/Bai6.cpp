#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14

int main(){
    int x;
    cout << "Nhap x: ";
    cin >> x;
    float y1, y2;
    y1 = 4 * (pow(x, 2) + 10 * x * sqrt(x) + 3 * x + 1);
    y2 = (sin(PI * x * x) + sqrt(x * x + 1)) / exp(2 * x) + cos(PI * x / 4);
    cout << "y1 = " << y1 << endl;
    cout << "y2 = " << y2 << endl;
}
