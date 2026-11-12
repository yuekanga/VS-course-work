#include<iostream>
#include<vector>
#include<string>
using namespace std;

void addContact(vector<string>& names, vector<string>& phones,const string& name, const string& phone)
{
	names.push_back(name);
	phones.push_back(phone);
}

void displayAll(const vector<string>& names, const vector<string>& phones)
{
	cout << "联系人列表：" << endl;
	for (int i = 0; i < names.size(); i++)
	{
		cout << "姓名：" << names[i] << "，电话：" << phones[i] << endl;
	}
}

int main()
{
	vector<string> names;
	vector<string> phones;
	addContact(names, phones, "张三", "33333333333");
	addContact(names, phones, "李四", "44444444444");
	addContact(names, phones, "王五", "55555555555");
	cout << "添加之前：" << endl;
	displayAll(names, phones);
	cout << endl;
	string name, phone;
	cout << "请输入联系人姓名：";
	cin >> name;
	cout << "请输入联系人电话：";
	cin >> phone;
	cout << endl;
	addContact(names, phones, name, phone);
	cout << "添加之后：" << endl;
	displayAll(names, phones);
	cout << endl;

	system("pause");
	return 0;
}