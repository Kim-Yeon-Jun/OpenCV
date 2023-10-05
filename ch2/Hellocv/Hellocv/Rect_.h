template<typename _Tp> class Rect_
{
public:
    Rect_();                                                  // �⺻ ������. ��� ��� ������ 0���� �ʱ�ȭ
    Rect_(_Tp _x, _Tp _y, _Tp _width, _Tp _height);           // (_x, _y, _width, _height) �簢�� ������ ���ڷ� �޴� �����ڷ� x=_x, y=_y, width=_width, height=_height �� �ʱ�ȭ
    Rect_(const Recdt_& r);                                   // ���� ������. x = r.x, y = r.y, width = r.width, height = r.height�� �ʱ�ȭ
    Rect_(cosnt Point_<_Tp>& org, const Size_<_Tp>& sz);      // ���� ��� ���� ��ǥ�� �簢���� ũ�� ������ ���ڷ� �޴� ������
    Rect_(const Point_<_Tp>& pt1, const Point_<_Tp>& pt2);    // �簢������ ���� �밢 ��ġ�� �ִ� �� ���� ��ǥ�� ���ڷ� �޴� ������

    Rect_& operator = (const Rect_& r); // ���� ������ ������
                             // Rect::() ��� �Լ�
    Point_<_Tp> t1() const;  // �簢���� ���� ��� ���� ��ǥ ��ȯ
    Point_<_Tp> br() const;  // �簢���� ���� �ϴ� ���� ��ǥ ��ȯ
    Size_<_Tp> size() const; // �簢���� ũ�� ���� ��ȯ
    _Tp area() const;  // �簢���� ����(width x height) ��ȯ
    bool empty() const;// ��ȿ���� ���� �簢���̸� true ��ȯ
    bool contains(const Point_<_Tp>& pt) const; // ���ڷ� ���޵� pt ���� �簢�� ���ο� ������ true ��ȯ

    _Tp x, y, width, height); // ��� ������ x, y �� �簢�� ���� ��� ���� ��ǥ, width, height�� �簢���� ���ο� ���� ũ�⸦ ��Ÿ��
};

//�پ��� �ڷ����� ���� Rect_Ŭ���� �̸� ������
typedef Rect_<int>     Rect2i;            
typedef Rect_<float>   Rect2f;                   
typedef Rect_<double>  Rect2d;
typedef Rect2i         Rect;


/*
��Ģ����
Rect rc1;  //[0x0 from(0,0)]
Rect rc2(10, 10, 60, 40); //[60x40 from(10,10)]
Rect rc3 = rc1 + Size(50, 40); // [50x40 from(0,0)]
Rect rc4 = rc2 + Point(10, 10); //[60x40 from(20,20)]

������
Rect rc5 = rc3 & rc4;//[30x20 from (20, 20)] :��ġ�� ���� ��ȯ
Rect rc6 = rc3 | rc4;//[80x60 from (0, 0)] : �������� ���Խ�Ű�� �ּ��� �簢�� ���� ��ȯ
*/
 