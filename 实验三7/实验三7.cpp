#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for (int i = 0; i < v.size();i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	v.insert(v.begin() + 2,99);
	v.erase(v.end() - 2);
	for (int i = 0;i < v.size();i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}