#include <iostream>
using namespace std;

import Bezborodov_1bib21029;


int main() 
{
	char q;
	do
	{
		cout << "Cho delaem\
					\nZadanie 1 input:\t\'1\'\
					\nZadanie 2 input:\t\'2\'\
					\nZadanie 3 input:\t\'3\'\
					\nZadanie 4 input:\t\'4\'\
					\nZadanie 5 input:\t\'5\'\
					\nLivaem otsedova input:\t\'L\'" << endl;
		cin >> q;
		switch (q) 
		{
			int n;
			double x, eps;
		case '1' :
			cout << "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant1::Task1::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant1::Task1::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant1::Task1::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant1::Task1::f4(eps) << endl;
			break;
		case '2' :
			cout << "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant1::Task2::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant1::Task2::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant1::Task2::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant1::Task2::f4(eps) << endl;
			break;
		case '3' :
			cout << "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant1::Task3::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant1::Task3::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant1::Task3::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant1::Task3::f4(eps) << endl;
			break;
		case '4' :
			cout << "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant1::Task4::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant1::Task4::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant1::Task4::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant1::Task4::f4(eps) << endl;
			break;
		case '5':
			cout << "Input x, n and epsilon:" << endl;
			cin >> x >> n >> eps;
			cout << "f1(x) = " << RBPO::Lab2::Variant1::Task5::f1(x) << endl
				<< "f2(x) = " << RBPO::Lab2::Variant1::Task5::f2(x) << endl
				<< "f3(n) = " << RBPO::Lab2::Variant1::Task5::f3(n) << endl
				<< "f4(eps) = " << RBPO::Lab2::Variant1::Task5::f4(eps) << endl;
			break;
		case 'L':
			break;
		default:
			cout << "Inputed data is incorrect!" << endl;
			break;
		}
	} while (q != 'L');
	return 0;
}
/*
Input x, n and epsilon:
1 2 3
f1(x) = 0.286375
f2(x) = 7
f3(n) = 0.141667
f4(eps) = 0.166667
*/