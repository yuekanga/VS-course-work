#include<iostream>
using namespace std;

int* mergeSortedArrays(const int* arr1, int len1, const int* arr2, int len2)
{
	int* merged = new int[len1 + len2];
	int i = 0, j = 0, k = 0;
	while (i < len1 && j < len2)
	{
		if (arr1[i] < arr2[j])
		{
			merged[k++] = arr1[i++];
		}
		else
		{
			merged[k++] = arr2[j++];
		}
	}
	while (i < len1)
	{
		merged[k++] = arr1[i++];
	}
	while (j < len2)
	{
		merged[k++] = arr2[j++];
	}
	return merged;
}

int main()
{
	const int arr1[] = { 1, 3, 5, 7, 9 };
	const int arr2[] = { 2, 4, 6, 8, 10 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	int* p = mergeSortedArrays(arr1, len1, arr2, len2);
	cout << "合并后的数组为：";
	for (int i = 0; i < len1 + len2; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	delete[] p;
	p = nullptr;

	system("pause");
	return 0;
}