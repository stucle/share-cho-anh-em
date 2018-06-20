#include "bai 5.2.h"
TamGiac::TamGiac()  {}
TamGiac::TamGiac(int a, int b, int c)
{
     this->a = a;
     this->b = b;
     this->c = c;
}

TamGiac::TamGiac(TamGiac &tg)
{
     tg.a = this->a;
     tg.b = this->b;
     tg.c = this->c;
}

int TamGiac::TinhCV()
{
     return a + b + c;
}
void TamGiac::Xuat()
{
     cout << "Chu vi: " << this->TinhCV();
}
//

TuGiac::TuGiac(int a, int b, int c, int d)
{
     TamGiac::TamGiac(a, b, c);
     this->d = d;
}
TuGiac::TuGiac(TuGiac &t4g)
{
     TamGiac::TamGiac(t4g.a, t4g.b, t4g.c);
     this->d = t4g.d;
}

int TuGiac::TinhCV()
{
     return TamGiac::TinhCV() + this->d;
}

void TuGiac::Xuat()
{
     cout << "Chu vi: " << this->TinhCV();
}

void cau5_2()
{
     int canh[5];
     cout << "nhap lan luot cac canh cua TG: ";
     cout << "a = "; cin >> canh[0];
     cout << "b = "; cin >> canh[1];
     cout << "c = "; cin >> canh[2];
     cout << "d = "; cin >> canh[3];
     TuGiac *t4g = new TuGiac(canh [0], canh[1], canh[2], canh[3]);
     t4g->Xuat();
     // giai phong bo nho
     delete t4g; t4g = NULL;
}