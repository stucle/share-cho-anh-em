#pragma warning(disable:4996)
#include <iostream>
#include <string.h>
using namespace std;
class SinhVien
{
protected:
     char mssv[8], hoten[30];
     int namsinh;
     float diemtb;
public:
     SinhVien();
     SinhVien(char mssv[], char hoten[], int namsinh, float diemtb);
     SinhVien(SinhVien &sv);
     ~SinhVien();
     void Nhap();
     void Xuat();
     void XepLoai();

};
//
class SinhVienNN :SinhVien
{
protected:
     char nuoc[30];
     char soPassport[15];
public:
     SinhVienNN();
     SinhVienNN(char mssv[], char hoten[], int namsinh, float diemtb, char nuoc[], char soPp[]);
     SinhVienNN(SinhVienNN &svnn);
     ~SinhVienNN();
     void Nhap();
     void Xuat();
};
//
void bai5_1();