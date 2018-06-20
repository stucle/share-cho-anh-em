#pragma once

#include <iostream>
using namespace std;

namespace tinhtoan {
     double TinhGiaBan(float memory, float dongia);
     double TinhLuong(int sogio, int giodm, float tienluong);
}
namespace pack {
     string integ_toString(long num, int size = 5);
     string realnum_toString(double real, int size);
     /*
     template <typename type>
     string num_toString(const type &t);
     */
}