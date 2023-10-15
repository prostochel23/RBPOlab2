module Bezborodov_1bib21029:F3;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task4 
			{
				double f3(int);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task4::f3(int n) 
{
	double sum = a(0);
	for (int i = 1; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
