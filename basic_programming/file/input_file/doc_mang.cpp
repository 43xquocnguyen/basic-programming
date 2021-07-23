#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    ifstream fileNhap;
    fileNhap.open("mang.txt", ios_base::in);
    
    if (fileNhap.fail()) {
        cout << "Khong tim thay file ban can tim!";
        return 0;
    }

    int arr[2002];
    int i = 0;

    while (!fileNhap.eof()) {
        fileNhap >> arr[i];
        i++;
    }

    ofstream fileGhi;
    fileGhi.open("doc_mang.txt", ios_base::app);

    fileGhi << "\nCAC SO NGUYEN TO: \n";

    for (int j = 0; j < i - 1; j++) {
        if (isPrime(arr[j])) {
            fileGhi << arr[j] << endl;
        }
    }

    fileNhap.close();
    fileGhi.close();
    return 0;
}