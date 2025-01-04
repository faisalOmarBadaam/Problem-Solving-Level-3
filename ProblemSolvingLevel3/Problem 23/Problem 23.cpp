
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
void printFirstLetterOfEachWord(string sentence) {
	cout << sentence[0] << endl;
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == ' ' && sentence[i+1]!=NULL && sentence[i + 1] != ' ') {
			cout << sentence[i + 1]<<endl;
		}
	}
}

//another solution:

void PrintFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	cout << "\nFirst letters of this string: \n";
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			cout << S1[i] << endl;
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
}
int main()
{
	PrintFirstLetterOfEachWord(ReadString());

}

