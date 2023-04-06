#include<iostream>//thu vien
using namespace std;//dat ten

int main()
{
	int  n, a, b, c;//khai bao bien n, a=donvi,b=chuc,c=tram
	cout << "Nhap so nguyen <1000: ";//ham xuat
	cin >> n;//nhap n
	cout << "So " << n << "\tdoi sang so la ma la: ";//ket qua
	a = n % 10;//chia lay phan du cua 100 lay hang chuc
	b = (n / 10)%10 ;//chia lay phan nguyen cua 10 lay hang chuc
	c = n % 100;//chia lay phan du cua 10 lay hang don vi
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
		break;
	}
	switch (a)
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
		break;
	}

}