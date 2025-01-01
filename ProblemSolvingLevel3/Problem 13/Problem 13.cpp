
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
bool isidentity(int arr1[100][100],int lenthR) {
	for (int i = 0; i < lenthR; i++)
	{
		
			if (arr1[i][i]!=1) {
				return false;
			}
		
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int Matrix1[100][100] = { {1,0,0},{0,1,0},{0,0,0} };
	int lenthR = 3;
	int lenthC = 3;

	cout << "first Mtrix:" << endl;
	printArray(Matrix1, lenthR, lenthC);
	if (isidentity(Matrix1, lenthR))
	{
		cout << endl << "identity matrix";
	}
	else
	{
		cout << endl << "not identity matrix";

	}








}

