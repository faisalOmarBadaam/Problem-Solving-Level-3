
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
void printWordsInText(string text)
{
	string delim = " ";
	string sword;
	short pos = 0;
	while ((pos = text.find(delim)) != string::npos) 
	{
		sword = text.substr(0, pos);
		if (sword!="")
		{
			cout << sword << endl;
		}
		text.erase(0, pos + delim.length());
	}
	if (text!="")
	{
		cout << text << endl;
	}
}

int main()
{
	printWordsInText("faisal omar badaam");

}
