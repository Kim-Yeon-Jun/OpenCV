template<typename _Tp> class Size_
{
public:
	Size_(); //기본생성자. witdh=0, height=0으로 초기화
	Size_(_Tp _width, _Tp _height); //width = _width, height = _height로 초기화
	Size_(const Size_& sz);//복사 생성자. width=sz.width, height=sz.height로 초기화

	Size_& operator = (const Size_& sz);//대입 연산자 재정의
	_Tp area() const;// Size::area() 멤버 함수는 사각형 크기에 해당하는 면적(width*height)를 반환
	bool empty() const;// Size::empty() 멤버 함수는 유효하지 않은 크기면 true를 반환

	_Tp width, height; // 멤버변수. width는 사각형 영역의 가로크기, height는 사각형 영역의 세로크기를 나타냄.
};
//다양한 자료형에 대한 Size_클래스 이름 재정의
typedef Size_<int>	Size2i;
typedef Size_<int64>	Size2l;
typedef Size_<float>	Size2f;
typedef Size_<double>	Size2d;
typedef Size2i	Size;

/*
Size sz1, sz2(10, 20); // [0x0],[10x20] 생성
sz1.width = 5; sz1.height = 10; // s1z = [5x10]

사칙연산
//sz1 = [5x10], sz2 = [15x30]
Size sz3 = sz1 + sz2; // [15x30]
Size sz4 = sz1 * 2; // [10x20]
int area1 = sz4.area(); // area1 = 200
*/