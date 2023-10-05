template<typename _Tp> class Point_
{
public:
	Point_(); // x=0, y=0���� �ʱ�ȭ
	Point_(_Tp _x, _Tp _y);//(_x,_y)��ǥ�� ���ڷ� �޴� ������, x=_x, y=_y�� �ʱ�ȭ
	Point_(const Point_& pt);//���� ������. x=pt.x, y=pt.y�� �ʱ�ȭ

	Point_& operator = (const Point_& pt); //���� ������ ������
									 //Point::����Լ�
	_Tp dot(const Point_& pt) const; // �� �� ������ ����(dot product)�� ����Ͽ� ��ȯ
	double ddot(const Point_& pt) const; //�� �� ������ �������� double������ ��ȯ
	double cross(const Point_& pt) const; //�� �� ������ ����(cross product)���� ��ȯ

	bool inside(const Rect_<_Tp>& r) const;//���� ��ǥ�� �簢�� r���� �ȿ� ������ true ��ȯ
	_Tp x, y; //�������. x����ǥ, y����ǥ ��Ÿ��
};
//�پ��� �ڷ����� ���� Point_ Ŭ���� �̸� ������
typedef Point_<int>	Point2i;
//typedef Point_<int64>	Point2l;
typedef Point_<float> Point2f;
typedef Point_<double> Point2d;
typedef Point2i		Point;

/*
Point pt1; // �����ÿ��� (0,0)�� ��Ÿ��
pt1.x = 5; pt1.y = 10;
Point pt2(10, 30);

��Ģ����
pt1 = [5, 10]; pt2 = [10, 30]
Point pt3 = pt1 + pt2; //[15,40]
Point pt4 = pt1 * 2; //[10,20]
int d1 = pt1.dot(pt2); //350 : x��ǥ������ �� + y��ǥ������ ��
bool b1 = (pt1 == pt2); //false
//���� ��ǥ ���
cout << "pt1:" << pt1 << endl; 
cout << "pt2:" << pt2 << endl;
*/
