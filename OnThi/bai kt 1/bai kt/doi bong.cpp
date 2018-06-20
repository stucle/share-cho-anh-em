#include "doi bong.h"
DoiBong::DoiBong()  {}
DoiBong::DoiBong(string tendoi, string tenHLVT, unsigned int thang, unsigned int thua, unsigned int hoa)
{
     this->tendoi = tendoi;
     this->tenHLVT = tenHLVT;
     this->thang = thang;
     this->thua = thua;
     this->hoa = hoa;
}
int DoiBong::TinhDiem()
{
     return 3 * thang + hoa;
}
bool operator <(DoiBong a, DoiBong b)
{
     if (a.TinhDiem() < b.TinhDiem()) return true;
     return false;
}
string DoiBong::toString()
{
     string tt("");
     tt += ("Ten doi bong: " + this->tendoi + "\nTen huan luyen vien truong: " + this->tenHLVT + "\n");
     char *temp = new char[5];
     itoa(thang, temp, 10);
     tt += "So tran thang: ";  tt += temp;
     delete[] temp; temp = NULL;
     tt += "\tSo tran thua: ";
     itoa(thua, temp, 10);
     tt += temp;
     delete[] temp; temp = NULL;
     tt += "\tSo tran hoa: ";
     itoa(hoa, temp, 10);
     tt += temp;
     delete[] temp; temp = NULL;
     tt += "\nDiem so: ";
     itoa(TinhDiem(), temp, 10);
     tt += temp;
     delete[] temp; temp = NULL;
     return tt;
}