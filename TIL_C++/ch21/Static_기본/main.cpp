//필기시험에 나오기 좋은 문제 유형!
#include <iostream>
#include "student.h"
using namespace std;
void func1();
void func2();
int main()
{
	//static 함수를 부를 때는 class명:: 
	Student::PrintStdCount(); 
	Student s("박동석", 960);
	Student::PrintStdCount();
	func2();
	Student::PrintStdCount();
	return 0;
}
void func1() {
	Student s("유인종", 314);
	Student s2("나동민", 733);
	Student::PrintStdCount();
}
void func2() {
	Student s("김진근", 946);
	func1();
	Student::PrintStdCount();
}