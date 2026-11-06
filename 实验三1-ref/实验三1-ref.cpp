#include<iostream>
using namespace std;

void swap_ref(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "引用传递后子函数中x=" << x << ",y=" << y << endl;
}

int main()
{
	int a = 1;
	int b = 2;
	cout << "引用传递前a=" << a << ",b=" << b << endl;
	swap_ref(a, b);
	cout << "引用传递后主函数中a=" << a << ",b=" << b << endl;

	system("pause");
	return 0;
}
//引用是原变量的别名，x,y就是外面变量本身，共用同一块内存