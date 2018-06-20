#include "giai dau.h"
void GiaiDau::Hoanvi(DoiBong &a, DoiBong &b)
{
     DoiBong t = a;
     a = b;
     b = t;
}

void GiaiDau::Nhaptt()
     {
	   cout << "Nhap ngay bat dau giai dau: ";
	   cin.ignore();
	   getline(cin, this->ngaybd);
	   cout << "Nhap ngay ket thuc giai dau: ";
	   cin.ignore();
	   getline(cin, this->ngaykt);
	   ds.resize(1);
	   char c = 'y';
	   do 	{
		 cout << "Nhap thong tin doi bong hoac bo qua: (Y/N): ";
		 cin >> c;
		 if (c == 'Y' || c == 'y')
		 {
		      cout << "Nhap ten doi bong: ";
		      string tendoi, tenHLVT;
		      unsigned int thang, thua, hoa;
		      cin.ignore();
		      getline(cin, tendoi);
		      cout << "Nhap ten huan luyen vien truong: ";
		      cin.ignore();
		      getline(cin, tenHLVT);
		      cout << "So tran thang: ";
		      cin >> thang;
		      cout << "So tran thua: ";
		      cin >> thua;
		      cout << "So tran hoa: ";
		      cin >> hoa;
		      ds.push_back(DoiBong(tendoi, tenHLVT, thang, thua, hoa));
		 }
	   } while (c!='Y' && c!='y');
     }
string GiaiDau::toString()
{
     string tt("");
     tt += ("Ngay bat dau giai dau: " + this->ngaybd + "\nNgay ket thuc: " + this->ngaykt + "\n");
     tt += ("Bang xep hang doi bong");
     for (int i = 0; i < ds.size(); i++)
     {
	   char *c = new char[4];
	   itoa(1 + i, c, 10);
	   tt += ("Doi thu: "); tt += c;
	   delete[] c; c = NULL;
	   tt += ("\n" + ds[i].toString());
     }
     return tt;
}

void GiaiDau::SapxepGiam()
{
     int n = ds.size();
     for (int i = 0; i < n; i++)
	   for (int j = 1 + i; j < n; j++)
		 if (ds[i] < ds[j])
		      Hoanvi(ds[i], ds[j]);
}