#include <iostream>
using namespace std;
int main() 
{	
	double x = 0;
	cout << "请输入一个数x：" << endl;
	cin >> x;

	if (x >= -5 && x < -1)
	{
		cout << "x属于[-5,-1)" << endl;
	}
	else if (x >= -1 && x <= 3)
	{
		cout << "x属于[-1,3]" << endl;
	}
	else if (x > 3 && x < 8)
	{
		cout << "x属于(3,8)" << endl;
	}
	else if(x >= 8 && x <= 10)
	{
		cout << "x属于[8,10]" << endl;
	}
	else
	{
		cout << "Out of range" << endl;
	}

	system("pause");
	return 0;
}