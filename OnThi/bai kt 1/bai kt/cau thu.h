#pragma warning(disable:4996)
#include <iostream>
#include <string>
using namespace std;
#pragma once



class CauThu
{
protected:     int soao;
     string tencauthu;
     int vitri, sobanthang;
public:
     CauThu();
     ~CauThu();
     CauThu(int soao, string tencauthu, int vitri, int sobanthang);
     string toString();
     int get_vitri();
     friend bool operator<(CauThu c1, CauThu c2);
     static void Swap(CauThu &a, CauThu &b);
     static CauThu nhapcauthu();
};
