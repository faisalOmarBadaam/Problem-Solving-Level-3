
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
int countUpper(string text) {
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (isupper(text[i]))
		{
			counter++;
		}
	}
	return counter;
}
int countLower(string text) {
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (islower(text[i]))
		{
			counter++;
		}
	}
	return counter;
}
int main()
{
	cout << countUpper("faisal OmaR BADaam");
	cout << endl;
	cout << countLower("faisal OmaR BADaam");


}
