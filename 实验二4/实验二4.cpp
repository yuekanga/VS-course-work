#include <iostream>
using namespace std;
int main()
{
	cout << "请分别输入mm，dd，yyyy" << endl;
	int mm = 0;
	int dd = 0;
	int yyyy = 0;
	cin >> mm >> dd >> yyyy;
	bool ok = false;
	if (mm <= 12 && mm >= 1)
	{
		if ( mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
		{
			if (dd >= 1 && dd <= 31)
			{
				ok = true;
			}
		}
		else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
		{
			if (dd >= 1 && dd <= 30)
			{
				ok = true;
			}
		}
		else
		{
			if(yyyy % 4 == 0 && yyyy % 100 != 0 || yyyy % 400 == 0)
			{
				if (dd >= 1 && dd <= 29)
				{
					ok = true;
				}
			}
			else
			{
				if (dd >= 1 && dd <= 28)
				{
					ok = true;
				}
			}
		}
	}
	if (ok)
	{
		cout << "Valid date" << endl;
	}
	else
	{
		cout << "Invalid date" << endl;
	}

	system("pause");
	return 0;
}