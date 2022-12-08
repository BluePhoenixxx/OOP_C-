#include<CongNhan.h>

void CongNhan::nhap()
{
    CanBo::nhap();
    cin.ignore();
    cout << "Nhap bac cong nhan :" << endl;
    getline(cin, this->bac);
}

void CongNhan::xuat()
{
    CanBo::xuat();
    cout << this->bac << endl;
}

CongNhan::CongNhan()
{
    bac = " bac 1/7 ";
}

unsigned long long  CongNhan::tinhLuong()
{
    return getHeSoLuong()*(luong + luong * 0.07);
}