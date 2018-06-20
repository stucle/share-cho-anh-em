#include "Phone.h"
using namespace phone;
phone::Phone::Phone()    {}
phone::SmartPhone::SmartPhone()	{}

Phone::Phone(string maso, string nhanhieu, float dongia, int namsx)
{
     this->maso = maso;
     this->nhanhieu = nhanhieu;
     this->dongia = dongia;
     this->namsanxuat = namsx;
}

SmartPhone::SmartPhone(string maso, string nhanhieu, float dongia, int namsx, float manhinh, float camera, int bonho)
{
     Phone::Phone(maso, nhanhieu, dongia, namsx);
     this->manhinh = manhinh;
     this->camera = camera;
     this->bonho = bonho;
}

#include "Header.h"
using namespace pack;
string Phone::toString()
{
     string tt("\tMa so: " + this->maso + "\nHang dien thoai: " + this->nhanhieu);
     tt += ("\nNam san xuat: "+ integ_toString(this->namsanxuat));
     return tt;
}


double SmartPhone::TinhGiaBan()
{
     return tinhtoan::TinhGiaBan(this->bonho, this->dongia);
}

string SmartPhone::toString()
{
     string tt(Phone::toString() + "\nMan hinh " + realnum_toString(this->manhinh, 4) + " inch");
     tt += ("\nDo phan giai camera: " + realnum_toString(this->camera, 4) + " PX");
     tt += ("\nBo nho dien thoai: " + integ_toString(this->bonho));
     tt += ("\nGia ban: " + realnum_toString((long)this->TinhGiaBan(), 7));
     return tt;
}

 bool phone::operator <(SmartPhone a, SmartPhone b)
{
      if (a.nhanhieu < b.nhanhieu) return true;
      return false;
 }

 void SmartPhone::Swap(SmartPhone &a, SmartPhone &b)
 {
      SmartPhone t = a;
      a = b;
      b = t;
}