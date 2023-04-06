#include<iostream>
using namespace std;

void nhapMang(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatMang(int a[][100], int n, int m)
{
	cout << "Mang vua nhap la: "<<endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout <<" "<< a[i][j];
		}
		cout << "\n";
	}
	
}
void tongHang(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)//duyet cac phan tu o hang i va tinh tong	
	{
		int tong = 0;
		for (int j = 0; j < m; j++) {
			tong += a[i][j];
		}
		cout << "tong cac phan tu cua hang thu "<<i<<" la: " << tong<<endl;
	}
}
void tongCot(int a[][100], int n, int m)
{
	for (int j = 0; j < m; j++) //duyet cac phan tu o cot j va tinh tong
	{
		int	tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i][j]
			;
	}
	cout << "Tong cac phan tu cot thu " << j << " la: " << tong<<endl;
	}
}



int main()
{
	int a[100][100];
	int n, m;
	cout << "Nhap so hang va co cot tu 1->100."<<endl;
	//nhap xuat hang va cot.
	cout << "Nhap so hang n: ";
	cin >> n;
	cout << "Nhap so cot m: ";
	cin >> m;
	nhapMang(a, n, m);
	xuatMang(a, n, m);
	tongHang(a, n, m);
	tongCot(a, n, m);
}