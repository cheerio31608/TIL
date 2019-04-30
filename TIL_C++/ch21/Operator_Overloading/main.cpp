#include <iostream>
using namespace std;
class Power {
public:
	int kick, punch;
	Power();
	Power(int k, int p);
	Power(const Power& p);
	~Power();
	void Show();
	Power& operator=(const Power& obj); // 대입 연산자
	bool operator==(const Power& obj); // == 연산자
	Power operator+(const Power& obj); // + 연산자
	Power& operator+=(const Power& obj); // += 연산자
	Power& operator+=(int i); // += 연산자 with int



};
Power::Power() 
{
	this->kick = 0; this->punch = 0;
}
Power::Power(int k, int p)
{
	this->kick = k; this->punch = p;
}
Power::Power(const Power& P)
{
	this->kick = P.kick; this->punch = P.punch;
}
Power::~Power()
{

}
void Power::Show()
{
	cout << "kick: " << this->kick << " punch: " << this->punch << endl;
}
Power& Power::operator=(const Power& obj)
{
	//얕은 대입 연산자 overloading
	if (this != &obj)
	{
		this->kick = obj.kick;
		this->punch = obj.punch;
	}
	return *this;// 이 객체의 주소를 리턴
}
bool Power::operator==(const Power& obj) // == 연산자
{
	if (this->kick == obj.kick && this->punch == obj.punch)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Power Power::operator+(const Power& obj) // + 연산자
{
	Power temp;
	temp.kick = this->kick + obj.kick;
	temp.punch = this->punch + obj.punch;
	return temp;
}
Power& Power::operator+=(const Power& obj) // += 연산자
{
	this->kick += obj.kick;
	this->punch += obj.punch;
	return *this;
}
Power& Power::operator+=(int i) // += 연산자 with int
{
	this->kick += i;
	this->punch += i;
	return *this;
}


int main()
{
	Power A(3, 5), B(4, 6), C(5, 50);
	C = A + B;
	C.Show();
	if (A == B)
	{
		cout << "같은 객체" << endl;
	}
	A = B;
	if (A == B)
	{
		cout << "같은 객체" << endl;
	}
	else
	{
		cout << "다른 객체" << endl;
	}
	A += B;
	A.Show();
	A += 5;
	A.Show();

	return 0;
}