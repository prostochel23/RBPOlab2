module;
#include <cmath>
module Bezborodov_1bib21029;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task3 
			{
				double f4(double);
				double a(int);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task3::f4(double eps) 
{
	double sum = 0, temp = a(0), temp1 = a(1); int i = 1;
	do 
	{
		sum += temp;
		temp = temp1;
		temp1 = a(i);
		i++;
	} while (eps < abs(temp - temp1));
	return sum;
}
