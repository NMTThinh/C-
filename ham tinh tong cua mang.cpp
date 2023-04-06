#include <iostream>
using namespace std;

void nhap(int a[],int n)
{
    for (int i = 0; i < n; i++)//vong lap for duyet so tu 0 -> n-1
    {
        //nhap du lieu vao mang
        cout << "Nhap gia tri vao mang: ";
        cin >> a[i] ;
    }
}
void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)//vong lap for duyet so tu 0 -> n-1
    {
        //xuat cac so trong mang
        cout << "\t" << a[i];
    }
}
void sum(int a[], int n)//ham tinh tong các phan tu trong mang
{
    int tong = 0; 
    for (int i = 0; i < n; i++)
    {
        tong += a[i];// tinh tong cua cac phan tu trong mang
    }
    cout << "Tong cac phan tu trong mang la: " << tong << endl ;
}
int main()
{
    int a[100];// khai bao mang so nguyen co toi da 100 so
    int n;//khai bao so nguyen n la so phan tu cua mang
    //Nhap du lieu cua n
    do {
        
        cout << "Nhap so phan tu trong mang: ";
        cin >> n;
        if (n < 1 || n>100)
        {
            cout << "So qua lon xin moi nhap lai.";
        }
    } while (n < 1 || n>100);//dieu kien neu n<1 hoac n>100 yeu cau nhap lai
    nhap(a, n);//goi ham nhap mang
    cout << "Cac phan tu trong mang la: ";
    xuat(a, n);// goi ham xuat mang
    cout << "\t";
    sum(a, n);//goi ham tinh tong
}