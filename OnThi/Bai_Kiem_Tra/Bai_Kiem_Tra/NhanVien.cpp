#include "NhanVien.h"
using namespace nv;
long NhanVien::lcb = 1250;

NhanVien::NhanVien() { this->setter(); }
GiaoVien::GiaoVien()	{	this->setter(); }
void NhanVien::setter(long luongcoban)  { NhanVien::lcb = luongcoban; }
void GiaoVien::setter(long luongcoban)  {	   NhanVien::setter(luongcoban); }

NhanVien::NhanVien(string maso, string hoten, int namsinh, float hesoluo)
{
     this->setter();
     this->maso = maso;
     this->hoten = hoten;
     this->namsinh = namsinh;
     this->hesoluong = hesoluo;
}
GiaoVien::GiaoVien(string masogv, string hotengv, int namsinh, float hesoluo, int sogioday, int giodinhmuc)
{
     this->setter();
     NhanVien::NhanVien(masogv, hotengv, namsinh, hesoluo);
     this->sogio = sogioday;
     this->giodm = giodinhmuc;
 }

double NhanVien::TinhLuong()
{
     return this->lcb * this->hesoluong;
}

#include "Header.h"

string NhanVien::toString()
{
     string tt("\tMa so nhan vien: " + this->maso + "\nHo va ten nhan vien: " + this->hoten);
     tt += ("\nSinh nam " + pack::integ_toString(this->namsinh)) ;
     return tt;
}

int GiaoVien::getter()
{
     return this->namsinh;
}

double GiaoVien::TinhLuong()
{
     return tinhtoan::TinhLuong(this->sogio, this->giodm, NhanVien::TinhLuong());
}

string GiaoVien::toString()
{
     string ttgv("\tMa so giao vien: " + this->maso + "\nHo va ten giao vien: " + this->hoten);
     ttgv += ("\nSinh nam: " + pack::integ_toString(this->namsinh) + "\nHe so luong: " + pack::realnum_toString(this->hesoluong, 4));
     ttgv += ("\nSo gio giang day: " + pack::integ_toString(this->sogio) + "\tDinh muc: " + pack::integ_toString(this->giodm));
     ttgv += ("\nTien luong: " + pack::realnum_toString(this->TinhLuong(), 7));
     return ttgv + "\n";
}

bool nv::operator>(GiaoVien gv1, GiaoVien gv2)
{
     if (gv1.TinhLuong() > gv2.TinhLuong())
	   return true;
     return false;
}

void nv::Swap(GiaoVien &a, GiaoVien &b)
{
     GiaoVien t = a;
     a = b;
     b = t;
}