#include<iostream>// khai báo thử viện
using namespace std;// đặt tên
int main()
{
    float a, b;//khai bao 2 bien a va b
    cout << "nhap gia tri a= " << endl;//lenh xuat a
    cin >> a;// lenh nhap a
    cout << "nhap gia tri b= " << endl;// lenh xuat b
    cin >> b;//lenh nhap b
    if (a == 0) {//dat dieu kien
        if (b == 0)
            cout << "phuong trinh co vo so nghiem." << endl;//neu if đúng
        else
            cout << "Phuong trinh nay vo nghiem." << endl;// neu a hoac b co 1 bien khac 0
    }
    else
        cout << "phuong trinh co nghiem x= " << -b / a << endl;//neu 2 điều kiện trên sai
    return 0;
}
    /*if
    else 
    else if
    && (and) cả 2 cùng thỏa điều kiện
    !! (or) chỉ cần 1 trong 2 thỏa đk
     ! (not) 
     /*