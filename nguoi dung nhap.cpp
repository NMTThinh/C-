#include<iostream>//thu vien
using namespace std;//dat ten
int main()
{
	int a;//dat ten bien a
	
	do {
		cout << "Nhap so bat ki tu 1 -> 10: ";// xuat dong nhap
		cin >> a;// nhap a
		
		if (a > 10) {//dieu kien sai
			cout << "so ban vua nhap da sai moi nhap lai so tu 1->10" << endl;//nhap lai de thoa dieu kien
		}
		else//dk dung
		{
			cout << "so ban vua nhap la: " << a << endl;//xuat so vua nhap
		}
		
	} while (a > 10); //dieu kien vong lap
		
	
	return 0;

}