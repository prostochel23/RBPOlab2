module Bezborodov_1bib21029;

namespace RBPO 
{
	namespace Lab2 
	{
		namespace Variant1 
		{
			namespace Task3 
			{
				double a(int);
			}
		}
	}
}

double RBPO::Lab2::Variant1::Task3::a(int i) 
{
	return (i % 2 ? -1 : 1) * 1 / double((i + 1) * (i + 2) * (i + 3));
}
