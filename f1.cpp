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
				double f1(double);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task3::f1(double x) 
{
	return 2 * pow(sin(3 * (2 * asin(1)) - 2 * x), 2) * pow(cos(5 * (2 * asin(1)) + 2 * x), 2);
}

