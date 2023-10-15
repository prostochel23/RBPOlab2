module Bezborodov_1bib21029:F4;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task4 
			{
				double f4(double);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task4::f4(double eps) 
{
	double sum = a(0); int i = 3;
	for (double temp = a(1), temp1 = a(2); eps < abs(temp - temp1); i++)
	{
		sum += temp;
		temp = temp1;
		temp1 = a(i);
	}
	return sum;
}
