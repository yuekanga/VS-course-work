#include<iostream>
using namespace std;
int main()
{
	do
	{
		int n = 0;
		cin >> n;
		if (!cin)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Retry" << endl;
			continue;
		}
		else if (!(n >= 10 && n <= 99))
		{
			cout << "Retry" << endl;
			continue;
		}
		else
		{
			cout << "Accept n=" << n << endl;
			break;
		}
	} while (true);
	system("pause");
	return 0;
}