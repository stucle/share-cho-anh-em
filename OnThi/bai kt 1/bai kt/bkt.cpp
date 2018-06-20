#include "bkt.h"
#include "doi_bong+.h"
#include "giai dau.h"
void de_3()
{
     string tendoi, tenHLVT; unsigned int thang, thua, hoa;
     cout << "Nhap ten doi bong: ";
     cin.ignore(); getline(cin, tendoi);
     cout << "Nhap ten huan luyen vien truong: ";
     cin.ignore(); getline(cin, tenHLVT);
     cout << "Nhap lan luot so tran thang, thua, hoa (neu chua thi dau thi nhap 0)";
     cin >> thang >> thua >> hoa;
     Doi_Bong doibong(tendoi, tenHLVT, thang, thua, hoa);
     cout << "Nhap thong tin cau thu: ";
     doibong.Nhap_DScauthu();
     doibong.SapxepDS();
     cout << "\nThong tin doi bong: (cau thu xep theo so ban thang giam dan):\n";
     cout << doibong.toString();
     system("pause");
     cout << "\nCac tien dao:\n";
     cout << doibong.CacTiendao();
     system("pause");
}

void de_2()
{
     GiaiDau giaidau;
     giaidau.Nhaptt();
     giaidau.SapxepGiam();
     cout << giaidau.toString();
}