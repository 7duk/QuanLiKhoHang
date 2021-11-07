#include"HoaDon.h"
#include<iostream>
using namespace std;
HoaDon::HoaDon()
{   
    this->IdHoadon;
    this->IdLoaihanghoa;
    this->IdNhacungcap;
    this->IdNhanvien;
    this->Trangthai;
    this->Thanhtien;
    this->Soluong;
    this->Ngaynhap;
    this->Ngayxuat;
}
HoaDon::~HoaDon()
{

}
int HoaDon::getSoluong(){
    return this->Soluong;
}
void HoaDon::setSoluong()
{
    this->Soluong=Soluong;
}

