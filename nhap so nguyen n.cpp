#include<iostream>	// Khai báo thư viện
using namespace std; //đặt tên 
int main()
{
	int n;	//khai báo biến n
	cout << "Nhap so nguyen n: " << endl; // xuất n
	cin >> n; //nhập n
	int a = n % 10;//hang don vi la a
	int b = n / 10;//hang chuc la b

	if (n<1 || n>100) // điều kiện sai
	{
		cout << "so vua nhap khong hop le. " << endl;
	}

	else // điều kiện đúng
	{
		if (b == 2) // số hàng chục
		{
			cout << "Hai Muoi" << endl;
		}
		else if (b == 3)
		{
			cout << "Ba Muoi" << endl;
		}
		else if (b == 4)
		{
			cout << "Bon Muoi" << endl;
		}
		else if (b == 5)
		{
			cout << "Nam Muoi" << endl;
		}
		else if (b == 6)
		{
			cout << "Sau Muoi" << endl;
		}
		else if (b == 7)
		{
			cout << "Bay Muoi" << endl;
		}
		else if (b == 8)
		{
			cout << "Tam Muoi" << endl;
		}
		else if (b == 9)
		{
			cout << "Chin Muoi" << endl;
		}
		else if (b == 1)
		{
			cout << "Muoi"<< endl;
		}
		if (a == 1) // số hàng đơn vị
		{
			cout << "Mot" << endl;
		}
		else if	(a == 2)
		{
			cout << "Hai" << endl;
		}
		else if (a == 3)
		{
			cout << "Ba" << endl;
		}
		else if (a == 4)
		{
			cout << "Bon" << endl;
		}
		else if (a == 5)
		{
			cout << "Nam" << endl;
		}
		else if (a == 6)
		{
			cout << "Sau" << endl;
		}
		else if (a == 7)
		{
			cout << "Bay" << endl;
		}
		else if (a == 8)
		{
			cout << "Tam" << endl;
		}
		else if (a == 9)
		{
			cout << "Chin" << endl;
		}
		
		
	}

	return 0;
}