//�ʱ���迡 ������ ���� ���� ����!
#include <iostream>
#include "student.h"
using namespace std;
void func1();
void func2();
int main()
{
	//static �Լ��� �θ� ���� class��:: 
	Student::PrintStdCount(); 
	Student s("�ڵ���", 960);
	Student::PrintStdCount();
	func2();
	Student::PrintStdCount();
	return 0;
}
void func1() {
	Student s("������", 314);
	Student s2("������", 733);
	Student::PrintStdCount();
}
void func2() {
	Student s("������", 946);
	func1();
	Student::PrintStdCount();
}