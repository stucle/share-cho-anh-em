#pragma once
#include <iostream>
using namespace std;
class GiaoVien {
protected:
     string maso, hoten;
     int namsinh;
     static int luongcoban;
     float hesoluong;
public:
     GiaoVien();
     GiaoVien(string maso, string hoten, int namsinh, float hesoluong);
     void Nhap();
     void setter(int luongcoban = 1300);
     //float get_hsl();
     string toString();
     float TienLuong();
};

class CoVanHocTap : public GiaoVien {
     string tenlopcovan;
     int sisoSV;
     int xeploai;
public:
     CoVanHocTap();
     CoVanHocTap(string maso, string hoten, int namsinh, float hesoluong, string tenlopcovan, int sisoSV, int xeploai);
     void Nhap();
     float PhuCap();
     static string getter(int xeploai);
     string toString();
     float TienLuong();
     friend bool operator >(CoVanHocTap a, CoVanHocTap b);
};