#pragma warning(disable:4996)
#include <string.h>
#include <vector>
#include "doi bong.h"
/*
string tendoi, tenHLVT;
unsigned int thang, thua, hoa;
*/
class GiaiDau
{
protected:
     string ngaybd, ngaykt;
     vector <DoiBong> ds;
public:
     static void Hoanvi(DoiBong &a, DoiBong &b);
     void Nhaptt();
     string toString();
     void SapxepGiam();
};
