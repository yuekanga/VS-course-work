#include <iostream>
using namespace std;
int main()
{
	int op = 0;
	double a = 0, b = 0;
	bool flag = true;
	while (flag) 
	{
		cout << "循环显示菜单：\n1.+\n2.-\n3.*\n4./\n5.退出\n" << "请输入选项：\n";
		cin >> op;
		if (op != 5)
		{
			cout << "请输入两个操作数：" << endl;
			cin >> a >> b;
		}
		switch (op)
		{
			case 1:
				cout << "结果为：" << a + b << endl;
				break;
			case 2:
				cout << "结果为：" << a - b << endl;
				break;
			case 3:
				cout << "结果为：" << a * b << endl;
				break;
			case 4:
				if (b == 0)
				{
					cout << "Divided lnvalid choice" << endl;
				}
				else
				{
					cout << "结果为：" << a / b << endl;
				}
				break;
			case 5:
				cout << "程序退出" << endl;
				flag = false;
				break;
			default:
				cout << "Invalid choice" << endl;
				break;
		}
	}
	
	system("pause");
	return 0;
}