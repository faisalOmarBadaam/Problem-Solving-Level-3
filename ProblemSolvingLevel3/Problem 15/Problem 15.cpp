
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printArray(int arr[100][100], int lenthR, int lenthC)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int countAnumberInMatrix(int arr1[100][100], int lenthR, int lenthC,int EnteredNumber) {
	int counter=0;
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (arr1[i][j]==EnteredNumber)
			{
				counter++;
			}
		}
	}
	return counter;
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[100][100] = { {9,0,0},{0,9,0},{9,9,9} };
	int lenthR = 3;
	int lenthC = 3;
	int enteredNumber = 9;
	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	cout <<endl<< "entered Number is:" << enteredNumber << endl;
	cout << "count of enterd Number is:" << countAnumberInMatrix(Matrix1,lenthR,lenthC,enteredNumber) << endl;









}

