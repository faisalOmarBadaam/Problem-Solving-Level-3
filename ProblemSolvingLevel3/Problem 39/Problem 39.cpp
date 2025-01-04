
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
string join(vector<string> vString,string dlim) {
	string result;
	for (int i = 0; i < vString.size()-1; i++)
	{
		result += vString[i] + dlim;
	}
	result += vString[vString.size() - 1];
	return result;
}


//another solution

string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
int main()
{
	vector<string>x;
	x.push_back("faisal");
	x.push_back("omar");
	x.push_back("salem");
	x.push_back("badaam");

	cout << join(x, "///");




}
