#include <iostream>
using namespace std;

void NhapMang0(int *&a, int &n) {
    do
    {
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n <= 0) {
            cout << "So phan tu mang phai lon hon khong\n";
        }
        if (cin.fail()) {
            cin.clear();
            fflush(stdin);
            n = -1;
        }
    } while (n <= 0);
    
    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    
}
void NhapMang(int *&a, int &n) {
    do
    {
        cout << "Nhap so phan tu cua mang: ";
        cin >> n;
        if (n <= 0) {
            cout << "So phan tu cua mang khong hop le\n";
        }
    } while (n <= 0);

    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu a[" << i << "]: ";
        cin >> a[i];
    }
    
}
void XuatMang(int *a, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}
void SapTang(int *&a, int n) {
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
}
void ChenX(int *&a, int &n, int x) {
    int *b = new int[n + 1];
    int i = 0;
    for (; i < n + 1; i++)
    {
        b[i] = a[i];
    }

    i = 0;
    while (x > b[i])
    {
        i++;
    }

    for (int j = n; j > i; j--)
    {
        b[j] = b[j - 1];
    }
    b[i] = x;
    

    a = b;
    n++;
    b = nullptr;
    delete b;
}
void XoaPhanTu(int *&a, int &n, int i) {
    for (int j = i; j < n - 1; j++)
    {
        a[j] = a[j + 1];
    }
    n--;
}
void XoaY(int *&a, int &n, int y) {
    for (int i = 0; i < n; i++)
    {
        if (a[i] == y)
        {
            XoaPhanTu(a, n, i);
            i--;
        }
    }
    
}
int main() {
    int *a, n = 0;
    NhapMang(a, n);
    XuatMang(a, n);
    cout << endl;

    int y;
    cout << "Nhap y can xoa: ";
    cin >> y;
    XoaY(a, n, y);
    cout << endl;
    XuatMang(a, n);
    cout << endl;

    return 0;
}