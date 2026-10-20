#include <iostream>
using namespace std;

void swap1(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap2(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main() 
{
	int a = 12, b = 7;

	swap1(&a, &b);
	cout << a << endl << b << endl;

	swap2(a, b);
	cout << a << endl << b << endl;

	char lower = 'x';
	char to_upper = lower - 32;
	char upper = 'M';
	char to_lower = upper + 32;
	cout << "原来小写：" << lower << " 转大写：" << to_upper << endl;
	cout << "原来大写：" << upper << " 转小写：" << to_lower << endl;

	system("pause");
	return 0;
}