#include <iostream>
using namespace std;
int main()
{
	int x = 10;
	int* p = &x;
	cout << x, * p, &x,p << endl;
	*p = 100;
	cout << x << endl;

	/*
	int* q;
	cout << *q;
	引用必须初始化
	*/

	int* q = nullptr;
	if(q!= nullptr)





	system("pause");
	return 0;
}