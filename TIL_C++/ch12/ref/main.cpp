#include <iostream>
using namespace std;
int main()
{
	int target = 20;
	int& ref = target;
	int* ip = &target;
	cout << "ip : " << ip << endl;
	cout << "*ip : " << *ip << endl;
	cout << "&ref : " << &ref << endl;
	cout << "&target : " << &target << endl;
	ref = 100;
	cout << "ref : " << ref << endl;
	cout << "target : " << target << endl;
	cout << "*ip : " << *ip << endl;
	
	/*int a = 50;
	int*p = &a;
	int** pp = &p;
	cout << "&a : " << &a << endl;
	cout << "p : " << p << endl;
	cout << "&p : " << &p << endl;
	cout << "pp : " << pp << endl;
	cout << "&pp : " << &pp << endl;
	cout << "*p : " << *p << endl;
	cout << "**pp : " << **pp << endl;*/



	return 0;
}
