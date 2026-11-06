#include<iostream>
using namespace std;

void swap_ptr(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << "指针传递后子函数中x=" << *x << ",y=" << *y << endl;
}

int main()
{
	int a = 1;
	int b = 2;
	cout << "指针传递前a=" << a << ",b=" << b << endl;
	swap_ptr(&a, &b);
	cout << "指针传递后主函数中a=" << a << ",b=" << b << endl;

	system("pause");
	return 0;
}
//地址传递传入的是变量地址，通过解引用*直接操作原始变量的内存