#include "Rect_.h"
#include "Point_.h"
#include "Size_.h"
//템플릿 클래스가 아님. 모든 정보를 float 자료형을 사용하여 표현
class RotatedRect
{
public:
	RotatedRect();//기본 생성자. 모든 멤버 변수를 0으로 초기화
	RotatedRect(const Point2f& _center, const Size2f& _size, float _angle); // center = _center, size=_size, angle = _angle로 초기화
	RotatedRect(const Point2f& point1, const Point2f& point2, const Point2f& point3);//인자로 전달된 세 점은 회전된 사각형의 세 꼭지점 좌표를 나타냄

	void points(Point2f pts[]) const; //회전된 사각형은 네 꼭지점 좌표를 pts인자에 저장
	Rect boundingRect() const;//회전된 사각형을 포함하는 최소 크기의 사각형 정보를 반환(정수 단위)
	Rect_<float> boundingRect2f() const; // 회전된 사각형을 포함하는 최소 크기의 사각형 정보를 반환(실수 단위)

	//멤버변수. 각각 사각형의 중심좌표, 사각형의 크기, 시계방향 회전 각도
	Point2f center;
	Size2f size;
	float angle;

};

RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);

//회전된 사각형의 네 꼭지점 좌표가 pts배열에 저장됨
Point2f pts[4];
rr1.points(pts);

//바운딩 박스 : 회전된 사각형을 감싸는 최소 크기의 사각형
Rect br = rr1.boundingRect(); // 사각형의 중심점과 크기 정보가 반환됨

