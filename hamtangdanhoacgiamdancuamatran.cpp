#include<iostream>
using namespace std;

void nhapMT(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap gia tri cho[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
	}
}
void xuatMT(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<" "<< a[i][j];
		}
		cout << "\n";
	}
}
void sapXepTang(int a[][100], int m, int n)
{
	int k = m * n;//tong so luong phan tu trong mang
	for (int i = 0; i < k - 1; i++)//duyet het cac phan tu trong mang
	{
		for (int j = i+1; j < k; j++)
		{
			if (a[i / n][i % n] > a[j / n][j % n]) {// vi du 1 2 3   vi tri i=3: i/n = 3/3=1; i%n=3%3=0 => hang 1 cot 0 =4
				// hoan doi vi tri							 4 5 6		
				int temp = a[i / n][i % n];
				a[i / n][i % n] = a[j / n][j % n];
				a[j / n][j % n] = temp;
			}
		}
	}
}
void sapXepGiam(int a[][100], int m, int n)
{
	int k = m * n;
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i+1; j < k; j++)
		{
			if (a[i / n][i % n] < a[j / n][j % n]) {
				//hoan doi vi tri
				int temp = a[i / n][i % n];
				a[i / n][i % n] = a[j / n][j % n];
				a[j / n][j % n] = temp;
			}
		}
	}
}
int main()
{
	int a[100][100];
	int m,n;
	//nhap va xuat ma tran
	cout << "Nhap so hang va cot tu 1->100."<<endl;
	cout << "Nhap so dong m: ";
	cin >> m;
	cout << "Nhap so cot n: ";
	cin >> n;
	nhapMT(a, m, n);
	cout << "Ma tran vua nhap la:"<<endl;
	xuatMT(a, m, n);
	//nguoi dung nhap ket qua mong muon
	int k;
	cout << "Thu tu tang dan nhan phim 1. " << endl;
	cout << "Thu tu giam dan nhan phim 2. " << endl;
	cout << "Ket qua ban muon la: ";
	cin >> k;
	if (k == 1)
	{
		sapXepTang(a, m, n);
		cout << "Mang sau khi sap xep tang la:  " << endl;
		xuatMT(a, m, n);
	}
	else if (k == 2)
	{
		sapXepGiam(a, m, n);
		cout << "Mang sau khi sap xep giam la: " << endl;
		xuatMT(a, m, n);
	}

	
}