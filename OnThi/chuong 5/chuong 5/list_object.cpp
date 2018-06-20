#include "bai 5.3.h"

MatHang* DS_Hang::chonMH(char chon)
{
     switch (chon)
     {
	   case 'n':
	   case 'N':
		 return new HangNhapkhau();
		 break;
	   case 'x':
	   case 'X':
		 return new HangXuatkhau();
		 break;
     default:
	   return new MatHang();
	   break;
     }
}

void DS_Hang::nhapDS(int a, int b)
{
     int n; cout << "Nhap so luong (tu " << a << " den " << b << ") mat hang: ";
     do cin >> n;
     while (!(a <= n && n <= b));
     this->element.resize(n);
     cout << endl << "\tHang nhap khau: N\tHang xuat khau: X" << endl << "Nhap lan luot " << n << " mat hang:" << endl;
     for (int i = 0; i < n; i++)
     {
	   cout << "Chon loai mat hang: ";
	   char chon;
	   cin.ignore();
	   cin >> chon;
	   MatHang *mh = chonMH(chon);
	   mh->nhapThongtin();
	   this->element[i] = mh;
     }
}

void DS_Hang::hienDS()
{
     vector<MatHang*>::iterator p; int i = 1;
     for(p = element.begin(); p!=element.end(); p++)
     {
	   cout << endl << "Mat hang thu " << i++ << endl << (*p)->toString();
     }
}

int DS_Hang::findMax()
{
     int n = this->element.size();
     double max = this->element.at(0)->DoanhThu();
     int vitri = 0;
     for(int i=1; i<n; i++)
	   if (this->element.at(i)->DoanhThu() > max)
	   {
		 max = this->element.at(i)->DoanhThu();
		 vitri = i;
	   }
     return vitri;
}