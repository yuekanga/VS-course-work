#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	double sum = 0;
	int sign = 1;
	double a = 0;
	double b = 0;
	for (int i = 1;i <= n;i++)
	{
		a = 2 * i - 1;
		b = 2 * i + 1;
		sum = sum + sign * a / b;
		sign = -sign;
	}
	cout << sum << endl;

	system("pause");
	return 0;
}