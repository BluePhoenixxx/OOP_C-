#include<QuanLyCanBo.h>

void QuanLyCanBo::NhapDanhSach()
{
    CanBo* cb;
    short ch;
    do 
    {
        system("cls");
        cout << "0. Tro loi \n\n";
        cout << "1. Nhap Nhan Vien \n\n";
        cout << "2. Nhap Ky Su \n\n";
        cout << "3. Nhap Cong Nhan \n\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cb = new NhanVien();
            cb->nhap();
            break;
        case 2:
            cb = new KySu();
            cb->nhap();
            break;
        case 3:
            cb = new CongNhan();
            cb->nhap();
            break;
        default:
            cout << "Nhap sai roi! , nhap lai [0 -3] \n";
            break;
        }
    }
    while (!(ch));
}

void QuanLyCanBo::XuatDanhSach(ostream & os)
{
    for (int i ; i < dsCanBo.size(); i++)
    {
        dsCanBo[i]->xuat();
    }
}

