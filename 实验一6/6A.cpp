#include <iostream> 
using namespace std;
int main()
{
	int a = 0;
	// ①

	int b = 5;
	const int n = 0;
	//②     

	const double PI = 3.14159;
	a = b + 10;
	cout << a << endl;
	cout << b << endl;
	//n = 20;//错误,const修饰的变量不能被修改    
	//③     

	//PI = 3.14; //错误,const修饰的变量不能被修改
	// ④  

	int x = 5, y = 2;
	cout << x / y << endl;//当两个除法操作数都是整数时，结果为整数，余数舍弃
	//⑤ 观察：整数除结果是否符合预期 

	cout << double(x) / y << endl;
	char c;
	cin >> c;
	cout << int(c) << endl;
	cout << int(c + 1) << endl;
	//⑥ 观察：char参与算术会转int    

	system("pause");
	return 0;
}