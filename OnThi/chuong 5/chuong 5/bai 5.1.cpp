#include "bai 5.1.h"
#include <iostream>
using namespace std;
#include <string.h>
SinhVien::SinhVien()
{}
SinhVien::SinhVien(char mssv[], char hoten[], int namsinh, float diemtb)
{
     strcpy(this->mssv, mssv);
     strcpy(this->hoten, hoten);
     this->namsinh = namsinh;
     this->diemtb = diemtb;
}
SinhVien::SinhVien(SinhVien &sv)
{
     strcpy(this->mssv, sv.mssv);
     strcpy(this->hoten, sv.hoten);
     this->namsinh = sv.namsinh;
     this->diemtb = sv.diemtb;
}

void SinhVien::Nhap()
{
     cin.ignore();
     cout << "Nhap ma so sinh vien: ";
     cin.get(this->mssv, 8);
     cout << "Nhap ho va ten sinh vien: ";
     cin.ignore();
     cin.getline(this->hoten, 30);
     cout << "Nhap nam sinh: ";
     cin >> this->namsinh;
     cout << "Nhap diem trung binh";
     cin >> this->diemtb;
}
void SinhVien::Xuat()
{
     cout << endl << "\tMa so sinh vien: ";
     puts(this->mssv);
     cout << endl << "Ho va ten sinh vien:";
     puts(this->hoten);
     cout << endl << "Sinh nam: " << this->namsinh << endl << "Diem trung binh: " << this->diemtb << "\t\tXep loai: ";
     this->XepLoai();
}
void SinhVien::XepLoai()
{
     float *d = &this->diemtb;
     if (*d <5) cout << "kem";
     if (5 <= *d <7) cout << "trung binh";
     if (7 <= *d < 8) cout << "kha";
     if (8 <= *d < 9) cout << "gioi";
     if (9 <= *d <= 10) cout << "xuat sac";
     d = NULL;
}

SinhVien::~SinhVien()
{}
//
SinhVienNN::SinhVienNN()
{}
SinhVienNN::~SinhVienNN()
{}
SinhVienNN::SinhVienNN(char mssv[], char hoten[], int namsinh, float diemtb, char nuoc[], char soPp[])
{
     SinhVien(mssv, hoten, namsinh, diemtb);
     strcpy(this->nuoc, nuoc);
     strcpy(this->soPassport, soPp);
}
SinhVienNN::SinhVienNN(SinhVienNN &svnn)
{
     SinhVien(snvv);
     strcpy(this->nuoc, svnn.nuoc);
     strcpy(this->soPassport, svnn.soPassport);
}
void SinhVienNN::Nhap()
{
     SinhVien::Nhap();
     cout << "Nhap quoc tich: ";
     cin.ignore();
     cin.getline(this->nuoc, 30);
     cout << "Nhap passportID: ";
     cin.ignore();
     cin.getline(this->soPassport, 15);
     cin.ignore();
}
void SinhVienNN::Xuat()
{
     SinhVien::Xuat();
     cout << endl << "Quoc tinh: ";
     puts(this->nuoc);
     cout << endl << "So ho chieu: ";
     puts(this->soPassport);
}

//

void bai5_1()
{
     SinhVienNN *sv = new SinhVienNN();
     sv->Nhap();
     sv->Xuat();
     delete sv;     sv = NULL;
     system("pause");
}