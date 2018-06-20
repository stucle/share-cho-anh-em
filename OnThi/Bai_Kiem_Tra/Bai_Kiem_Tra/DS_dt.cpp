#include "DS_dt.h"
#include <string>

void DS_Phone::Nhap_DS(int a, int b)
{
     cout << "Nhap so luong smartphone: ";
     do cin >> this->soluong;
     while (!(a <= this->soluong <= 30));
     this->list.resize(0);
     int n = 1;
     string maso, nhanhieu;
     float dongia; int namsanxuat;
     float manhinh, camera; int bonho;
     while (n<=this->soluong)
     {
	   cout << "Smartphone  <" << n++ << "> : ";
	   cout << "Ma so dien thoai: ";
	   cin.ignore();
	   getline(cin, maso);
	   cout << "Nhan hieu: ";
	   cin.ignore();
	   getline(cin, nhanhieu);
	   cout << "Don gia: ";
	   cin >> dongia;
	   cout << "San xuat nam: ";
	   cin >> namsanxuat;
	   cout << "Kich thuoc man hinh: ";
	   cin >> manhinh;
	   cout << "Do phan giai camera: ";
	   cin >> camera;
	   cout << "Dung luong bo nho: ";
	   cin >> bonho;
	   list.push_back(SmartPhone(maso, nhanhieu, dongia, namsanxuat, manhinh, camera, bonho));
     }
}

void DS_Phone::SapXep_DS()
{
     int n = list.size();
     for (int i = 0; i < n; i++)
	   for (int j = 0; j < n; j++)
		 if (list[1 + j] < list[j])
		      SmartPhone::Swap(list[1 + j], list[j]);
}

bool DS_Phone::Xoa_(int i)
{
     if (i <= list.size())     {
	   list.erase(list.begin() + i);
	   soluong--;
	   return true;
     }
     return false;
}

void DS_Phone::In_DS()
{
     int n= list.size();
     for (int i = 0; i < n; i++)
     {
	   cout << "\nSmartphone thu" << 1 + i;
	   cout << list[i].toString();
     }
}