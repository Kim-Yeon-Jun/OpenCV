#include "Rect_.h"
#include "Point_.h"
#include "Size_.h"
//���ø� Ŭ������ �ƴ�. ��� ������ float �ڷ����� ����Ͽ� ǥ��
class RotatedRect
{
public:
	RotatedRect();//�⺻ ������. ��� ��� ������ 0���� �ʱ�ȭ
	RotatedRect(const Point2f& _center, const Size2f& _size, float _angle); // center = _center, size=_size, angle = _angle�� �ʱ�ȭ
	RotatedRect(const Point2f& point1, const Point2f& point2, const Point2f& point3);//���ڷ� ���޵� �� ���� ȸ���� �簢���� �� ������ ��ǥ�� ��Ÿ��

	void points(Point2f pts[]) const; //ȸ���� �簢���� �� ������ ��ǥ�� pts���ڿ� ����
	Rect boundingRect() const;//ȸ���� �簢���� �����ϴ� �ּ� ũ���� �簢�� ������ ��ȯ(���� ����)
	Rect_<float> boundingRect2f() const; // ȸ���� �簢���� �����ϴ� �ּ� ũ���� �簢�� ������ ��ȯ(�Ǽ� ����)

	//�������. ���� �簢���� �߽���ǥ, �簢���� ũ��, �ð���� ȸ�� ����
	Point2f center;
	Size2f size;
	float angle;

};

RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);

//ȸ���� �簢���� �� ������ ��ǥ�� pts�迭�� �����
Point2f pts[4];
rr1.points(pts);

//�ٿ�� �ڽ� : ȸ���� �簢���� ���δ� �ּ� ũ���� �簢��
Rect br = rr1.boundingRect(); // �簢���� �߽����� ũ�� ������ ��ȯ��

