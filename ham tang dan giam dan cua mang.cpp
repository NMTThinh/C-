#include<iostream>
using namespace std;

void nhapPT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri ["<<i<<"] la: ";
		cin >> a[i];
	}
}
void xuatPT(int a[], int n)
{

	for (int i = 0; i < n; i++)
		cout <<" " << a[i];
}
void sapXepGiam(int a[], int n)
{
	for (int i = 0; i < n; i++)//cho i chay tu dau den phan tu ke cuoi
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				//dao nguoc vi tri 2 phan tu
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void sapXepTang(int a[], int n)
{
	for (int i = 0; i < n; i++)//cho i chay tu dau den phan tu ke cuoi
	{
		for (int j = i + 1; j < n; j++)//j chay tu i den cuoi
		{
			if (a[i] > a[j])
			{
				//dao nguoc vi tri 2 phan tu
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int a[100];
	int n;
	//Nhap va xuat mang
	cout << "Nhap so phan tu n<100: ";
	cin >> n;
	nhapPT(a, n);
	cout << "Mang vua nhap la: ";
	xuatPT(a, n);
	//sap xep giam dan
	sapXepGiam(a, n);
	cout << endl;
	cout << "Mang sap xep giam dan la: ";
	xuatPT(a, n);
	cout << endl;
	//sap xep tang dan
	sapXepTang(a, n);
	cout << "Mang sap xep tang dan la: ";
	xuatPT(a, n);
}