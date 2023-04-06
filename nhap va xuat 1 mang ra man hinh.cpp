#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[100];
	do
	{
		cout << "Nhap so phan tu cho mang 1->100: ";
		cin >> n;
	} while (n < 1 || n>100);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri i: ";
		cin >> a[i];
	}
	cout << "Mang vua nhap la: ";
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i];
	}
	cout <<" Tong cac so trong mang la: "<< tong ;
}