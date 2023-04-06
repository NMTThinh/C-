#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100];
	do
	{
		cout << "Nhap so phan tu cho n 1->100: ";
		cin >> n;
	} while (n < 1 || n>100);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap gia tri cho  " << i << ;
		cin >> a[i];
	}
	cout << "mang vua nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	// tìm max & min
	int min = a[0];//a[0] là phần tử đầu tiên
	for (int i = 1; i < n; i++)//int =1 vì đã gán sẵn ptu 0 nên i sẽ chạy từ 1 
	{
		if (min > a[i])//vi dụ mãng 22 11 55: min=22>11,min=11, min=11<55 => min=11.kết thúc
			min = a[i];
	}
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])// ví dụ mãng 22 11 55: max=22>11 =>max=22, max=22<55 => max=55.kết thúc 
			max = a[i];
	}
	cout << "phan tu max la:" << max<<endl;
	cout << "phan tu min la:" << min;
}