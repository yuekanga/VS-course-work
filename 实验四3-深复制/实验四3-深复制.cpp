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

	String(const String& other) {
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
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
	String s2 = s1; // 调用拷贝构造函数，s2和s1各自拥有独立的内存空间
	s1.print();
	s2.print();

	return 0;
}