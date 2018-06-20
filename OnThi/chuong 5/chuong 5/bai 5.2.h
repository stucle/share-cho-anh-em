#pragma warning(disable:4996)

#include <iostream>
using namespace std;
class TamGiac
{
protected:
     int a, b, c;
public:
     TamGiac();
     TamGiac(int a, int b, int c);
     TamGiac(TamGiac &tg);
     void Xuat();
     int TinhCV();
};
class TuGiac:TamGiac
{
     int d;
public:
     TuGiac(int a, int b, int c, int d);
     TuGiac(TuGiac &t4g);
     int TinhCV();
     void Xuat();
};
void cau5_2();
