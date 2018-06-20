#include "cau thu.h"
#include "doi bong.h"
class Doi_Bong : public DoiBong
{
     /*     string tendoi, tenHLVT;
     unsigned int thang, thua, hoa;
     */
protected:
     CauThu ds[30];
     unsigned int soluong;
public:
     Doi_Bong();
     Doi_Bong(string tendoi, string tenHLVT, unsigned int thang, unsigned int thua, unsigned int hoa);
     void Nhap_DScauthu();
     string toString();
     ~Doi_Bong();
     static void BubbleSort(CauThu ds[], int n);
     void SapxepDS();
     string CacTiendao();
};