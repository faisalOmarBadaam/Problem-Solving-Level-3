
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
vector<string> split(string text,string delim)
{
	string sword;
	short pos = 0;
	vector<string>Result;
	while ((pos = text.find(delim)) != string::npos)
	{
		sword = text.substr(0, pos);
		if (sword != "")
		{
			Result.push_back(sword);
		}
		text.erase(0, pos + delim.length());
	}
	if (text != "")
	{
		Result.push_back(text);
	}
	return Result;
}
void printVector(vector<string> vector) {
	for(string& s : vector )
	{
		cout << s << endl;
	}
}
int main()
{
	printVector(split("faisal omar badaam"," "));
	

}
