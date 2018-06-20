#pragma once
#include "DS_dt.h"
void kt_57th2(int a, int b)
{
     DS_Phone danhsach;
     cout << "Nhap tu " << a << " den " << b << " dien thoai." << endl;
     danhsach.Nhap_DS();
     danhsach.SapXep_DS();
     cout << "Xoa dien thoai thu: ";
     int i;  cin >> i;
     danhsach.Xoa_(i);
     cout << "Danh sach dien thoai dc sap xep theo nhan hieu: ";
     danhsach.In_DS();
}