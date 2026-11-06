#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>

int main()
{
	int arr[10];
	int* p = arr;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = rand() % 100;
	}
	cout << "原始数组：";
	for (int i = 0; i < 10; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
	int* left = arr;
	int* right = arr + 9;
	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	cout << "逆序数组：";
	for (int i = 0; i < 10; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}