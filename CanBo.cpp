#include<CanBo.h>
#include<bits/stdc++.h>
using namespace std;

void CanBo::nhap()
{
    cin.ignore();
    cout << "Nhap ho ten : " << endl;
    getline(cin, this->hoTen);
    cout << "Nhap nam sinh: " << endl;
    getline(cin, this->namSinh);
    cout << "Nhap gioi tinh: "<< endl;
    getline(cin, this->gioiTinh);
    cout << "Nhap dia chi: " << endl;
    getline(cin, this->diaChi);
    cout << "Nhap he so luong: " << endl;
    cin >> this->heSoLuong;
}

void CanBo::xuat()
{
    cout << this->hoTen << " " << this->namSinh << " " << this->gioiTinh << " " << this->diaChi  <<  " " << this->heSoLuong << " ";
}

CanBo::CanBo()
{
    hoTen = "NoName";
    namSinh = "";
    gioiTinh = "";
    diaChi = "";
    heSoLuong = 0;
}

float CanBo::getHeSoLuong()
{
    return this->heSoLuong;
}
