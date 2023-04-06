#include<iostream>
using namespace std;

int nhapso(int c) {
	int c;
	cout << "Nhap so: ";
	cin >> c;
	return c;
}
void xuatso(int s)
{
	cout << "so la: " << s;
}
int tong(int a, int b) {
	int tong;
	tong = a + b;
	return tong;
}
int tru(int a, int b) {
	int tru;
	tru = a - b;
	return tru;
}
int nhan(int a, int b) {
	int nhan;
	nhan = a * b;
	return nhan;
}
float chia(int a, int b) {
	float chia;
	chia = a / b;
	return chia;
}
int main()
{
	int a, b;
	a= nhapso(a);
	b= nhapso(b);
	xuatso(a);
	xuatso(b);
	int c = tong(a, b);
	int t = tru(a, b);
	int n = nhan(a, b);
	float ch = chia(a, b);
	return 0;
 }

	

