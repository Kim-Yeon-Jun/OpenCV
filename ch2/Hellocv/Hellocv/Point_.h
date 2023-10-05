template<typename _Tp> class Point_
{
public:
	Point_(); // x=0, y=0으로 초기화
	Point_(_Tp _x, _Tp _y);//(_x,_y)좌표를 인자로 받는 생성자, x=_x, y=_y로 초기화
	Point_(const Point_& pt);//복사 생성자. x=pt.x, y=pt.y로 초기화

	Point_& operator = (const Point_& pt); //대입 연산자 재정의
									 //Point::멤버함수
	_Tp dot(const Point_& pt) const; // 두 점 사이의 내적(dot product)을 계산하여 반환
	double ddot(const Point_& pt) const; //두 점 사이의 내적값을 double형으로 반환
	double cross(const Point_& pt) const; //두 점 사이의 외적(cross product)값을 반환

	bool inside(const Rect_<_Tp>& r) const;//점의 좌표가 사각형 r영역 안에 있으면 true 반환
	_Tp x, y; //멤버변수. x축좌표, y축좌표 나타냄
};
//다양한 자료형에 대해 Point_ 클래스 이름 재정의
typedef Point_<int>	Point2i;
//typedef Point_<int64>	Point2l;
typedef Point_<float> Point2f;
typedef Point_<double> Point2d;
typedef Point2i		Point;

/*
Point pt1; // 생성시에는 (0,0)을 나타냄
pt1.x = 5; pt1.y = 10;
Point pt2(10, 30);

사칙연산
pt1 = [5, 10]; pt2 = [10, 30]
Point pt3 = pt1 + pt2; //[15,40]
Point pt4 = pt1 * 2; //[10,20]
int d1 = pt1.dot(pt2); //350 : x좌표끼리의 합 + y좌표끼리의 합
bool b1 = (pt1 == pt2); //false
//점의 좌표 출력
cout << "pt1:" << pt1 << endl; 
cout << "pt2:" << pt2 << endl;
*/
