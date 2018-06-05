#pragma once
#include <vector>
#include "GiaoVien.h"
class DS_CoVan {
     vector <CoVanHocTap> cvht;
public:
     void Nhap(int a=2, int b=10);
     void Xuat();
     void SapXep();
     void HoanVi(CoVanHocTap &a, CoVanHocTap &b);
     void Them(CoVanHocTap them);
     bool Xoa(int vitri);
};