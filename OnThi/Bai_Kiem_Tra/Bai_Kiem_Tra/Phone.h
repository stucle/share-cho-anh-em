#pragma once
#include <iostream>
using namespace std;
namespace phone     {
     class Phone {
     protected:
	   string maso, nhanhieu;
	   float dongia; int namsanxuat;
     public:
	   Phone();
	   Phone(string maso, string nhanhieu, float dongia, int namsx);
	   string toString();
     };
     class SmartPhone : public Phone {
	   float manhinh, camera; int bonho;
     public:
	   SmartPhone();
	   SmartPhone(string maso, string nhanhieu, float dongia, int namsx, float manhinh, float camera, int bonho);
	   double TinhGiaBan();
	   string toString();
	   friend bool operator <(SmartPhone a, SmartPhone b);
	   static void Swap(SmartPhone &a, SmartPhone &b);
     };
}