#include <iostream>
using namespace std;

int main() {
    int N, uocchan = 0, souoc = 0, S = 0;
    cout << "Nhap vao so n: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {   
        if (N % i == 0) {
            souoc++;
            S += i;
            if (i % 2 == 0) {
                uocchan++;
            }
        }
    }
    cout << "So uoc cua" << N << " la :" << souoc << endl;
    cout << "So uoc chan cua" << N << " la :" << uocchan << endl;
    cout << "Tong cac uoc cua " << N << " la :" << S << endl;

}