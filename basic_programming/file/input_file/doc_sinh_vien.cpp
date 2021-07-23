#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct NamSinh {
    int ngay;
    int thang;
    int nam;
};
struct SinhVien {
    string hoTen;
    NamSinh ngaySinh;
    string mssv;
};

void DocFile(ifstream &nhapFile, SinhVien arr[], int &n) {
    while (!nhapFile.eof())
    {
        n++;
        char skip;
        getline(nhapFile, arr[n - 1].hoTen, ',');
        nhapFile >> arr[n - 1].ngaySinh.ngay;
        nhapFile >> skip; // bỏ qua kí tự "/" - có thể dùng seekg(x,y)
        nhapFile >> arr[n - 1].ngaySinh.thang;
        nhapFile >> skip; // bỏ qua kí tự "/"
        nhapFile >> arr[n - 1].ngaySinh.nam;
        nhapFile >> skip; // bỏ qua kí tự "/"
        getline(nhapFile, arr[n - 1].mssv);
    }
}
void XuatThongTin(SinhVien arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "HO TEN: " << arr[i].hoTen << endl;
        cout << "NGAY THANG NAM SINH: ";
        cout << arr[i].ngaySinh.ngay << "/" << arr[i].ngaySinh.thang << "/" << arr[i].ngaySinh.nam << endl;
        cout << "MA SO SINH VIEN: " << arr[i].mssv << endl;
    }
    
}

int main() {
    SinhVien arr[100];
    int n = 0;

    ifstream nhapFile("sinh_vien.txt", ios_base::in);
    DocFile(nhapFile, arr, n);
    nhapFile.close();

    XuatThongTin(arr, n);
    return 0;
}