#include <iostream>
#include <cmath>
using namespace std;
const double eps = 1e-8;

int main()
{
	double a, b, c;
	cout << "请分别输入a,b,c:" << endl;
	cin >> a >> b >> c;

	if (fabs(a) <= eps)
	{
		cout << "Not quadratic" << endl;
	}
	else
	{
		double delta = b * b - 4 * a * c;
		if (delta > eps)
		{
			double x1 = (-b + sqrt(delta)) / 2 * a;
			double x2 = (-b - sqrt(delta)) / 2 * a;
			cout << "两不等实根分别为：x1 =" << x1 << ",x2=" << x2 << endl;
		}
		else if (fabs(delta) <= eps)
		{
			double x = -b / 2 * a;
			cout << "两相等实根为：x1=x2=" << x << endl;
		}
		else
		{
			double m = -delta;
			double real = -b / (2 * a);
			double d = sqrt(m) / (2 * a);
			cout << "两共轭复根分别为：x1=" << real << "+" << d << "i,x2=" << real << "-" << d << "i\n";
		}
	}

	system("pause");
	return 0;
}