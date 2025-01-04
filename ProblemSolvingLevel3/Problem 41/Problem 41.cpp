
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

string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
vector<string> splitString(string text,string drim) 
{
	vector<string>result;
	int pos = 0;
	string s1;
	while ((pos = text.find(drim)) != string::npos) {
		s1 = text.substr(0, pos);
		if (s1!="")
		{
			result.push_back(s1);
		}
		text.erase(0, pos + drim.length());
	}
	if (text!="")
	{
		result.push_back(text);
	}
	return result;
}
int main()
{
	string name = "faisal omar badaam";

	vector<string>vs = splitString(name," ");

	for (int i = vs.size()-1; i >= 0; i--)
	{
		cout << vs[i]<< " ";
	}



}
