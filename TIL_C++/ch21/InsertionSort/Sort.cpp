#include <iostream>
#include <iomanip>
using namespace std;
const int MAX = 6;
void InsertionSort(int* p, int lastindex);
int main()
{
	int A[MAX] = { 23,78,45,8,32,56 };
	cout << "Sort 되지 않은 배열: " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << setw(3) << A[i];
	}
	cout << endl;
	InsertionSort(A, MAX - 1);
	cout << "Sort 된 배열: " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << setw(3) << A[i];
	}
	return 0;
}
void InsertionSort(int* A, int lastindex)
{
	int current;
	int hold;
	int walker;
	for (current = 1; current <= lastindex; current++)
	{
		hold = A[current];
		for (walker = current - 1; walker >= 0 && hold < A[walker]; walker--)
		{
			A[walker + 1] = A[walker];
		}//for(walker = current-1; walker >=0 && hold < A[walker]; walker--)
		A[walker + 1] = hold;
	}//for(current = 1; current <= lastindex; current++)

}