#include "DS_CoVan.h"
#include "package.h"
using namespace std;
using namespace pack;
#include <string>

void On_Tap(int a = 2, int b = 10)
{
     DS_CoVan danhsach;
     danhsach.Nhap(a, b);
     cout << "Nhap thong tin GV co van bo sung\n";
     CoVanHocTap newGV;
     newGV.Nhap();
     danhsach.Them(newGV);
     //danhsach.Xuat();
     danhsach.SapXep();
     cout << "Xoa co van o vi tri thu (xep theo tien luong): ";
     int vitri;  cin >> vitri;
     if (danhsach.Xoa(vitri-1)) cout << "Xoa thanh cong\n";
     else cout << "Khong xoa dc\n";
     danhsach.Xuat();
}


int main()
{
     On_Tap();
     system("pause");
}