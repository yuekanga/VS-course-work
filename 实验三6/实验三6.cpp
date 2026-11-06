#include<iostream>
using namespace std;

int main()
{
	int N;
	cout << "请输入班级的学生人数N：";
	cin >> N;
	double* score = new double[N];
	for (int i = 0;i < N;i++)
	{
		cout << "请输入第" << i + 1 << "个学生的成绩：";
		cin >> score[i];
	}
	double max = score[0];
	double min = score[0];
	double sum = 0;
	for (int i = 0;i < N;i++)
	{
		sum += score[i];
		if (score[i] > max)
		{
			max = score[i];
		}
		if (score[i] < min)
		{
			min = score[i];
		}
	}
	double avg = sum / N;
	cout << "平均分为：" << avg << endl;
	cout << "最高分为：" << max << endl;
	cout << "最低分为：" << min << endl;
	delete[] score;

	system("pause");
	return 0;
}
//若不写delete[]释放，会发生内存泄漏，这块堆内存程序结束前一直占用，无法回收