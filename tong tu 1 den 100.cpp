#include<iostream>//thu vien
using namespace std;//dat ten
int main()
{
	int a=0;//gan bien a
	int tong = 0;//gan phep tong
	while (a < 100)//dieu kien de thuc hien vong lap
	{
		a++;//tang 1 gia tri
		cout << a << endl;//xuat a
		tong = tong + a;//phep tong

	}
	cout << tong << endl;//xuat gia tri tong
	return 0;
}