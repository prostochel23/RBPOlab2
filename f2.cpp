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
				double f2(double);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task3::f2(double x) 
{
	return x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6);
}
