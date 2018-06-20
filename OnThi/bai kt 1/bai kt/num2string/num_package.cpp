#include "package.h"
using namespace pack;



template <typename type>
string pack::num_toString(const type &t)
{
     ostringstream oss;
     oss << t;
     return oss.str();
}

string pack::integ_toString(long num, int size=5)
{
     char *temp = new char[size];
     itoa(num, temp, 10);
     string re(temp);
     temp = NULL, delete[] temp;
     return re;
}
string pack::realnum_toString(double real, int size=6)
{
     char *temp = new char[size];
     sprintf(temp, "%f", real);
     string re(temp);
     delete[] temp; temp = NULL;
     return re;
}