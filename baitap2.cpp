#include<iostream>
using namespace std;
 
int main()
{
	int n, a, b, c;//khai bao vien n,a=donvi,b=chuc,c=tram
	cout << "nhap so nguyen duong<1000: ";
	cin >> n;
	cout << "So " << n << "\tDoi sang so la ma la: " ;
	a = n / 100;
	b = n % 100;
	c = n % 10;
	
	switch (c)
	{
	case 1:cout << "C";
		break;
	case 2:cout << "CC";
		break;
	case 3:cout << "CCC";
		break;
	case 4:cout << "CD";
		break;
	case 5:cout << "D";
		break;
	case 6:cout << "DC";
		break;
	case 7:cout << "DCC";
		break;
	case 8:cout << "DCCC";
		break;
	case 9:cout << "CM";
	}
	switch (b)
	{
	case 1:cout << "X";
		break;
	case 2:cout << "XX";
		break;
	case 3:cout << "XXX";
		break;
	case 4:cout << "XL";
		break;
	case 5:cout << "L";
		break;
	case 6:cout << "LX";
		break;
	case 7:cout << "LXX";
		break;
	case 8:cout << "LXXX";
		break;
	case 9:cout << "XC";
	}

	switch (c)
	{
	case 1:cout << "I";
		break;
	case 2:cout << "II";
		break;
	case 3:cout << "III";
		break;
	case 4:cout << "IV";
		break;
	case 5:cout << "V";
		break;
	case 6:cout << "VI";
		break;
	case 7:cout << "VII";
		break;
	case 8:cout << "VIII";
		break;
	case 9:cout << "IX";
	}
}