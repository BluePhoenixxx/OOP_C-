#include<CanBo.h>
#include<KySu.h>
#include<NhanVien.h>
#include<CongNhan.h>
#include<vector>

class QuanLyCanBo : public CanBo , public NhanVien , public CongNhan
{
private:
    vector<CanBo*> dsCanBo;
public:
    QuanLyCanBo();
    void NhapDanhSach();
    void XuatDanhSach(ostream& os);
    unsigned long long tinhLuong();

};

