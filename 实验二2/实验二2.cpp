#include <iostream>
using namespace std;
int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	cout << "请输入三个整数a,b,c：" << endl;
	cin >> a >> b >> c;
	cout << "a,b,c原顺序为：" << a << " " << b << " " << c << endl;
	if (a > b) 
	{
		if (b < c)
		{
			if (a >= c) 
			{
				x = a, y = c, z = b;
			}
			else
			{
				x = c, y = a, z = b;
			}
		}
		else
		{
			x = a, y = b, z = c;
		}
	}
	else if (a < b)
	{
		if (b > c)
		{
			if (a >= c)
			{
				x = b, y = a, z = c;
			}
			else
			{ 
				x = b, y = c, z = a;
			}
		}
		else
		{
			x = c, y = b, z = a;
		}
	}
	else
	{
		if (b > c)
		{
			x = a, y = b, z = c;
		}
		else if (b < c)
		{
			x = c, y = a, z = b;
		}
		else
		{
			cout << "Equal" << endl;
		}
	}
	if (a != b || a != c || b != c)
	{
		cout<<"从小到大排序后顺序为：" << z << " " << y << " " << x << endl;
	}

	system("pause");
	return 0;
}