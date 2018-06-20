#pragma once
#include "Phone.h"
using namespace phone;
#include <vector>
class DS_Phone {
     vector <SmartPhone> list;
     int soluong;
public:
     void Nhap_DS(int a = 2, int b = 30);
     void SapXep_DS();
     void In_DS();
     bool Xoa_(int i);
};
