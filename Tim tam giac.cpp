#include<iostream>//thu vien
using namespace std;//dat ten
int main() {
	int a, b, c;//khai bao bien 3 canh
	cout << "Nhap vao canh a: ";//xuat a
	cin >> a;//nhap a
	cout << "Nhap vao canh b: ";//xuat b
	cin >> b;//nhap b
	cout << "Nhap vao canh c: ";//xuat c
	cin >> c;//nhap c
	float S, P;//S=dien tich,P=chu vi

	if (a <= 0 || b <= 0 || c <= 0)//dieu kien 
	{
		cout << "day khong phai tam giac.";
	}
	else if ((a == b) && (b == c))//dieu kien tam giac deu
	{
		cout << "tam giac deu."<<endl;
		P =  a+a+a ; //chu vi
		S = a * a * (sqrt(3) / 4); //dien tich
		cout << "Chu vi= " << P << "\tDien tich = " << S;//xuat ket qua
	}
	else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))//dk tam giac vuong
	{
		cout << "tam giac vuong"<<endl;
		float h; cout << "nhap chieu cao h"; cin >> h;//h la duong cao.
		P = a + b + c;//chu vi
		S = (h*a)/2 ;//dien tich, a va b la canh tao thanh goc vuong
	cout << "Chu vi= " << P << "\tDien tich = " << S;//xuat kq
	}
	else if ((a == b) || (a == c) || (b == c))//dk tam giac can
	{
		cout << "tam giac can."<<endl;
		float h; cout << "nhap chieu cao h"; cin >> h;//h la duong cao.
		P = 2 * a * c + b;//a phai = c
		S = (a * h) / 2;
		cout << "Chu vi= " << P << "\tDien tich = " << S;
	}
	else if (a < b + c && b < a + c && c < a + b) //dk tam giac thuong
	{
		cout << "tam giac thuong."<<endl;
		P = a + b + c;
		S = sqrt((P / 2) * ((P / 2) - a) * ((P / 2) - b) * ((P / 2) - c));
		cout << "Chu vi= " << P << "\tDien tich = " << S;
	}
	else cout << "3 canh khong phai tam giac."; 
	 
	return 0;
}