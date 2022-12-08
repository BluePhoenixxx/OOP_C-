#include<KySu.h>

void KySu::nhap()
{
    CanBo::nhap();
    cin.ignore();
    getline(cin, this->nganhDT);
}

void KySu::xuat()
{
    CanBo::xuat();
    cout << this->nganhDT << endl;
}

KySu::KySu()
{
    nganhDT = "";
}
unsigned long long  KySu::tinhLuong()
{
    return getHeSoLuong()*(luong + luong * 0.1);
}
