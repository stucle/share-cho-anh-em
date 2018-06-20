#pragma once
#include <iostream>
using namespace std;
namespace nv	 {
     class NhanVien {
     protected:
	   string maso, hoten;
	   int namsinh;
	   float hesoluong;
	   static long lcb;
     public:	 NhanVien();
	   NhanVien(string maso, string hoten, int namsinh, float hesoluo);
	   static void setter(long luongcoban=1250);
	   virtual double TinhLuong();
	   virtual string toString();
     };
     class GiaoVien : public NhanVien {
	   int sogio, giodm;
     public:	 GiaoVien();
		 GiaoVien(string masogv, string hotengv, int namsinh, float hesoluo, int sogioday, int giodinhmuc);
		 static void setter(long luongcoban=1250);
		 int getter();
		 double TinhLuong();
		 string toString();
		 friend bool operator >(GiaoVien gv1, GiaoVien gv2);
     };
     void Swap(GiaoVien &a, GiaoVien &b);
}