#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[100];
	do {
		cout << "nhap so  phan tu n: ";
		cin >> n;
	}
	while (n < 1 || n>100);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap gia tri cho mang 1->100: ";
		cin >> a[i];
	}
	cout << "Mang vua nhap la: ";
	for (int i = 0; i < n; i++) {
		cout << a[i]<< "\t";
	}
	cout << endl;
	cout << "Gia tri cua mang dao nguoc la: ";
	for (int i = n - 1; i >= 0; i--) {//i sẽ xuất phát từ phần tử lớn thứ 2->(n-1) và đk lặp >=0(lớn hơn hoặc bằng phần tử cuối), mỗi lần lặp sẽ giảm đi (i--) 1 đơn vị
		cout << a[i]<<"\t";
	}
}
