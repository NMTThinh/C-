#include<iostream>
using namespace std;

void nhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho mang ["<<i<<"]: ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"\t";
	}
}
void Xoa(int a[], int &n, int x) {// x la vi tri can xoa

	for (int i = x; i < n; i++) {
		 a[i]=a[i + 1] ;//khong hieu
	}
	n--;//xoa bot di 1 phan tu
}
// Xoa cac phan tu trung nhau
void Xoa_Trung(int a[], int &n) {
	for (int i = 0; i < n; i++) {//cho i chay tu gia tri dau tien 
		for (int j = i + 1; j < n; j++) { //i se so sanh voi cac gia tri phia sau
			if (a[i] == a[j]) {
				Xoa(a, n, j);
				j--;//vidu: 1 1 1 2 3 i=0, j=1 >> 1 1 2 3 
			}       //                neu j++ :  se lay vi tri [0] so sanh voi [2]  bo qua [1]
		}			//		  	  neu j--:   se lay vi tri [0] so sanh xem con so nao trung khong	
	}				//					 i=0, j=1	>> 1 2 3
}
int main()
{
	int a[100];
	int n;
	cout << "Nhap so phan tu cho mang: ";
	cin >> n;
	nhapMang(a, n);
	xuatMang(a, n);
	cout << endl;
	// Xoa cac phan tu trung nhau
	cout << "Mang sau khi xoa la: ";
	Xoa_Trung(a, n);
	xuatMang(a, n);
	
}