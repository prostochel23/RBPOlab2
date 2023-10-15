module Bezborodov_1bib21029;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task3 
			{
				double f3(int);
				double a(int);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task3::f3(int n)
{
	double sum = 0; int i = 0;
	do 
	{
		sum += a(i);
	} while (i++ < n);
	return sum;
}
