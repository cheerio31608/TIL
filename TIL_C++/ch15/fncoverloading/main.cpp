#include <iostream>
using namespace std;
void Ambiguous(int a, int b);
void Ambiguous(int a);
void WhichOne(float f);
void WhichOne(double f);
void WhichOne(int f);
void SameSig(int i);
void SameSig(int* ip);
void SameSig(int& i);

int main()
{
	Ambiguous(50);
	Ambiguous(-50.60);
	WhichOne(5);
	WhichOne(5.0f);
	int k = 100;
	SameSig(k);
	//�����ε�� �Լ�
	//"SameSig"�� �ν��Ͻ� �� �� �� �̻��� �μ� ��ϰ� ��ġ�մϴ�.
	SameSig(&k);

	return 0;
}


void Ambiguous(int a, int b);
{
	cout << "I'm in mbiguous(int a, int b) " << endl;

}
void Ambiguous(int a); 
{
	cout << "I'm in mbiguous(int a) " << endl;
}
void WhichOne(float f);
{
	cout << "I'm in WhichOne(float f) " << endl;
}
void WhichOne(double f);
{
	cout << "I'm in WhichOne(double f) " << endl;
}
void WhichOne(int f);
void SameSig(int i);
void SameSig(int* ip);
void SameSig(int& i);

void SameSig(int & i)
{
}
