#include <iostream>
#include <conio.h>
using namespace std;

void Nhapmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i + 1 << "]: ";
		cin >> a[i];
	}
}
void Xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
}
int Sochuso(int n) {
	int s = 0;
	while (n != 0) {
		s++;
		n = n / 10;
	}
	return s;
}
bool b_So_tang(int n) {
	int a, b;
	while (n != 0) {
		a = n % 10;
		b = n / 10 % 10;
		if (a < b) {
			return false;
		}
		n /= 10;
	}
	return true;
}
int So_so_tang(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if ((Sochuso(a[i]) == 3) && (b_So_tang(a[i]) == true)) dem++;
	return dem;
}
int main() {
	int a[100], n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Nhapmang(a, n);
	cout << "Trong mang co " << So_so_tang(a, n) << " so tang\n";
	return 0;
}