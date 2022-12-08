#include<bits/stdc++.h>
#include<string>
using namespace std;
long long luong = 3500000;

class CanBo
{
protected:
    string hoTen, namSinh, gioiTinh, diaChi;
    float heSoLuong;
public:
    CanBo();
    virtual void nhap();
    virtual void xuat();
    virtual unsigned long long tinhLuong() = 0;
    float getHeSoLuong();
};

