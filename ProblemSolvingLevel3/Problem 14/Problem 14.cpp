
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
int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}
void fillRandomArray(int arr[100][100], int lenthR, int lenthC)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			arr[i][j] = randomNumber(1, 10);
		}
	}
}
bool isScaler(int arr1[100][100], int lenthR, int lenthC) {
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			if (i==j)
			{
				if (arr1[i][j] != arr1[0][0]) {
					return false;
				}
			}
			
			else
			{
				if (arr1[i][j] != 0) {
					return false;
				}
			}

				
			
		}
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	int Matrix1[100][100] = { {9,0,0},{0,9,0},{0,0,9} };
	int lenthR = 3;
	int lenthC = 3;

	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	if (isScaler(Matrix1, lenthR, lenthC))
	{
		cout << endl << "scaler matrix";
	}
	else
	{
		cout << endl << "not scaler matrix";

	}








}

