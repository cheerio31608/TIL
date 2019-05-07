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
	~Point();
	double getArea();
	void SetX(int v);
	void SetY(int v);
	int GetX();
	int GetY();
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
Point::~Point() {
	cout << "�Ҹ���" << endl;
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


//-------------------------Client�� ����------------------------------

int main()
{
	Point p1(50, 60);
	Point p2(8, 7);
	//cout << "pl.x: " << p1.x << endl; Private �̹Ƿ� ���� ������ �Ұ�
	cout << "p1.x: " << p1.GetX() << endl;



	//const int MAX = 3;
	//cout << "1 ���� ��ü�迭 ���" << endl;
	//cout << "2 ���� ��ü�迭 ���" << endl;
	//cout << "3 ���� ��ü ������ �迭" << endl;
	//Point* C[MAX];
	//int x, y;
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << i << "��° ����Ʈ �Է� (x y): ";
	//	cin >> x >> y;
	//	//�����ڷ� ��ü�����.
	//	C[i] = new Point(x, y);
	//}
	////���� ���̱�
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << i << "��° ����Ʈ ����: " << endl;
	//	cout << C[i]->getArea() << " ";
	//	cout << (*(C + i))->getArea() << " ";
	//	cout << (*C[i]).getArea() << " ";
	//	cout << (**(C + i)).getArea() << endl;
	//}
	//cout << "��ü ���� �Ҹ�" << endl;
	//for (int i = 0; i < MAX; i++)
	//{
	//	delete C[i]; C[i] = NULL;
	//}
	//return 0;
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