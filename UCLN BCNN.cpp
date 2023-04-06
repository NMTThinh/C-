#include<iostream>//thu vien
using namespace std;//dat ten
int main()
{
	int a, b;//khai bao bien
	int tich = 1;//dat tich bang 1 
	//nhap xuat a
	cout << "nhap a= ";
	cin >> a;
	//nhap xuat b
	cout << "nhap b= ";
	cin >> b;
	tich = a * b;//dat tich de van  giu duoc gia tri ban dau 
	while (a != b)
	{
		if (a > b) {//lay so lon tru so nho se duoc uoc chung lon nhat
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	cout << "UCLN = " << a << endl;//cout a or b deu duoc vi co cung gia tri
	cout << "BCNN = " << tich / a ;
	return 0;

}