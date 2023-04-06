#include<iostream>//thu vien
using namespace std;// dat ten

int main()
{
	float a, b, c, x1, x2, n;//khai bao n khi delta =0
	float delta = b * b - 4 * a * c;// gan phep toan

	cout << "nhap a= " << endl;//xuat a
	cin >> a;// nhap a
	cout << "nhap b= " << endl;//xuat a
	cin >> b;//nhap b
	cout << "nhap c= " << endl;//xuat c
	cin >> c;//nhap c

	if (delta < 0)//dieu kien khi delta < 0
	{
		cout << "Phuong Trinh Vo Nghiem." << endl;
	}
	else if (delta = 0)//dieu kien khi delta = 0
	{
		n = x1 = x2 = -b / (2 * a);//khi delta = 0
		cout << "Phuong Trinh Co Nghiem Kep: x1=x2= " << n << endl;
	}
	else if (delta > 0)//dieu kien khi delta > 0
	{
		cout << "Phuong Trinh Co Hai Nghiem Phan Biet:" << endl;
		cout << "x1= " << (-b + sqrt(delta)) / (2 * a) << endl;
		cout << "x2= " << (-b - sqrt(delta)) / (2 * a) << endl;
	}

	return 0;
}
