
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


bool isPlindromeMatrix(int arr[100][100], int lenthR, int lenthC) 
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC/2; j++)
		{
			if (arr[i][j] != arr[i][lenthC - j - 1])
				return false;
		}
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[100][100] = { {3,2,3},{4,3,4},{5,0,5} };
	int lenthR = 3;
	int lenthC = 3;
	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	cout << endl;
	cout << isPlindromeMatrix(Matrix1, lenthR, lenthC);
	

}

