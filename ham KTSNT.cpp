#include <iostream>
using namespace std;

bool KTSNT(int n)//ham kiem tra true or flase
{
	if (n < 2)// so nguyen to bat dau tu 2
		return false;
	for (int i = 2; i < n; i++)             
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int n;
	cout << "Nhap so nguyen muon kiem tra: ";
	cin >> n;
	if (KTSNT(n) == true)
		cout << n << " la so nguyen to.";
	else
		cout << n << " khong phai la so nguyen to";

}
