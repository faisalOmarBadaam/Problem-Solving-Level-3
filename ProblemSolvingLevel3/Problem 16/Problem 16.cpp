
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

int countAnumberInMatrix(int arr1[100][100], int lenthR, int lenthC, int EnteredNumber) {
	int counter = 0;
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (arr1[i][j] == EnteredNumber)
			{
				counter++;
			}
		}
	}
	return counter;
}
bool isSparcceMatrix(int arr[100][100], int lenthR, int lenthC) 
{
	return countAnumberInMatrix(arr, lenthR, lenthC,0) > (lenthC * lenthR)/2;
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[100][100] = { {9,0,0},{0,0,9},{9,9,9} };
	int lenthR = 3;
	int lenthC = 3;
	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	if (isSparcceMatrix(Matrix1,lenthR,lenthC))
	{
		cout <<endl <<"it is sparec Matrix" << endl;
	}
	else
	{
		cout << endl << "it is not sparec Matrix" << endl;

	}
	









}

