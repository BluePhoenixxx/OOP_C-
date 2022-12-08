#include<bits/stdc++.h>
#include<string>
#include<CanBo.h>
using namespace std;

class NhanVien : public CanBo
{
private:
    string congViec;
public:
    NhanVien();
    void nhap();
    void xuat();
    unsigned long long tinhLuong();
};

