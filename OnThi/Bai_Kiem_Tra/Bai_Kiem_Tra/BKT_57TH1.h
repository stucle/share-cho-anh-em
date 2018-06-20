#pragma once
#include "DS_nv.h"
void kt_57th1(int a, int b)
{
     DS_GV danhsach;
     danhsach.Nhap_DS(a, b);
     danhsach.SapXep();
     cout << "Danh sach giao vien xep theo luong: " << endl;
     danhsach.BangLuong();
     cout << "Giao vien se nghi huu trong nam nay: " << endl;
     danhsach.NghiHuu(2018);
}