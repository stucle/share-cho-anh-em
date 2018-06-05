#pragma once

#include <iostream>
using namespace std;

namespace tinhtoan {
     double TinhGiaBan(float memory, float dongia);
     double TinhLuong(int sogio, int giodm, float tienluong);
     double PhuCapCoVan(int phucapgoc, int siso, int limit, float hesovuot);
}
namespace pack {
     string integ_toString(long num, int size = 5);
     string realnum_toString(double real, int size=5);
     /*
     template <typename type>
     string num_toString(const type &t);
     */
}