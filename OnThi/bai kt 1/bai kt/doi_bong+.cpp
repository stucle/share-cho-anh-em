#include "doi_bong+.h"
Doi_Bong::Doi_Bong() {}
Doi_Bong::~Doi_Bong()    {}
Doi_Bong::Doi_Bong(string tendoi, string tenHLVT, unsigned int thang, unsigned int thua, unsigned int hoa)
{
     DoiBong(tendoi, tenHLVT, thang, thua, hoa);
}
void Doi_Bong::Nhap_DScauthu()
{
     cout << "Nhap so luong cau thu cua doi bong: ";
     do cin >> this->soluong;
     while (this->soluong > 29);
     for (int i = 1; i <= this->soluong; i++)
     {
	   ds[i] = CauThu::nhapcauthu();
     }
}
string Doi_Bong::toString()
{
     string ttdb("\tThong tin doi bong\n" + DoiBong::toString() + "\nThong tin cac cau thu: \n");
     for (int i = 1; i <= this->soluong; i++)
     {
	   ttdb += ("\n" + ds[i].toString() );
     }
}

void Doi_Bong::BubbleSort(CauThu ds[], int n)
{
     int i, j;
     for (i = 1; i <= n; i++)
	   for (j = 1; j <= n - i; j++)
		 if (ds[j] < ds[1+j])
		      CauThu::Swap(ds[j], ds[1 + j]);
}

void Doi_Bong::SapxepDS()	  {	this->BubbleSort(this->ds, this->soluong); }

string Doi_Bong::CacTiendao()
{
     string td;
     for (int i = 1; i <= this->soluong; i++)
     {
	   if(ds[i].get_vitri() == 1)
		 td+=(ds[i].toString() + "\n")
     }
}