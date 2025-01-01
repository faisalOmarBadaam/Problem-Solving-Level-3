
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
			cout << setw(3) << arr[i][j] << "	";
		}
		cout << endl;
	}
}
void fillOrderedArray(int arr[100][100], int lenthR, int lenthC)
{
	int counter = 1;
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			arr[i][j] = counter;
			counter++;
		}
	}
}
void transposeArray(int arr[100][100], int transposeArr[100][100], int coulms, int rows) {
	int temp=0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coulms; j++)
		{
			
			transposeArr[i][j] = arr[j][i];
			
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int arr[100][100];
	int arr2[100][100];
	int lenthR = 3;
	int lenthC = 3;
	fillOrderedArray(arr, lenthR, lenthC);
	printArray(arr, lenthR, lenthC);
	transposeArray(arr,arr2, lenthC, lenthR);
	cout << endl;
	printArray(arr2, lenthC, lenthR);




}

