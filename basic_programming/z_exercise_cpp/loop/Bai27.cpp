#include<iostream>
#include<math.h>
using namespace std;

int numberMax(int n) {
    if (n == 0) return 0;
    n = abs(n);
    int max = 0;
    while (n > 0) {
        int temp = n % 10;
        n /= 10;
        if (temp > max)
            max = temp;
    }
    return max;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    cout << "Chu so lon nhat la: " << numberMax(n) << endl;
    int dem = 0;
    while(n >= 10){
        n /= 10;
        dem++;
    }
    cout << "So luong chu so cua so nguyen la: " << dem + 1 << endl;
    return 0;
}