#pragma warning(disable:4996)
#include <string.h>
#include <string>
#include <iostream>
using namespace std;


class DoiBong
{
protected:
     string tendoi, tenHLVT;
     unsigned int thang, thua, hoa;
public: DoiBong();
     DoiBong(string tendoi, string tenHLVT, unsigned int thang, unsigned int thua, unsigned int hoa);
     int TinhDiem();
     friend bool operator <(DoiBong a, DoiBong b);
     string toString();
};
//