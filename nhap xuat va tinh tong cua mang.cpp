#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100];
	int tong=0;
	do
	{
		cout << "nhap vao so phan tu cho n 1->100:";
		cin >> n;
	} while (n < 1 || n>100);

	for (int i = 0; i < n; i++)
	{
		cout << "nhap gia tri cho mang i: ";
		cin >> a[i];
	}
	cout << "Mang vua nhap la:";
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;
	cout << "Tong cac phan tu la: ";
	for (int i = 0; i < n; i++)
	{
		tong += a[i]; 
	}
	cout << tong;
}