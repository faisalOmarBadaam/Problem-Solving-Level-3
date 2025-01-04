
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
int countLetterInTextSencetiveCase(string text, char letter) {
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == letter)
		{
			counter++;
		}
	}
	return counter;
}
char convertCharIntoInvert(char letter) {
	return isupper(letter) ? tolower(letter) : toupper(letter);
}
int countLetterInTextNotSencetiveCase(string text, char letter) {
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == letter || text[i]== convertCharIntoInvert(letter))
		{
			counter++;
		}
	}
	return counter;
}

//another solution
short CountLetter(string S1, char Letter, bool MatchCase = true)
{
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}
	}
	return Counter;
}
int main()
{
	cout << countLetterInTextSencetiveCase("faisal OmaR BADaam", 'a');


}
