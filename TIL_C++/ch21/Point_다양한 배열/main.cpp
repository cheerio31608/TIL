#include <iostream>
using namespace std;
class Point
{
public:
	//��� ����
	int x, y;
	//��� �Լ�
	void Print();
	//�����ڵ�� �Ҹ���
	Point();
	Point(int initx, int inity);
	Point(const Point& pt);
	
};
Point::Point()
{
	cout << "���� ���� ������" << endl;
	x = 0; y = 0;
}
Point::Point(int initx, int inity)
{
	cout << "���� �ִ� ������" << endl;
	x = initx; y = inity;
}
Point::Point(const Point& pt)
{
	cout << "���� ������" << endl;
	x = pt.x; y = pt.y;
}
Point::Point() {
	cout << "�Ҹ���" << endl;
}
void Point::Print()
{
	cout << "x: " << x << " " << "y: " << y << endl;
}
//-------------------------Client�� ����------------------------------
enum { MAKE = 1, UPDATE, INQUIRE, EXIT};
void PrintMenu();
void MakePoint(Point* B, int& index, int n);
void Update(Point* B, int index);
void Inquire(Point* B, int index);
void Cleanup(Point* B);
int main()
{
	int n;
	cout << "��ü�� ������ �Է��ϼ���: ";
	cin >> n;
	Point* B = new Point[n];
	int choice;
	int index = 0;
	while (true) {
		PrintMenu();
		cout << "����: ";
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
			cout << "������ Ʋ�Ƚ��ϴ�" << endl;
			break;
		}
	}
	//Point pt1; // ���� ���� ������ called. pt1.Point()
	//pt1.Print();
	//pt1.x = 50;
	//pt1.y = 50;
	//pt1.Print();
	//Point pt2(10, 100); // ���� �ִ� ������ called. pt2.Point(10,100)
	//pt2.x = 10;
	//pt2.y = 10;
	//pt2.Print();
	//Point pt3(pt2); // ���� ������ called. pt3.Point(pt2)
	//pt3.Print();
	return 0;
}

void PrintMenu()
{
	cout << "-----------MENU------------" << endl;
	cout << "1(Point ��ǥ �Է� �ޱ�)" << endl;
	cout << "2(Point ��ǥ ������Ʈ)" << endl;
	cout << "3(Point ��ü ��ȸ)" << endl;
	cout << "4(���α׷� ����)" << endl;
}
void MakePoint(Point* B, int& index, int n)
{
	//����ڿ��� x, y ��ǥ�� �Է¹޾� �迭�� ä���.
	int x, y;
	if (index < n) {
		cout << "x, y �Է�: ";
		cin >> x >> y;
		B[index].x = x;
		B[index].y = y;
		index++;
	}
	else {
		cout << "�ִ�" << n << "���� Point�� ��ǥ�� �Է��� �� �ִ�." << endl;
	}
}
void Update(Point* B, int index)
{
	 //���� Point�� ������ n���̴�. ���° Point�� ������Ʈ�� ���ϳ�? (index ������ �Է¹��� �� �ִ�.)
}
void Inquire(Point* B, int index)
{

}
void Cleanup(Point* B)
{

}