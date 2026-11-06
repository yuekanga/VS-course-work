#include<iostream>
using namespace std;

int cut_save;

int fibonacci(int n)
{
	static int count = 0;
	count++;
	int res;
	if (n == 1 || n == 2)
	{
		res = 1;
	}
	else
	{
		res = fibonacci(n - 1) + fibonacci(n - 2);
	}
	cut_save = count;
	return res;
}

int main()
{
	cout << "请输入一个整数n：";
	int n;
	cin >> n;
	int ans = fibonacci(n);
	cout << "第" << n << "个斐波那契数是：" << ans << endl;
	cout << "函数调用次数：" << cut_save << endl;

	system("pause");
	return 0;
}