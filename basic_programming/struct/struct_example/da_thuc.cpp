#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

#define MAX 100

// Khai bao kieu DATHUC
// anx^n + an-1x^n-1 +... + a1x + a0
typedef struct {
	int n;
	float a[MAX];
} DATHUC;

// Nguyen mau ham
void KhoiTaoDaThucRong(DATHUC &dt);
void Nhap(DATHUC &dt);
void Xuat(DATHUC dt, char *thongbao);
DATHUC Tong(DATHUC dt1, DATHUC dt2);
DATHUC Hieu(DATHUC dt1, DATHUC dt2);
DATHUC Tich(DATHUC dt1, DATHUC dt2);
DATHUC DaoHamCap1(DATHUC dt);
DATHUC DaoHamCapk(DATHUC dt, int k);
float TinhGiaTri(DATHUC dt, float x0);

int main()
{
	DATHUC dt1, dt2;

	Nhap(dt1);
	Xuat(dt1, "Da thuc 1: ");

	Nhap(dt2);
	Xuat(dt2, "Da thuc 2: ");

	Xuat(Tong(dt1, dt2), "Da thuc 1 + Da thuc 2 = ");
	Xuat(Hieu(dt1, dt2), "Da thuc 1 - Da thuc 2 = ");
	Xuat(Tich(dt1, dt2), "Da thuc 1 * Da thuc 2 = ");

	Xuat(DaoHamCap1(dt1), "Dao ham cap 1 cua Da thuc 1 = ");

	int k;
	cout<<"Nhap k: ";
	cin>>k;
	Xuat(DaoHamCapk(dt1, k), "Dao ham cap k cua Da thuc 1 = ");

	float x0;
	cout<<"Nhap x0: ";
	cin>>x0;
	cout<<"Gia tri cua da thuc 1 tai x0 = "<<x0<<" la: "<<TinhGiaTri(dt1, x0)<<"\n";
	return 0;
}

void KhoiTaoDaThucRong(DATHUC &dt) {
	dt.n = 0;
}

void Nhap(DATHUC &dt)
{
	//KhoiTaoDaThucRong(dt);

	cout << "Nhap bac cua da thuc: ";
	cin >> dt.n;

	float temp;
	for (int i = dt.n; i >= 0; i--)
	{
		cout << "Nhap he so a" << i << ": ";
		cin >> temp;
		dt.a[i] = temp;
	}

	while (dt.n>0 && dt.a[dt.n] == 0)
		dt.n--;
}

void Xuat(DATHUC dt, char* thongbao)
{
    cout << thongbao;

    for (int i=dt.n; i>0; i--)
		if (dt.a[i] != 0)
			cout<<dt.a[i]<<"x^"<<i<<" + ";

	cout<<dt.a[0]<<"\n";
}

DATHUC Tong(DATHUC dt1, DATHUC dt2)
{
	DATHUC kq;
	KhoiTaoDaThucRong(kq);

	if (dt1.n > dt2.n)
		kq.n = dt1.n;
	else
		kq.n = dt2.n;

	for (int i=0; i<=kq.n; i++)
		kq.a[i] = dt1.a[i] + dt2.a[i];

	while (kq.n>0 && kq.a[kq.n] == 0)
		kq.n--;

	return kq;
}

DATHUC Hieu(DATHUC dt1, DATHUC dt2)
{
	DATHUC kq;
	KhoiTaoDaThucRong(kq);

	if (dt1.n > dt2.n)
		kq.n = dt1.n;
	else
		kq.n = dt2.n;

	for (int i=0; i<=kq.n; i++)
		kq.a[i] = dt1.a[i] - dt2.a[i];

	while (kq.n>0 && kq.a[kq.n] == 0)
		kq.n--;

	return kq;
}

DATHUC Tich(DATHUC dt1, DATHUC dt2)
{
	DATHUC kq;
	KhoiTaoDaThucRong(kq);

	kq.n = dt1.n + dt2.n;

	int i, j;
	for (i=0; i<=dt1.n; i++)
		for (j=0; j<=dt2.n; j++)
			kq.a[i+j] = kq.a[i+j] + dt1.a[i] * dt2.a[j];

	while (kq.n>0 && kq.a[kq.n] == 0)
		kq.n--;

	return kq;
}

DATHUC DaoHamCap1(DATHUC dt)
{
	DATHUC kq;
	KhoiTaoDaThucRong(kq);

	kq.n = dt.n - 1;

	for (int i=kq.n; i>=0; i--)
		kq.a[i] = dt.a[i+1] * (i+1);

	return kq;
}

DATHUC DaoHamCapk(DATHUC dt, int k)
{
	DATHUC kq = dt;

	for (int i=0; i<k; i++)
		kq = DaoHamCap1(kq);

	return kq;
}

float TinhGiaTri(DATHUC dt, float x0)
{
	float kq = 0;

	for (int i=dt.n; i>=0; i--)
		kq = kq + dt.a[i] * pow(x0, i);

	return kq;
}
