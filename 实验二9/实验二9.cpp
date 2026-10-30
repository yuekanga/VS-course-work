#include <iostream>
using namespace std;
int main()
{
	int m = 0;
	cin >> m;
	for (int i = 2;i <= m;i++)
	{
		int sum = 0;
		for (int j = 1;j <= i / 2;j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			cout << i << " its factors:";
			for (int j = 1;j <= i / 2;j++)
			{
				if (i % j == 0)
				{
					if (j != 1)
					{
						cout << ",";
					}
					cout << j;
				}
			}
			cout << " ";
		}
	}

	system("pause");
	return 0;
}