#include <iostream>
using namespace std;

void swap1(int *a, int *b)
{
	int temp1 = *a;
	*a = *b;
	*b = temp1;
}

void swap2(int *a, int *b)
{
	int* temp2 = a;
	a = b;
	b = temp2;
}

int main()
{
	int x = 10;
	int* p = &x;
	cout << x << endl << *p << endl << &x << endl << p << endl;
	*p = 100;
	cout << x << endl;

	//int *q;//野指针
	//cout << *q;
	// 引用必须初始化
	

	int* q = nullptr;
	if (q != nullptr)
	{
		*q = 1;
	}
	else
	{
		cout << "null pointer" << endl;
	}

	int i1 = 1;
	int i2 = 2;
	swap1(&i1, &i2);
	cout << i1 << " " << i2 << endl;
	//值交换，所指对象的值交换

	int* p1 = &i1;
	int* p2 = &i2;
	swap2(p1, p2);
	cout << *p1 << " " << *p2 << endl;
	//指针交换，所指对象的值不变


	int i = 0;
	//double* dp = &i;//错误，类型不匹配
	//int* ip = i;//错误，不能把整数赋值给指针
	void* vp = &i;
	//cout << *vp << endl;//错误，void*不能解引用
	int* ip = static_cast<int*>(vp);
	cout << *ip << endl;
	//void*可以指向任意类型的对象，但不能解引用，必须先转换为具体类型的指针才能解引用

	system("pause");
	return 0;
}