#include <iostream>//thu vien
using namespace std;//dat ten
int main()
{
    int n, a, b, c;//khai bao bien n,a,b,c
    cout << "Nhap so n = ";//ham xuat n
    cin >> n;//ham nhap n
    cout << "Cac so nguyen to : ";// ket qua xuat ra
    for (a = 2; a <= n; a++) {//dieu kien lon

        c = 0;// de check no la so nguyen to hay khong 
        for (b= 2; b <a; b++) {// dieu kien nho
            if (a % b == 0) {
                c = 1;// c=0 thi khong la so nguyen to
        }
        if (c == 0) cout << a << "  ";
    }
    return 0;
}