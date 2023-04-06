#include<iostream>
using namespace std;

void nhapPT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho [" << i << "] la: ";
		cin >> a[i];
	}
}
void xuatPT(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout <<" " << a[i];
}
void daoNguoc(int a[], int n)
{
	for (int i=n-1; i >=0; i--)//i đi từ vị trí cuối và lùi về sau 1 giá trị cho đến vị trí đầu tiên i=0.(mang co 5 so nhung co 4 gia tri)
	{
		cout << a[i]<<"\t";
	}
}
int main()
{
	int a[100];
	int n;
	//nhap va xuat mang.
	cout << "Nhap so phan tu n tu 1->100: ";
	cin >> n;
	nhapPT(a, n);
	cout << "Mang vua nhap la:";
	xuatPT(a, n);
	cout << endl;
	//chuoi dao nguoc
	cout << "Chuoi dao nguoc la: ";
	daoNguoc(a, n);

}