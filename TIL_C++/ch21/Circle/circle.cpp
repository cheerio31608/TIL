#include <iostream>
using namespace std;
class Circle {
public:
	int radious;
	Circle();
	Circle(int r);
	Circle(const Circle &c);
	~Circle();
	double getArea();
	void setRadious(int r);

};

Circle::Circle() {
	cout << "���� ���� ������ " << endl;
	this -> radious = 1;
}
Circle::Circle(int r) {
	cout << "���� �ִ� ������ " << endl;
	this -> radious = r;
}
Circle::~Circle(){
	cout << "�Ҹ��� " << endl;
}
Circle::Circle(const Circle &c) {
	cout << "���� ������ " << endl;
	this -> radious = c.radious;
}
double Circle::getArea(){
	return this->radious * this->radious * 3.14;
}
void Circle::setRadious(int r) {
	this->radious = r;
}
//Client�� ����
int main(){
	cout << "�� ���� Circle�� ����ڼ�?: ";
	int n;
	cin >> n;
	Circle* B = new Circle[n];
	for (int i = 0; i < n; i++)
	{
		cout << "�Է�: ";
		cin >> B[i].radious;
	}
	cout << "���� ���̱�" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << "��° Circle�� ����: " << (B+i)->getArea() << endl;
		cout << i << "��° Circle�� ����: " << B[i].getArea() << endl;
		cout << i << "��° Circle�� ����: " << (*(B+i)).getArea() << endl;
		
	}

	Circle* p1 = B;
	for (int i = 0; i < n; i++)
	{
		cout << i << "��° Circle�� ����: " << (*p1).getArea() << endl;
		cout << i << "��° Circle�� ����: " << p1->getArea() << endl;
		p1++;
	}
	delete[] B; B = NULL;
	//cout << sizeof(Circle) << "\n";
	//Circle A[3]; // ���� ���� ������ 3�� called
	//Circle B[3] = { Circle(10), Circle(5), Circle(7) }; //���� �ִ� ������ 3�� called
	////A�� 1��° ����� radious�� 22�� �ٲٱ�
	//A[1].setRadious(22);
	//Circle* p;
	//p = B;
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "Circle" << i << "������ ������" << p->getArea() << endl;
	//	p++;//p�� sizeof(Circle)��ŭ ����.
	//}

	
	/*Circle donut;
	Circle pizza(30);
	cout << donut.getArea() << endl;
	Circle* p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
	p = &pizza;
	cout << p->getArea() << endl;*/


	
	return 0;
}