#include "cau thu.h"
#include "num2string\package.h"
CauThu::CauThu() {}
CauThu::~CauThu() {}
CauThu::CauThu(int soao, string tencauthu, int vitri, int sobanthang)
{
     this->soao = soao;
     this->tencauthu = tencauthu;
     this->vitri = vitri;
     this->sobanthang = sobanthang;
}
int CauThu::get_vitri()  {	  return this->vitri;	 }
 string Vitri(int vt)
 {
      switch (vt)
      {
      case 1: {
		 return "Tien dao";
		 break;
	   }
      case 2:	 {
		 return "Tien ve";
		 break;
	   }
      case 3: {
		  return "Trung ve";
		  break;
	    }
      case 0: {
		  return "Thu mon";
		  break;
	   }
      default:	{
		 return "Hau ve";
		 break;
	    }
      }
 }
string CauThu::toString()
{
     string cauthu("\tSo ");
     cauthu += pack::num_toString(this->soao);
     cauthu += ("\nTen cau thu: " + this->tencauthu + "\nChoi o vi tri: " + Vitri(this->vitri));
     cauthu += ("\nSo ban thang: " + pack::num_toString(this->sobanthang) + "\n");
     return cauthu;
}

 bool operator <(CauThu c1, CauThu c2)
{
      if (c1.sobanthang < c2.sobanthang)
	    return true;
      return false;
}

 CauThu CauThu::nhapcauthu()
 {
      cout << "Nhap so ao cau thu: ";
      int ao; cin >> ao;
      cout << "Ten cau thu: ";
      string ten;  cin.ignore();
      getline(cin, ten);
      cout << "Choi o vi tri (1: td / 2: tv / 3: tr / 4: hv / 0: tm) : ";
      int vt; cin >> vt;
      cout << "So ban thang ghi dc: ";
      int soban; cin >> soban;
      return CauThu(ao, ten, vt, soban);
 }

 void CauThu::Swap(CauThu &a, CauThu &b)
 {
      CauThu t = a;
      a = b;
      b = t;
 }