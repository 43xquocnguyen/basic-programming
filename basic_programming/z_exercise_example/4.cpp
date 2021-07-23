#include<iostream>

using namespace std;

struct POINT
{
	float x, y, z;
};

struct POLYGON
{
	POINT *polygon;
	int n;
};

void NhapToaDo(POLYGON *&a)
{
	do
	{
		cout << "Nhap so dinh cua da giac: ";
		cin >> a->n;
		if (a->n <= 2)
		{
			cout << "Khong phai da giac, nhap lai: ";
		}
	} while (a->n <= 2);

    a->polygon = new POINT[a->n];

    for (int i = 0; i < a->n; i++)
    {
        cout << "\nNhap diem thu " << i + 1 << endl;
        cout << "Nhap x: ";
        cin >> a->polygon[i].x;
        cout << "Nhap y: ";
        cin >> a->polygon[i].y;
        cout << "Nhap z: ";
        cin >> a->polygon[i].z;
    }
}

void XuatDiem(POLYGON *a)
{
    int size = a->n;
    for (int i = 0; i < size; i++)
    {
        cout << (char)(i + 65);
        cout << "(" << a->polygon[i].x << ";" << a->polygon[i].y << ";" << a->polygon[i].z << ")";
        cout << endl;
    }
}


int main() {
    POLYGON *a;
    a = new POLYGON;

    NhapToaDo(a);
    XuatDiem(a);

    delete a;
    return 0;
}