#include<iostream>
using namespace std;

class Box
{
public:
	Box(int l = 1, int w = 1, int h = 1) : length(l), width(w), height(h) {}
	static Box createCube(int l) 
	{ return Box(l, l, l); } // 静态成员函数，返回一个立方体对象
private:
	int length;
	int width;
	int height;
};

int main()
{
	Box b1(5);
	
	system("pause");
	return 0;
}