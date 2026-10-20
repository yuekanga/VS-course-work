#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 5;
	int& r = x;
	r = 10;
	cout << "x = " << x << endl;
	cout << "r = " << r << endl;
	cout << "&x = " << &x << endl;
	cout << "&r = " << &r << endl;


	//int& r2;//错误，引用必须在定义时初始化
	//int& r3 = 3;//错误，引用必须绑定到一个变量上
	double d = 3.14;
	//int& r4 = d;//错误，引用类型必须与被引用的变量类型一致


	int X = 1, Y = 2;
	int& R = X;R = Y;
	cout << "X = " << X << endl;
	cout << "Y = " << Y << endl;
	cout << "R = " << R << endl;
	//R没有变成Y的引用，R仍然是X的引用，只是把Y的值赋给了R，所以R变成了2，X也变成了2，而Y仍然是2


	int a = 0;
	const int& ra = a;// 正确，const引用可以绑定到变量上
	// ra = 1; // 错误，const引用不能被修改
	const int& rb = a * 2;// 正确，const引用可以绑定到临时变量上
	const int& rc = 42;// 正确，const引用可以绑定到字面量上


	system("pause");
	return 0;
}