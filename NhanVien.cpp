#include<NhanVien.h>

void NhanVien::nhap()
{
    CanBo::nhap();
    cin.ignore();
    getline(cin, this->congViec);
}

void NhanVien::xuat()
{
    CanBo::xuat();
    cout << this->congViec << endl;
}

NhanVien::NhanVien()
{
    congViec = "";
}

unsigned long long  NhanVien::tinhLuong()
{
    return getHeSoLuong()*(luong + luong * 0.1);
}