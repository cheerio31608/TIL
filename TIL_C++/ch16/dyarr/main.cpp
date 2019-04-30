#include <iostream>
using namespace std;
const int MAX = 10;
int* func(int n);
int main()
{	

	/*int* p = new int;
	*p = 337;
	cout << "*p : " << *p << endl;
	delete p; p = NULL;
	delete p;*/

	/*char* cp = new char[20];
	cout << "sizeof(cp) : " << sizeof(cp) << endl;
	cout << "strlen(cp) : " << strlen(cp) << endl;
	cout << "(void*)cp : " << (void*)cp << endl;
	cout << "cp : " << cp << endl;
*/

	int size;
	cout << "몇 개의 정수를 입력하시겠소?";
	cin >> size;
	//size 만큼의 메모리를 확보해서 포인터를 return  하는 함수
	//함수의 이름 : int func(int n);
	int* ip = func(size);

	//int* ip = new int[size];
	cout << "정수 입력 : ";
	int total = 0;
	float avg;
	for (int i = 0; i < size; i++)
	{
		cin >> *(ip + i);
		total = total + *(ip + 1);
	}
	//total 계산해서 평균 보일 것.
	avg = (float)total / (float)size;
	cout << "avg : " << avg << endl;
	cout << "delete전 ip : " << ip << endl;
	cout << "delete전 *ip : " << *ip << endl;
	delete[] ip; ip = NULL;
	cout << "delete후 ip : " << ip << endl;
	//cout << "delete후 *ip : " << *ip << endl;
	//delete[] ip;
	
	return 0;
}
int* func(int n)
{
	int* temp = new int[n];
	return temp;
}