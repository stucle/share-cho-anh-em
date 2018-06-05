#include "GiaoVien.h"
//int CoVanHocTap::luongcoban = 1300;

CoVanHocTap::CoVanHocTap()	  {}
CoVanHocTap::CoVanHocTap(string maso, string hoten, int namsinh, float hesoluong, string tenlopcovan, int sisoSV, int xeploai)
{
     GiaoVien::GiaoVien(maso, hoten, namsinh, hesoluong);
     this->tenlopcovan = tenlopcovan;
     this->sisoSV = sisoSV;
     this->xeploai = xeploai;
}

#include <string>
void CoVanHocTap::Nhap()
{
     GiaoVien::Nhap();
     cout << "Nhap ten lop: "; cin.ignore();
     getline(cin, this->tenlopcovan);
     cout << "Nhap si so lop: ";
     cin >> this->sisoSV;
     cout << "\t(-1:Kem  0:Trung binh   1:Kha	 2:Tot)\nNhap xep loai:  " << endl;
     do cin >> this->xeploai;
	while (!(-1 <= this->xeploai && this->xeploai <= 2)); 
}

#include "package.h"

using namespace tinhtoan;
float CoVanHocTap::PhuCap()
{
     float phucap = 0;
     switch (this->xeploai)
     {
	   case 0:   
		 PhuCapCoVan(30, this->sisoSV, 40, 8 / 10);
		 break;
	   case 1:   
		 PhuCapCoVan(70, this->sisoSV, 40, 13 / 10);
		 break;
	   case 2:
		 PhuCapCoVan(100, this->sisoSV, 40, 2);
		 break;
     }
     return phucap;
}

float CoVanHocTap::TienLuong()
{
     return this->PhuCap() + GiaoVien::TienLuong();
}

string CoVanHocTap::getter(int xeploai)
{
     switch (xeploai)
     {
     case 0: 
	   return "Trung binh";
	   break;
     case 1:
	   return "Kha";
	   break;
     case 2:
	   return "Tot";
	   break;
     default:
	   return "Kem";
	   break;
     }
}

using namespace pack;
string  CoVanHocTap::toString()
{
     string result(GiaoVien::toString() + "Co van cua lop: " + this->tenlopcovan);
     result += ("\tSi so: " + integ_toString(this->sisoSV));
     result += ("\nDanh gia: " + getter(this->xeploai) + "\nTien luong: " + realnum_toString(this->TienLuong(), 6));
     return result + "\n";
}

bool operator >(CoVanHocTap a, CoVanHocTap b)
{
     if (a.TienLuong() > b.TienLuong()) return true;
     return false;
}