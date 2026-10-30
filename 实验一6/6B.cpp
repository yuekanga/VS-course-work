#include <iostream> 
using namespace std;
int main()
{
	//int* p;//错误，未初始化指针
	// ①

	int v = 10;
	//cout << *p << endl;//错误，未初始化指针解引用
	// ②    
	
	int* q = nullptr;//空指针
	// ③     
	
	//cout << *q << endl;//错误，空指针解引用
	// ④

	const int k = 100;
	const int* pk = &k;//int* pk = &k;//错误，不能将const int*赋值给int*
	// ⑤     

	//*pk = 200;//错误，不能通过const int*修改k的值
	// ⑥ 
	   
	int m = 1;
	const int* cp = &m;//合法，cp是指向const int的指针，可以指向int类型变量
	// ⑦

	//*cp = 50;//错误，不能通过const int*修改m的值
	// ⑧  
	  
	cp = &v;//合法，常量指针可以指向其他变量
	// ⑨ 判断合法还是非法
	    
	int* const qc = &v;//int* const qc;//错误，指针常量必须在定义时初始化
	// ⑩     

	//qc = &v;
	// ⑪     

	*qc = 99;//合法，可以通过常量指针修改v的值
	// ⑫

	double d = 1.2;
	//int* pd = &d;//错误，不能将double*赋值给int*
	// ⑬     

	void* vp = &v;
	//cout << *vp << endl;//错误，void*不能解引用
	// ⑭ 
	 
	system("pause");
	return 0;
}