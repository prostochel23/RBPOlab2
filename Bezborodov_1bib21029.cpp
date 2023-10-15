module;
#include <cmath>

module Bezborodov_1bib21029;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task2 
			{
				double f1(double);
				double f2(double);
				double f3(int);
				double f4(double);
				double a(int);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task2::f1(double x) 
{
	return 2 * pow(sin(3 * (2 * asin(1)) - 2 * x), 2) * pow(cos(5 * (2 * asin(1)) + 2 * x), 2);
}

double RBPO::Lab2::Variant1::Task2::f2(double x) 
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	return 1 / (pow(x, 3) + 6);
}

double RBPO::Lab2::Variant1::Task2::a(int i) 
{
	return (i % 2 ? -1 : 1) * 1 / double((i + 1) * (i + 2) * (i + 3));
}

double RBPO::Lab2::Variant1::Task2::f3(int n) 
{
	double sum = a(0); int i = 1;
	while (i <= n)
	{
		sum += a(i);
		i++;
	}
	return sum;
}

double RBPO::Lab2::Variant1::Task2::f4(double eps) 
{
	double sum = a(0), temp = a(1), temp1 = a(2); int i = 3;
	while (eps < abs(temp - temp1)) 
	{
		sum += temp;
		temp = temp1;
		temp1 = a(i);
		i++;
	}
	return sum;
}

