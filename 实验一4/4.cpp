#include <iostream>
using namespace std;
int main()
{
	int x = 10;
	int *p = &x;
	cout << x << endl << *p << endl << &x << endl << p << endl;
	*p = 100;
	cout << x << endl;

	/*
	int* q;
	cout << *q;
	引用必须初始化
	*/

	int * q = nullptr;
	if (q != nullptr)
	{
		*q = 1;
	}
	else
	{
		cout << "null pointer" << endl;
	}

	int i1=





	system("pause");
	return 0;
}