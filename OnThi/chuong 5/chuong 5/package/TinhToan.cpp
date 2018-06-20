#include "package.h"
#pragma warning(disable:4996)

double tinhtoan::TinhGiaBan(float memory, float dongia)
{
	if (memory < 8) return dongia *= (float)(100+5) / 100;
	else	if(8<=memory && memory <=16) return  dongia *= (float)(100 + 10) / 100;
	else return  dongia *= (float)(100 + 15) / 100;
}

double tinhtoan::TinhLuong(int sogio, int giodm, float tienluong)
{
	if (sogio < giodm) return tienluong * (1 - 20 / 100);
	else return tienluong * (1 + (20 / 100)*(sogio - giodm));
}

double tinhtoan::PhuCapCoVan(int phucapgoc, int siso, int limit, float hesovuot)
{
	double result = phucapgoc;
	if (siso <= limit) return result;
	return result + (siso - limit) * hesovuot;
}

string pack::integ_toString(long num, int size)
{
	char *temp = new char[size];
	itoa(num, temp, 10);
	string re(temp);
	delete[] temp; temp = NULL;
	return re;
}
string pack::realnum_toString(double real, int size, bool trim)
{
	char *temp = new char[size];
	sprintf(temp, "%f", real);
	string result(temp);
	//delete[] temp;
	temp = NULL;
	if (trim == true)
	     while ( result.size() >= size)
		   result.pop_back();
	return result;
}

//