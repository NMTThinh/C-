#include<iostream>
using namespace std;

void nhapMang(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << "Nhap a[" << i << "][" << j << "] la: " ;
			cin >> a[i][j];
		}
	}
}
void xuatMang(int a[][100], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			cout <<" "<< a[i][j];
		}
		cout << "\n";
	}
}
void timMax(int a[][100], int n, int m)
{
	int max=a[0][0];//gan a[0][0] la phan tu dau tien
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {//vi du mang 1 2: max = a[0][0] = 1 < a[0][1] = 2 => max=2
			if (max < a[i][j])//                  3 4        a[0][1] = 2 < a[1][0] = 3 => max=3 , a[1][0] = 3 < a[1][1] = 4 => max=4. ket thuc
				max = a[i][j];
		}
	}
	cout << "Gia tri max= " << max << endl;

}
void timMin(int a[][100], int n, int m)
{
	int min = a[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (min > a[i][j]) // vi du mang 1 2: min = a[0][0] = 1 < a[0][1] = 2 => min=1
				min = a[i][j]; //            3 4        a[0][0] = 1 < a[1][0] = 3 => min=1 , a[0][0] = 1 < a[1][1] = 4 => min=1. ket thuc
		}

	}
	cout << "Gia tri min= " << min;
}


int main()
{

	int a[100][100];
	int m, n;
	cout << "Nhap so hang va cot tu 1->100."<<endl;
	//nhap xuat ma tran
	cout << "Nhap so hang n: ";
	cin >> n; 
	cout << "Nhap so cot m :";
	cin >> m;
	nhapMang(a, n, m);
	xuatMang(a, n, m);
	timMax(a, n, m);
	timMin(a, n, m);
	
}