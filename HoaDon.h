#include<string>
#include"HangHoa.h"
using namespace std;
class HoaDon
{
    private:
        int IdHoadon;
        int IdNhanvien;
        int IdNhacungcap;
        int IdLoaihanghoa;
        string Trangthai;
        int Soluong;
        double Thanhtien;
        string Ngaynhap;
        string Ngayxuat;
    public:
        HoaDon(int,int,int,int,string = "",int,double,string = "",string = "");
        ~HoaDon();
        void TinhTien();
        int getMucgia();
        int getSoluong();
        void setSoluong();
        void setThanhtien();
};

