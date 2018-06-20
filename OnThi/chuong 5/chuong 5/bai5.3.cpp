#include "bai 5.3.h"
void Nhap_n(int a, int &n, int b)
{
     do cin >> n;
     while (a <= n <= b);
}
MatHang::MatHang()  {}
void MatHang::setter(string maso, string tenhang, int soluong, float dongia)
{
     this->maso = maso;
     this->tenhang = tenhang;
     this->soluong = soluong;
     this->dongia = dongia;
}
void MatHang::nhapThongtin()
{
     string maso, tenhang; int soluong; double dongia;
     cout << "Nhap ma mat hang: ";
     cin.ignore();
     getline(cin, maso);
     cin.ignore();
     cout << "Nhap ten mat hang: ";
     cin.ignore();
     getline(cin, tenhang);
     cin.ignore();
     cout << "So luong: ";
     cin >> soluong;
     cout << "Don gia: ";
     cin >> dongia;
     this->setter(maso, tenhang, soluong, dongia);
}

#include "package/package.h"
using namespace pack;

string MatHang::toString()
{
     string string("");
     string += ("\tMa mat hang: " + this->maso + "\nTen mat hang: " + this->tenhang);
     string += ( "\nSo luong: " + integ_toString(this->soluong));
     string += ("\tx\tDon gia goc: " + realnum_toString(this->dongia) );
     return string;
}
double MatHang::DoanhThu()
{
     return this->dongia * this->soluong;
}
//
HangNhapkhau::HangNhapkhau()
{
     MatHang::MatHang();
}
void HangNhapkhau::setter(string maso, string tenhang, int soluong, float dongia, float thuenhapkhau, string ngaynhapkhau)
{
     MatHang::setter(maso, tenhang, soluong, dongia);
     this->thuenhapkhau = thuenhapkhau;
     this->ngaynhapkhau = ngaynhapkhau;
}
void HangNhapkhau::nhapThongtin()
{
     MatHang::nhapThongtin();
     cout << "Thue nhap khau: ";
     cin >> this->thuenhapkhau;
     cout << "Nhap ngay: ";
     cin.ignore();
     getline(cin, this->ngaynhapkhau);
     cin.ignore();
}
double HangNhapkhau::DoanhThu()
{
     return MatHang::DoanhThu() * (1 + this->thuenhapkhau / 100);
}
string HangNhapkhau::toString()
{
     string string = MatHang::toString();
     string += ("\nThue nhap khau: " + realnum_toString(this->thuenhapkhau, 4) );
     string += ("%%\nDoanh thu cua " + this->tenhang + " :\t" + realnum_toString(this->DoanhThu(), 7));
     string += ("\nNgay nhap: " + this->ngaynhapkhau);
     return string;
}
//
HangXuatkhau::HangXuatkhau()
{
     MatHang::MatHang();
}
void HangXuatkhau::nhapThongtin()
{
     MatHang::nhapThongtin();
     cout << "Thue xuat khau: ";
     cin >> this->thuexuatkhau;
     cout << "Nuoc: ";
     cin.ignore();
     getline(cin, this->nuocxuatkhau);
     cin.ignore();
}
double HangXuatkhau::DoanhThu()
{
     return MatHang::DoanhThu() * (1 - this->thuexuatkhau / 100);
}
string HangXuatkhau::toString()
{
     string string = MatHang::toString();
     string += ("\nThue xuat khau: " + realnum_toString(this->thuexuatkhau) );
     string += ("%%\nDoanh thu cua " + this->tenhang + " :\t" + realnum_toString(this->DoanhThu(), 7));
     string += ("\nQuoc gia mua hang: " + this->nuocxuatkhau);
     return string;
}
//
