template<typename _Tp> class Rect_
{
public:
    Rect_();                                                  // 기본 생성자. 모든 멤버 변수를 0으로 초기화
    Rect_(_Tp _x, _Tp _y, _Tp _width, _Tp _height);           // (_x, _y, _width, _height) 사각형 정보를 인자로 받는 생성자로 x=_x, y=_y, width=_width, height=_height 로 초기화
    Rect_(const Recdt_& r);                                   // 복사 생성자. x = r.x, y = r.y, width = r.width, height = r.height로 초기화
    Rect_(cosnt Point_<_Tp>& org, const Size_<_Tp>& sz);      // 좌측 상단 점의 좌표와 사각형의 크기 정보를 인자로 받는 생성자
    Rect_(const Point_<_Tp>& pt1, const Point_<_Tp>& pt2);    // 사각형에서 서로 대각 위치에 있는 두 점의 좌표를 인자로 받는 생성자

    Rect_& operator = (const Rect_& r); // 대입 연산자 재정의
                             // Rect::() 멤버 함수
    Point_<_Tp> t1() const;  // 사각형의 좌측 상단 점의 좌표 반환
    Point_<_Tp> br() const;  // 사각형의 우측 하단 점의 좌표 반환
    Size_<_Tp> size() const; // 사각형의 크기 정보 반환
    _Tp area() const;  // 사각형의 면적(width x height) 반환
    bool empty() const;// 유효하지 않은 사각형이면 true 반환
    bool contains(const Point_<_Tp>& pt) const; // 인자로 전달된 pt 점이 사각형 내부에 있으면 true 반환

    _Tp x, y, width, height); // 멤버 변수로 x, y 는 사각형 좌측 상단 점의 좌표, width, height는 사각형의 가로와 세로 크기를 나타냄
};

//다양한 자료형에 대한 Rect_클래스 이름 재정의
typedef Rect_<int>     Rect2i;            
typedef Rect_<float>   Rect2f;                   
typedef Rect_<double>  Rect2d;
typedef Rect2i         Rect;


/*
사칙연산
Rect rc1;  //[0x0 from(0,0)]
Rect rc2(10, 10, 60, 40); //[60x40 from(10,10)]
Rect rc3 = rc1 + Size(50, 40); // [50x40 from(0,0)]
Rect rc4 = rc2 + Point(10, 10); //[60x40 from(20,20)]

논리연산
Rect rc5 = rc3 & rc4;//[30x20 from (20, 20)] :겹치는 영역 반환
Rect rc6 = rc3 | rc4;//[80x60 from (0, 0)] : 합집합을 포함시키는 최소의 사각형 영역 반환
*/
 