module;
#include <cmath>
export module Bezborodov_1bib21029;

export import :F1;
export import :F2;
export import :A;
export import :F3;
export import :F4;


namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task1 
			{
				export double f1(double);
				export double f2(double);
				export double f3(int);
				export double f4(double);
				double a(int);
			}
			export namespace Task2 
			{
				double f1(double);
				double f2(double);
				double f3(int);
				double f4(double);
			}
			namespace Task3 
			{
				export double f1(double);
				export double f2(double);
				export double f3(int);
				export double f4(double);
				double a(int);
			}
			namespace Task5 
			{
				export double f1(double);
				export double f2(double);
				export double f3(int);
				export double f4(double);
				double a(int);
			}
			namespace Task1 
			{
				double f1(double x) 
				{
					return 2 * pow(sin(3 * (2 * asin(1)) - 2 * x), 2) * pow(cos(5 * (2 * asin(1)) + 2 * x), 2);
				}
				
				double f2(double x) 
				{
					return x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6);
				}
				
				double f3(int n) 
				{
					double sum = a(0);
					for (int i = 1; i <= n; i++) 
					{
						sum += a(i);
					}
					return sum;
				}
				
				double f4(double eps) 
				{
					double sum = a(0); int i = 3;
					for (double temp = a(1), temp1 = a(2); eps < abs(temp - temp1); i++ ) 
					{
						sum += temp;
						temp = temp1;
						temp1 = a(i);
					}
					return sum;
				}

				double a(int i) 
				{
					return (i % 2 ? -1 : 1) * 1 / double((i + 1) * (i + 2) * (i + 3));
				}
			}
		}
	}
}

module :private;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task5 
			{
				double f1(double x) 
				{
					return 2 * pow(sin(3 * (2 * asin(1)) - 2 * x), 2) * pow(cos(5 * (2 * asin(1)) + 2 * x), 2);
				}

				double f2(double x) 
				{
					return x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6);
				}

				double f3(int n) 
				{
					double sum = a(0);
					for (int i = 1; i <= n; i++)
					{
						sum += a(i);
					}
					return sum;
				}

				double f4(double eps) 
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

				double a(int i) 
				{
					return (i % 2 ? -1 : 1) * 1 / double((i + 1) * (i + 2) * (i + 3));
				}
			}
		}
	}
}