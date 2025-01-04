
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
int countLetterInText(string text,char letter) {
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i]==letter)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	cout << endl;
	cout << countLetterInText("faisal OmaR BADaam",'l');


}
