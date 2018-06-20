
#include <vector>
#include <string>
#include <iostream>
using namespace std;
void Nhap_n(int a, int &n, int b);
class MatHang
{
protected:
     string maso, tenhang;
     int soluong;
     float dongia;
public:
     MatHang();
     void setter(string maso, string tenhang, int soluong, float dongia);
     void nhapThongtin();
     string toString();
     double DoanhThu();
};
//
class HangNhapkhau : public MatHang
{
protected:
     float thuenhapkhau;
     string ngaynhapkhau;
public:
     HangNhapkhau();
     void setter(string maso, string tenhang, int soluong, float dongia, float thuenhapkhau, string ngaynhapkhau);
     void nhapThongtin();
     string toString();
     double DoanhThu(); // + thue nhap khau
};
//
class HangXuatkhau : public MatHang
{
protected:
     float thuexuatkhau;
     string nuocxuatkhau;
public:
     HangXuatkhau();
     void nhapThongtin();
     string toString();
     double DoanhThu(); // + thue xuat khau
};


class DS_Hang
{
public: 

protected:
     vector <MatHang*> element;
public:
     static MatHang* chonMH(char chon);
     void nhapDS(int a, int b);
     void hienDS();
     int findMax();
};
