#include <iostream>
using namespace std;
int main()
{
	
	double a = -999, b = -888, c = -777;
	double* pArray[3];
	pArray[0] = &a;
	pArray[1] = &b;
	pArray[2] = &c;
	//배열 이름을 사용한 index 표현으로 a, b, c를 출력하자
	for (int i = 0; i < 3; i++)
	{
		cout << *pArray[i] << endl;
	}
	//배열 이름을 이용한 포인터 표현으로 a, b, c를 출력하자
	for (int i = 0; i < 3; i++)
	{
		cout << **(pArray + i) << endl;
	}
	
	//int A[10] = { -999, -888, -777, -666, -555 };
	//int* p = A;
	//for (int i = 0; i < 10; i++)
	//{
	//	//*++p = i * i; memory around A is corrupted
	//	*p++ = i * i;
	//	//* dereferencing
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << A[i] << " ";
	//}

	return 0;
}