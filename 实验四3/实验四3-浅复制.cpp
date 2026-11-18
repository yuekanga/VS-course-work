#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class String {
private:
	char* str;
public:
	String(const char* s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}

	~String() {
		delete[] str;
		str = nullptr;
	}

	void print() {
		cout << str << endl;
	}
};

int main() {
	String s1("Hello");
	//String s2 = s1; // 调用拷贝构造函数，s2和s1共享同一块内存，无法释放两次，导致程序崩溃
	s1.print();
	//s2.print();

	return 0;
}