#include<iostream>
using namespace std;
#include<iomanip>

void transposeMatrix(const int src[][4], int dest[][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			dest[j][i] = src[i][j];
		}
	}
}

void printMatrix(const int mat[][4], int row, int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cout << setw(4) << mat[i][j];
		}
		cout << endl;
	}
}

void printMatrix(const int mat[][3], int row, int col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			cout << setw(4) << mat[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int src[][4] =
	{
		{ 1,2,3,4 },
		{ 5,6,7,8 },
		{ 9,10,11,12 }
	};
	int dest[4][3];
	cout << "源矩阵为：" << endl;
	printMatrix(src, 3, 4);
	transposeMatrix(src, dest, 3, 4);
	cout << "转置矩阵为：" << endl;
	printMatrix(dest, 4, 3);

	system("plause");
	return 0;
}