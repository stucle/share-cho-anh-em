#include "GiaoVien.h"
int GiaoVien::luongcoban = 1300;

GiaoVien::GiaoVien()	    { }
GiaoVien::GiaoVien(string maso, string hoten, int namsinh, float hesoluong)
{
     this->maso = maso;
     this->hoten = hoten;
     this->namsinh = namsinh;
     this->hesoluong = hesoluong;
}
void GiaoVien::setter(int luongcoban)
{
     this->luongcoban = luongcoban;
}
#include <string>
void GiaoVien::Nhap()
{
     cout << "Nhap ma so: "; cin.ignore();
     getline(cin, this->maso);
     cout << "Nhap ho va ten: "; cin.ignore();
     getline(cin, this->hoten);
     cout << "Nhap nam sinh: ";
     cin >> this->namsinh;
     cout << "Nhap he so luong: ";
     cin >> this->hesoluong;
}

float GiaoVien::TienLuong()
{
     return this->luongcoban * this->hesoluong;
}
#include "package.h"
string GiaoVien::toString()
{
     string result("\tMa so: " + this->maso + "\nHo va ten: " + this->hoten);
     result += ("\nNam sinh: " + pack::integ_toString(this->namsinh));
     result += ("\nHe so luong: " + pack::realnum_toString(this->hesoluong));
     return result + "\n";
}