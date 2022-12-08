#include<bits/stdc++.h>
#include<string>
#include<CanBo.h>
using namespace std;

class CongNhan : public CanBo
{
private:
    string bac;
public:
    CongNhan();
    void nhap();
    void xuat();
    unsigned long long tinhLuong();
};