#include<iostream>
#include<string>
using namespace std;

class Student 
{
public:
/*
	Student(int id, string n) {
		studentID = id;// 错误：不能为const成员赋值
		name = n;
	}
*/
	Student(int id, string n) : studentID(id), name(n) {}// 正确：const成员在初始化列表中初始化
	const int studentID;// const成员必须在构造函数的初始化列表中初始化
	string name;
};

int main()
{
	Student s(001, "张三");
	//s.studentID = 002; // 错误：不能修改const成员

	system("pause");
	return 0;
}
