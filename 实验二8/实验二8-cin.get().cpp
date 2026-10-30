#include <iostream>
using namespace std;
int main()
{
	char ch;
	int letter = 0;
	int digit = 0;
	int space = 0;
	int other = 0;
	while (cin.get(ch))
	{
		if (ch == '\n')
		{
			break;
		}
		else if ((ch >='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		{
			letter++;
		}
		else if(ch>='0'&&ch<='9')
		{
			digit++;
		}
		else if (ch == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	cout << "字母：" << letter << endl;
	cout << "数字：" << digit << endl;
	cout << "空格：" << space << endl;
	cout << "其他：" << other << endl;

	system("pause");
	return 0;
}