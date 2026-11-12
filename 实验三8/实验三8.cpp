#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "请输入一段包含空格的英文长句子：";
	string s;
	getline(cin, s);
	string old_word = "apple";
	string new_word = "fruit";
	size_t pos = s.find(old_word);
	while (pos != string::npos)
	{
		s.replace(pos, old_word.length(), new_word);
		pos = s.find(old_word, pos + new_word.length());
	}
	cout << "替换后的句子为：" << s << endl;

	system("pause");
	return 0;
}