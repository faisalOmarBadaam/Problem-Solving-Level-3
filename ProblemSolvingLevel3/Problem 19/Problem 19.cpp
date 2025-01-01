
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

int maxNumberInArray(int arr[100][100], int lenthR, int lenthC) {
	int max = arr[0][0];
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (max<arr[i][j])
			{
				max = arr[i][j];
			}
		}
		
	}

	return max;
}
int minNumberInArray(int arr[100][100], int lenthR, int lenthC) {
	int min = arr[0][0];
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}

	}

	return min;
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[100][100] = { {99,2,3},{3,3,9},{9,0,9} };
	int lenthR = 3;
	int lenthC = 3;
	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	cout << endl;
	cout << "max = " << maxNumberInArray(Matrix1, lenthR, lenthC);
	cout << endl;
	cout << "min = " << minNumberInArray(Matrix1, lenthR, lenthC);

}

