#include <iostream>
using namespace std;
void sub(int i, int* p, int& r);
void swap_callbyValue(int x, int y);
void swap_callbyPointer(int* xp, int* yp);
void swap_callbyReference(int& xr, int& yr);
void usingarr(char* cp, int n);
int main()
{
	char A[20] = "Hello World!";
	usingarr(A, 20);
	cout << A << endl;

	/*int u, v;
	cout << "ó�� �� : ";
	cin >> u;
	cout << "�ι�° �� : ";
	cin >> v;
	swap_callbyValue(u, v);
	cout << "u : " << u << " v : " << v << endl;
	swap_callbyPointer(&u, &v);
	cout << "u : " << u << " v : " << v << endl;
	swap_callbyReference(u, v);
	cout << "u : " << u << " v : " << v << endl;*/
	/*int a = 1, b = 2, c = 5;
	sub(a, &b, c);
	cout << "a : " << a << "b : " << b << "c : " << c << endl;
	return 0;*/
}
void usingarr(char* cp, int n)
{
	cout << cp << endl;
	*(cp + 11) = '?'; // cp[12] = '?' �� ����
}

void swap_callbyValue(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void swap_callbyPointer(int* xp, int* yp)
{
	int temp;
	temp = *yp;
	*yp = *xp;
	*xp = temp;
}
void swap_callbyReference(int& xr, int& yr)
{
	int temp;
	temp = yr;
	yr = xr;
	xr = temp;
}



void sub(int i, int* p, int& r)
{
	i = 10;
	*p = 20;
	r = 50;
}

