
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
void printColumn(int arr[100][100],int column,int lenthR) {
	for (int i = 0; i < lenthR; i++)
	{
		cout << arr[i][column] << "  ";
	}
}
void printRow(int arr[100][100], int lenthC, int row) {
	for (int i = 0; i < lenthC; i++)
	{
		cout << arr[row][i] << "  ";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int arr[100][100];
	int lenthR = 3;
	int lenthC = 3;
	fillRandomArray(arr, lenthR, lenthC);
	cout << "first Mtrix:" << endl;
	printArray(arr, lenthR, lenthC);
	cout << "middle row:" << endl;
	printRow(arr, lenthC, 1);

	cout <<endl <<"middle coulmn:" << endl;
	printColumn(arr, 1, lenthR);






}

