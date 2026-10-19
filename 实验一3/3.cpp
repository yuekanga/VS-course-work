#include <iostream>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	const int MAXN = 1000;
	double R = 5;//R赋任意值
	cout << "圆面积为" << PI * R * R << endl;
	//PI = 3.14;//错误，常量不可修改
	//MAXN = 2000;//错误，常量不可修改


	const int x = 1;
	//x = 2;//错误，常量不可修改

	const int A = 78;
	int c = 13;
	const int* p = &A;
	//*p = 1;//错误，常量指针不可修改指针指向的值
	p = &c;

	int v = 5;
	int* const q = &v;
	//q = &c;//错误，指针常量不可修改指针指向
	*q = 9;

	const int M = 10;
	const int* const r = &M;
	//r = &v;//错误，既修饰指针又修饰常量时不可修改指针指向
	//*r = 1;//错误，既修饰指针又修饰常量时不可修改指针指向的值

	//*p = 1;//错误，常量指针不可修改指针指向的值

	system("pause");
	return 0;
}