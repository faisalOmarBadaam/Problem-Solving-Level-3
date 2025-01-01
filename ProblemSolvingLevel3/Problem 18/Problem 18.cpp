
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
				return ++counter;
			}
		}
	}
	return counter;
}
bool isNumberInMatrix(int arr[100][100], int lenthR, int lenthC,int EnteredNumber)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (arr[i][j] == EnteredNumber)
			{
				return true;
			}
		}
	}
	return false;
}
void isIntersectedNumber(int arr[100][100],int arr2[100][100], int lenthR, int lenthC) 
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (isNumberInMatrix(arr, lenthR, lenthC, arr2[i][j])) 
			{
				cout << arr2[i][j] << " ";


			}
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[100][100] = { {1,2,3},{3,3,9},{9,9,9} };
	int Matrix2[100][100] = { {1,2,3},{4,5,6},{1,2,3} };

	int lenthR = 3;
	int lenthC = 3;
	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	cout << endl;
	cout << "second Mtrix:" << endl;
	printArray(Matrix2, lenthR, lenthC);
	isIntersectedNumber(Matrix1, Matrix2, lenthR, lenthC);










}

