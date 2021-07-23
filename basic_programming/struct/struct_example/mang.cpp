#include <iostream>
#include <math.h>
using namespace std;

#define nmax 100

typedef float dathuc[nmax];

dathuc P, Q;
int m,n;

void nhap(dathuc&K, int &x) {
	int i;
	cout<<"Nhap bac cua da thuc: ";cin>>x;
	for (i = 0; i <= x; i++)
	{
		cout << "He so bac " << i << " : ";
		cin >> K[i];
	}
}
void xuatmu(int i)
{
	if (i==1) cout<<"X";
	else if(i>1) cout<<"X^"<<i;
}
void xuat(dathuc K,int x)
{
	int i=0;
	while (K[i]==0&&i<=x) i++;
	cout<<K[i];xuatmu(i);
	while (++i<=x)
	{
		if (K[i]>0) {cout<<" + "<<K[i];xuatmu(i);}
		else if (K[i]<0) {cout<<" - "<<-K[i];xuatmu(i);}
	}
}
float tinh(dathuc P, int m,float x)
{
	float F=0; int i;
	for (i=0;i<=m;i++)
		F+=P[i]*pow(x,i);
	return F;
}
void daoham(dathuc P, int m)
{
	dathuc K; int i,o=m-1;
	for(i=0;i<=o;i++)
		K[i]=(i+1)*P[i+1];
	cout<<"P' = ";xuat(K,o);
}
void nguyenham(dathuc P, int m, dathuc &K, int &o)
{
	int i; o=m+1;K[0]=0;
	for(i=1;i<=o;i++)
		K[i]=P[i-1]/i;
}
void tong(dathuc P, int m, dathuc Q, int n)
{
	dathuc K; int i,o=(m>m)?m:n;
	for (i=0;i<=m&&i<=n;i++)
		K[i]=P[i]+Q[i];
	if (m>n)
		while(i<=o) {K[i]=P[i]; i++;}
	else
		while(i<=o) {K[i]=Q[i]; i++;}
	cout<<"\nP(x)+ Q(x) = ";xuat(K,o);
}
void hieu(dathuc P, int m, dathuc Q, int n)
{
	dathuc K; int i,o=(m>m)?m:n;
	for (i=0;i<=m&&i<=n;i++)
		K[i]=P[i]-Q[i];
	if (m>n)
		while(i<=o) {K[i]=P[i]; i++;}
	else
		while(i<=o) {K[i]=-Q[i]; i++;}
	cout<<"\nP(x) - Q(x) = ";xuat(K,o);
}
void tich(dathuc P, int m, dathuc Q, int n)
{
	dathuc K; int i,j,o=m+n;
	for (i=0;i<=o;i++) K[i]=0;
	for (i=0;i<=m;i++)
		for(j=0;j<=n;j++)
			K[i+j]+=P[i]*Q[j];
	cout<<"\nP(x) * Q(x) = ";xuat(K,o);
}
float tichphan(dathuc P,int m)
{
	dathuc K; int o,c,d; float kq;
	cout<<"c = "; cin>>c;
	cout<<"d = "; cin>>d;
	nguyenham(P,m,K,o);
	kq=tinh(K,o,d)-tinh(K,o,c);
	return kq;
}
void menu() {
	char c; dathuc K; int o; float x;
	while (1) {
		cout<<"\n\nCac chuc nang:\n\
		  1. Hien thi cac da thuc da nhap: \n\
		  2. Tinh gia tri cua P(x) tai x:\n\
		  3. Tim dao ham cua P(x):\n\
		  4. Tim nguyen ham P(x):\n\
		  5. Tong, hieu, tich P(x) va Q(x):\n\
		  6. Tinh tich phan xac dinh cua P(x) tren [c,d]:\n\
		  Z. Ket thuc\n ";
		cout << "\nChon chuc nang:";
		cin >> c;
		switch(c) {
		case '1':
			cout << "\nDa thuc P(x): ";
			xuat(P, m);
			cout << "\nDa thuc Q(x): ";
			xuat(Q, n);
			break;
		case '2':
			cout << "Nhap x : ";
			cin >> x;
			cout << "P(" << x << ") = " << tinh(P, m, x);
			break;
		case '3':
			daoham(P, m);
			break;
		case '4':
			nguyenham(P, m, K, o);
			cout << "P(x) nguyen ham = ";
			xuat(K, o);
			break;
		case '5':
			cout << "\nDa thuc P(x): ";
			xuat(P, m);
			cout << "\n";
			cout << "\nDa thuc Q(x): ";
			xuat(Q, n);
			cout << "\n";
			tong(P, m, Q, n);
			hieu(P, m, Q, n);
			tich(P, m, Q, n);
			break;
		case '6':
			cout << "I = " << tichphan(P, m);
			break;
		case 'z':case 'Z':
			return;
		}
	}
}
int main() {
	cout << "CHUONG TRINH TINH DA THUC:\n";
	cout << "Nhap bac va he so cua P(x) va Q(x): \n";
	cout << "Da thuc P(x):\n";
	nhap(P, m);
	cout << "Da thuc Q(x):\n";
	nhap(Q, n);
	cout << endl;
	menu();
	return 0;
}
