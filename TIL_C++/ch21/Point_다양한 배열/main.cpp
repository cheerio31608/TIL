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
Point::Point() {
	cout << "소멸자" << endl;
}
void Point::Print()
{
	cout << "x: " << x << " " << "y: " << y << endl;
}
//-------------------------Client의 시작------------------------------
enum { MAKE = 1, UPDATE, INQUIRE, EXIT};
void PrintMenu();
void MakePoint(Point* B, int& index, int n);
void Update(Point* B, int index);
void Inquire(Point* B, int index);
void Cleanup(Point* B);
int main()
{
	int n;
	cout << "객체의 개수를 입력하세요: ";
	cin >> n;
	Point* B = new Point[n];
	int choice;
	int index = 0;
	while (true) {
		PrintMenu();
		cout << "선택: ";
		cin >> choice;
		switch (choice)
		{
		case MAKE:
			MakePoint(B, index, n);
			break;
		case UPDATE:
			Update(B, index);
			break;
		case INQUIRE:
			Inquire(B, index);
			break;
		case EXIT:
			//delete
			return 0;
		default:
			cout << "선택이 틀렸습니다" << endl;
			break;
		}
	}
	//Point pt1; // 인자 없는 생성자 called. pt1.Point()
	//pt1.Print();
	//pt1.x = 50;
	//pt1.y = 50;
	//pt1.Print();
	//Point pt2(10, 100); // 인자 있는 생성자 called. pt2.Point(10,100)
	//pt2.x = 10;
	//pt2.y = 10;
	//pt2.Print();
	//Point pt3(pt2); // 복사 생성자 called. pt3.Point(pt2)
	//pt3.Print();
	return 0;
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