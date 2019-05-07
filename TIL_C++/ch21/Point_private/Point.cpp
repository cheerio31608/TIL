#include <iostream>
using namespace std;
class Point
{
public:
	//멤버 변수
	int x, y;
	//멤버 함수
	void Print();
	//생성자들과 소멸자
	Point();
	Point(int initx, int inity);
	Point(const Point& pt);
	~Point();
	double getArea();
	void SetX(int v);
	void SetY(int v);
	int GetX();
	int GetY();
};
Point::Point()
{
	cout << "인자 없는 생성자" << endl;
	x = 0; y = 0;
}
Point::Point(int initx, int inity)
{
	cout << "인자 있는 생성자" << endl;
	x = initx; y = inity;
}
Point::Point(const Point& pt)
{
	cout << "복사 생성자" << endl;
	x = pt.x; y = pt.y;
}
Point::~Point() {
	cout << "소멸자" << endl;
}
double Point::getArea()
{
	return 20;
}

void Point::Print()
{
	cout << "x: " << x << " " << "y: " << y << endl;
}
void Point::SetX(int v) {
	this->x = v;
}
void Point::SetY(int v) {
	this->y = v;
}
int Point::GetX() {
	return this->x;
}
int Point::GetY() {
	return this->y;
}


//-------------------------Client의 시작------------------------------

int main()
{
	Point p1(50, 60);
	Point p2(8, 7);
	//cout << "pl.x: " << p1.x << endl; Private 이므로 임의 엑세스 불가
	cout << "p1.x: " << p1.GetX() << endl;



	//const int MAX = 3;
	//cout << "1 정적 객체배열 방식" << endl;
	//cout << "2 동적 객체배열 방식" << endl;
	//cout << "3 정적 객체 포인터 배열" << endl;
	//Point* C[MAX];
	//int x, y;
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << i << "번째 포인트 입력 (x y): ";
	//	cin >> x >> y;
	//	//생성자로 객체만들기.
	//	C[i] = new Point(x, y);
	//}
	////면적 보이기
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << i << "번째 포인트 면적: " << endl;
	//	cout << C[i]->getArea() << " ";
	//	cout << (*(C + i))->getArea() << " ";
	//	cout << (*C[i]).getArea() << " ";
	//	cout << (**(C + i)).getArea() << endl;
	//}
	//cout << "객체 각각 소멸" << endl;
	//for (int i = 0; i < MAX; i++)
	//{
	//	delete C[i]; C[i] = NULL;
	//}
	//return 0;
}

void PrintMenu()
{
	cout << "-----------MENU------------" << endl;
	cout << "1(Point 좌표 입력 받기)" << endl;
	cout << "2(Point 좌표 업데이트)" << endl;
	cout << "3(Point 전체 조회)" << endl;
	cout << "4(프로그램 종료)" << endl;
}
void MakePoint(Point* B, int& index, int n)
{
	//사용자에게 x, y 좌표를 입력받아 배열에 채운다.
	int x, y;
	if (index < n) {
		cout << "x, y 입력: ";
		cin >> x >> y;
		B[index].x = x;
		B[index].y = y;
		index++;
	}
	else {
		cout << "최대" << n << "개의 Point의 좌표를 입력할 수 있다." << endl;
	}
}
void Update(Point* B, int index)
{
	 //현재 Point의 개수가 n개이다. 몇번째 Point의 업데이트를 원하나? (index 까지만 입력받을 수 있다.)
}
void Inquire(Point* B, int index)
{

}
void Cleanup(Point* B)
{

}