#include<iostream>
using namespace std;

class Box 
{
public:
	Box(int l=1, int w=1, int h=1) : length(l), width(w), height(h) {}
	Box(int l) : length(l), width(l), height(l) {}
private:
	int length;
	int width;
	int height;
};

int main()
{
	//Box b1(5);
	//带三个默认参数的构造函数可以仅传入一个实参，剩余参数使用默认值；同时存在单参数构造函数。
	// 执行Box b1(5)时，两个构造函数都可以匹配本次调用，编译器无法确定调用哪一个，产生二义性（ambiguity）冲突。

	system("pause");
	return 0;
}