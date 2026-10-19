# include <iostream>
using namespace std;
int main()
{
	int m, n;
	cout << "输入5 2" << endl;
	cin >> m >> n;
	cout << "m/n整数除=" << m / n << endl;//两个int做除法结果也为int，舍弃小数
	cout << "m/n浮点除=" << double(m) / n << endl;//先把m转化为double，n自动变为double，做除法结果也为double，有小数

	int x = 2147483648;
	cout << "x=" << x << endl;//结果异常
	long long y = 2147483648;
	cout << "y=" << y << endl;//数字超过2147483647时改用long long

	char ch = 'a';
	cout << "输入一个小写字母：" << endl;
	cin >> ch;
	cout << ch << endl;
	cout << int(ch) << endl;
	cout << int(ch) + 1 << endl;
	cout << char(ch - 32) << endl;

	enum colour { red, yellow, blue, white, black };
	colour c = blue;
	cout << "c对应的整数为" << c << endl;
	//red/blue/black分别是0/2/4

	system("pause");
	return 0;
}