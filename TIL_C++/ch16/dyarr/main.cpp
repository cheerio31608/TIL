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
	cout << "�� ���� ������ �Է��Ͻðڼ�?";
	cin >> size;
	//size ��ŭ�� �޸𸮸� Ȯ���ؼ� �����͸� return  �ϴ� �Լ�
	//�Լ��� �̸� : int func(int n);
	int* ip = func(size);

	//int* ip = new int[size];
	cout << "���� �Է� : ";
	int total = 0;
	float avg;
	for (int i = 0; i < size; i++)
	{
		cin >> *(ip + i);
		total = total + *(ip + 1);
	}
	//total ����ؼ� ��� ���� ��.
	avg = (float)total / (float)size;
	cout << "avg : " << avg << endl;
	cout << "delete�� ip : " << ip << endl;
	cout << "delete�� *ip : " << *ip << endl;
	delete[] ip; ip = NULL;
	cout << "delete�� ip : " << ip << endl;
	//cout << "delete�� *ip : " << *ip << endl;
	//delete[] ip;
	
	return 0;
}
int* func(int n)
{
	int* temp = new int[n];
	return temp;
}