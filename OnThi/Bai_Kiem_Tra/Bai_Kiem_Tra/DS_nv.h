#pragma once
#include "NhanVien.h"
using namespace nv;
#include <vector>
class DS_GV {
     vector <GiaoVien> gv;
     int soluong;
public:
     void Nhap_DS(int a = 2, int b = 10);
     void SapXep();
     void BangLuong();
     void NghiHuu(int namnay = 2018);
};