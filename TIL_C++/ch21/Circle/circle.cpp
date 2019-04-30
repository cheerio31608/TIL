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
	cout << "인자 없는 생성자 " << endl;
	this -> radious = 1;
}
Circle::Circle(int r) {
	cout << "인자 있는 생성자 " << endl;
	this -> radious = r;
}
Circle::~Circle(){
	cout << "소멸자 " << endl;
}
Circle::Circle(const Circle &c) {
	cout << "복사 생성자 " << endl;
	this -> radious = c.radious;
}
double Circle::getArea(){
	return this->radious * this->radious * 3.14;
}
void Circle::setRadious(int r) {
	this->radious = r;
}
//Client의 시작
int main(){
	cout << "몇 개의 Circle을 만들겠소?: ";
	int n;
	cin >> n;
	Circle* B = new Circle[n];
	for (int i = 0; i < n; i++)
	{
		cout << "입력: ";
		cin >> B[i].radious;
	}
	cout << "면적 보이기" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i << "번째 Circle의 면적: " << (B+i)->getArea() << endl;
		cout << i << "번째 Circle의 면적: " << B[i].getArea() << endl;
		cout << i << "번째 Circle의 면적: " << (*(B+i)).getArea() << endl;
		
	}

	Circle* p1 = B;
	for (int i = 0; i < n; i++)
	{
		cout << i << "번째 Circle의 면적: " << (*p1).getArea() << endl;
		cout << i << "번째 Circle의 면적: " << p1->getArea() << endl;
		p1++;
	}
	delete[] B; B = NULL;
	//cout << sizeof(Circle) << "\n";
	//Circle A[3]; // 인자 없는 생성자 3번 called
	//Circle B[3] = { Circle(10), Circle(5), Circle(7) }; //인자 있는 생성자 3번 called
	////A의 1번째 요소의 radious를 22로 바꾸기
	//A[1].setRadious(22);
	//Circle* p;
	//p = B;
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "Circle" << i << "번쨰의 면적은" << p->getArea() << endl;
	//	p++;//p는 sizeof(Circle)만큼 증가.
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