#pragma warning(disable:4996)
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
using namespace std;

namespace pack
{
     string integ_toString(long num, int size=5);
     string realnum_toString(double real, int size);
     template <typename type>
     string num_toString(const type &t);
}

