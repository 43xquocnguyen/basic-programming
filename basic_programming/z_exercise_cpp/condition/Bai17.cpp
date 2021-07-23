#include <iostream>
using namespace std;

int main(){
    int nam;
    do {
        cout << "Nhap vao 1 nam: ";
        cin >> nam;
        if (nam < 1975)
            cout << "Nhap nam sau 1975: ";
    } while (nam < 1975);
    if (nam % 2 != 0){
        cout << "Sea Game!";
    }
    if (nam % 4 == 0){
        cout << "Euro, Olympic!";
    }
}