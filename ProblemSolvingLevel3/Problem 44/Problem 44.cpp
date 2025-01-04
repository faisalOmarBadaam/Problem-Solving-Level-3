
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
string removePunctuationsFromString(string text) {
	string result;
	for (int i = 0; i < text.length(); i++)
	{
		if (!(47>=int(text[i]) && int(text[i]) >=33 || 64 >= int(text[i]) && int(text[i]) >= 58 || 96 >= int(text[i]) && int(text[i]) >= 91 )) {
			result += text[i];
		}
	}

	return result;
}
int main()
{
	string name = "faisal;: omar, 'badaam";
	cout<<removePunctuationsFromString(name);
	//cout << int(';');
	



}
