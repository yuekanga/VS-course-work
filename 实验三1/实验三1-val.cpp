#include<iostream>
using namespace std;

void swap_val(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "值传递后子函数中x=" << x << ",y=" << y << endl;
}

int main()
{
	int a = 1;
	int b = 2;
	cout << "值传递前a=" << a << ",b=" << b << endl;
	swap_val(a, b);
	cout << "值传递后主函数中a=" << a << ",b=" << b << endl;
	
	system("pause");
	return 0;
}
//值传递是拷贝一份副本，函数内操作的是副本，和main里原始变量是两块独立内存，修改副本不影响外面