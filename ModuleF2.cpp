module Bezborodov_1bib21029:F2;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task4
			{
				double f2(double);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task4::f2(double x) 
{
	return x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6);
}
