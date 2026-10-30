#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	while (true)
	{
		if (!cin)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Retry" << endl;
			cin >> n;
			continue;
		}
		else if (!(n >= 10 && n <= 99))
		{
			cout << "Retry" << endl;
			cin >> n;
			continue;
		}
		else
		{
			cout << "Accept n=" << n << endl;
			break;
		}
	}

	system("pause");
	return 0;
}