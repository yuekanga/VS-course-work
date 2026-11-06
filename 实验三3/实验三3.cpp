#include<iostream>
using namespace std;
#include<cmath>
const double PI = 3.1415926;

double calculateArea(double radius)
{
	return PI * radius * radius;
}

double calculateArea(double width, double height)
{
	return width * height;
}

double calculateArea(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	int choice;
	double r, w, h, a, b, c;
	cout << "=====面积计算菜单=====\n";
	cout << "1. 计算圆面积\n";
	cout << "2. 计算矩形面积\n";
	cout << "3. 计算三角形面积\n";
	cout << "请输入选择：";
	cin >> choice;
    if (choice == 1)
    {
        cout << "输入半径："<<endl;
        cin >> r;
        cout << "圆面积 = " << calculateArea(r) << endl;
    }
    else if (choice == 2)
    {
        cout << "输入宽、高："<<endl;
        cin >> w >> h;
        cout << "矩形面积 = " << calculateArea(w, h) << endl;
    }
    else if (choice == 3)
    {
        cout << "输入三边a,b,c："<<endl;
        cin >> a >> b >> c;
        cout << "三角形面积 = " << calculateArea(a, b, c) << endl;
    }
    else
    {
        cout << "输入选项错误！" << endl;
    }

	system("pause");
	return 0;
}