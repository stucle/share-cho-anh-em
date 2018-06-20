#include "DS_nv.h"
#include <string>
void DS_GV::Nhap_DS(int a, int b)
{
     nv::GiaoVien::setter(1250);
     cout << "Nhap so luong smartphone: ";
     do cin >> this->soluong;
     while (!(a <= this->soluong <= 30));
     gv.resize(0);
     int n = 1; int namsinh;
     string maso, hoten;
     float hesoluong;
     int sogio, giodm;
     while (!(n > this->soluong))
     {
	   cout << "Nhap giao vien <" << n++ << "> \nMa so giao vien: ";
	   cin.ignore();
	   getline(cin, maso);
	   cout << "Ho va ten giao vien: ";
	   cin.ignore();
	   getline(cin, hoten);
	   cout << "Nam sinh: ";
	   cin >> namsinh;
	   cout << "He so luong:";
	   cin >> hesoluong;
	   cout << "So gio da giang day: ";
	   cin >> sogio;
	   cout << "Gio dinh muc: ";
	   cin >> giodm;
	   gv.push_back(GiaoVien(maso, hoten, namsinh, hesoluong, sogio, giodm));
     }
     cout << "Muc luong co ban cua nha nuoc: ";
     cin >> n;
     gv[1].setter(n);
}

void DS_GV::SapXep()
{
     int n = gv.size();
     for (int i = 0; i < n; i++)
	   for (int j = 0; j < n; j++)
		 if (gv[j] > gv[1 + j])
		      Swap(gv[j], gv[1 + j]);
}

void DS_GV::BangLuong()
{
     vector<GiaoVien>::iterator i, n = gv.end();
     for (i = gv.begin(); i != n; i++)
	   cout << i->toString()<<endl;
}

void DS_GV::NghiHuu(int namnay)
{
     vector<GiaoVien>::iterator i, n = gv.end();
     for (i = gv.begin(); i != n; i++)
	   if ((namnay - i->getter()) >= 60)
		 cout << i->toString() << endl;
}