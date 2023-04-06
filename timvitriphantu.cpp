#include<iostream>
using namespace std;
 
void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho [" << i+1 << "]: ";
		cin >> a[i];
	}
}
void xuatMang(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"\t";
	}
}
void timKiem(int a[], int n)
{
	int x;
	cout << "Nhap gia tri can tim vi tri: ";
	cin >> x;
	for(int i=0;i<n;i++)
	{
		if (a[i] == x)
		{
			cout << "phan tu trong mang nam o vi tri [" << i+1 << "] " << endl;
		}
		/*else
			cout << "khong tim thay phan tu trong mang."<<endl;*/
	}

}
int main()
{
	int a[100];
	int n;
	do {
		cout << "Nhap so phan tu mang: ";
		cin >> n;
		if (n < 1 || n>100)
		{
			printf("Nhap lai:");
		}
	} while (n < 1 || n>100);
	nhapMang(a, n);
	xuatMang(a, n);
	cout << endl;
	timKiem(a, n);
}