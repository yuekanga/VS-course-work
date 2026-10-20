#include <iostream> 
using namespace std;
int main()
{
	//int& r1;//错误，引用必须在定义时初始化
	// ①

	int x = 5;         
	int& r2 = x;     
	cout << r2 << endl;         
	//int& r3 = 10;//错误，引用必须绑定到一个变量上               
	// ②

	double d = 3.14;         
	//int& r4 = d;//错误，引用类型必须与被引用变量类型一致                
	// ③     

	int a = 1, b = 2;         
	int& r5 = a;     
	r5 = b;
	// r5绑定a，r5的值变为b的值，即2，a也变为2
	// ④ 观察：r5还绑a还是改绑b？a、b各变多少

	cout << a << endl << b << endl << r5 << endl;
	const int c = 7;         
	//int& r6 = c;//错误，不能将非常量引用绑定到常量上                
	// ⑤
	    
	const int& r7 = c;     
	//r7 = 8;//错误，不能通过常量引用修改常量的值                    
	// ⑥
	    
	const int& r8 = a * 2;//合法，常量引用可以绑定到一个临时变量上      
	// ⑦ 判断合法还是非法

	const int& r9 = 42;//合法，常量引用可以绑定到一个字面量上
	// ⑧ 判断合法还是非法
	    
	return 0; 
}