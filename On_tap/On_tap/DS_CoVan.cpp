#include "DS_CoVan.h"
void DS_CoVan::Nhap(int a, int b)
{     int n;
     cout << "Nhap tu "<< a <<" den "<<b<<" giao vien co van: ";
     do cin >> n;
     while (!(a <= n && n <= b));
     this->cvht.resize(n);
     for (int i = 0; i < n; i++)
     {
	   cout << "Nhap co van hoc tap thu " << 1 + i << "\n";
	   cvht[i].Nhap();
     }
}
#include <string>
void DS_CoVan::Xuat()
{
     int n = cvht.size();
     cout << "\nBang luong cua " << cvht.size() << " giao vien co van hoc tap: " << endl << endl;
     for (int i = 0; i < n; i++)
	   cout << "Giao vien thu " << 1 + i << cvht[i].toString();
}

void DS_CoVan::HoanVi(CoVanHocTap &a, CoVanHocTap &b)
{
     CoVanHocTap t = a;
     a = b;
     b = t;
}

void DS_CoVan::SapXep()
{
     int n = this->cvht.size();
     for (int i = 0; i < n - 1; i++)
	   for (int j = 0; j < n - i - 1; j++)
		 if (cvht[j] > cvht[1 + j])
		      swap(cvht[j], cvht[1 + j]);
}

bool DS_CoVan::Xoa(int vitri)
{
     if (!(cvht.size() < vitri && vitri < 1))
	   return false;
     else
     {
	   int n = cvht.size();
	   HoanVi(cvht[vitri], cvht[n]);
	   cvht.pop_back();
     }
     return true;
}

void DS_CoVan::Them(CoVanHocTap them)
{
     cvht.push_back(them);
}