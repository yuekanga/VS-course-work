# include <iostream>
using namespace std;
int main()
{
	//康悦 32606500147
	/*实验一*/
	const double PI = 3.141592653589793;
	double r = 0;
	cout << "请输入r:" << endl;
	cin >> r ;
	double C = 2 * PI * r;
	double S = PI * r * r;
	cout << "radius=" << r << endl;
	cout << "girth=" << C << endl;
	cout << "area=" << S << endl;

	//int a;//错误，未初始化局部变量
	int a = 0;
	int b = 0;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//局部int不初始化不一定为0

	system("pause");
	return 0;
}