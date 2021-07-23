#include <iostream>
#include <math.h>
using namespace std;

struct DaThuc {
    float *heso;
    int bac;
};
void NhapDaThuc(DaThuc &a) {
    cout << "Nhap bac cua da thuc: ";
    cin >> a.bac;
    a.heso = new float[a.bac + 1];

    for (int i = 0; i <= a.bac; i++) {
        cout << "Nhap he so " << (char)(i + 97) << ": ";
        cin >> a.heso[i];
    }
}
void XuatDaThuc(DaThuc a) {
    int k = 0;
    for (int i = a.bac; i >= 0; i--, k++) {
        cout << a.heso[k];

        if (i == 0) {
            break;
        }
        cout << "x^" << i << " + ";
    }
}
DaThuc tong(DaThuc a, DaThuc b) {
    int k, t, j;
    if (a.bac > b.bac) {
        k = a.bac;
        t = b.bac;
        for (int i = k; i >= b.bac - 1; i--) {
            j = a.heso[i] + b.heso[t];
            a.heso[i] = j;
            t--;
        }
        return a;
    }
    if (a.bac < b.bac) {
        k = a.bac;
        t = b.bac;
        for (int i = t; i >= a.bac - 1; i--) {
            j = b.heso[i] + a.heso[k];
            b.heso[i] = j;
            k--;
        }
        return b;
    }

    for (int i = 0; i <= a.bac; i++) {
        j = a.heso[i] + b.heso[i];
        a.heso[i] = j;
    }
    return a;
}
DaThuc hieu(DaThuc a, DaThuc b) {
    int k, t, j;
    if (a.bac > b.bac) {
        k = a.bac;
        t = b.bac;
        for (int i = k; i >= b.bac - 1; i--) {
            j = a.heso[i] - b.heso[t];
            a.heso[i] = j;
            t--;
        }
        return a;
    }
    if (a.bac < b.bac) {
        k = a.bac;
        t = b.bac;
        for (int i = t; i >= a.bac - 1; i--) {
            j = b.heso[i] - a.heso[k];
            b.heso[i] = j;
            k--;
        }
        return b;
    }

    for (int i = 0; i <= a.bac; i++) {
        j = a.heso[i] - b.heso[i];
        a.heso[i] = j;
    }
    return a;
}
DaThuc tich(DaThuc a, DaThuc b) {
    DaThuc kq;
    kq.bac = a.bac + b.bac;
    kq.heso = new float[kq.bac + 1];

    for (int i = 0; i <= kq.bac; i++) {
        kq.heso[i] = 0;
    }
    

    for (int i = 0; i <= a.bac; i++){
        for (int j = 0; j <= b.bac; j++)
            kq.heso[i + j] += a.heso[i] * b.heso[j];


    }
    return kq;
}
DaThuc Dao_ham_cap_1(DaThuc a) {
    int k = 0;
    for (int i = a.bac; i >= 0; i--) {
        a.heso[k] *= i;
        k++;
    }
    a.bac--;
    return a;
}
DaThuc Dao_ham_cap_k(DaThuc a, int k) {
    for (int i = 0; i < k; i++) {
        a = Dao_ham_cap_1(a);
    }
    return a;
}
int Tai_x0(DaThuc a, int x0) {
    int k = 0, S = 0;
    for (int i = a.bac; i >= 0; i--) {
        S = S + a.heso[k] * pow(x0, i);
    }
    return S;
}
int main() {
    DaThuc a, b;
    NhapDaThuc(a);
    XuatDaThuc(a);
    cout << endl;
    cout << endl;

    cout << "Nhap vao x0: ";
    int k;
    cin >> k;

    int oooo = Tai_x0(a, k);
    cout << endl << oooo << endl;
}