#include <iostream>

int findMaxDtC(int a[], int begin, int end)
{
     int max1, max2;
     if (begin != end) 
     {
	   max1 = findMaxDtC(a, begin, (begin + end) / 2);
	   max2 = findMaxDtC(a, (begin + end) / 2 + 1, end);
	   if (max1 > max2)
		 return max1;
	   else
		 return max2;
     }
     return a[begin];
}

int main()
{
     system("pause");
}