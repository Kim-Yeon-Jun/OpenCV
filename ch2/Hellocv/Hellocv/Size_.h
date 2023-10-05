template<typename _Tp> class Size_
{
public:
	Size_(); //�⺻������. witdh=0, height=0���� �ʱ�ȭ
	Size_(_Tp _width, _Tp _height); //width = _width, height = _height�� �ʱ�ȭ
	Size_(const Size_& sz);//���� ������. width=sz.width, height=sz.height�� �ʱ�ȭ

	Size_& operator = (const Size_& sz);//���� ������ ������
	_Tp area() const;// Size::area() ��� �Լ��� �簢�� ũ�⿡ �ش��ϴ� ����(width*height)�� ��ȯ
	bool empty() const;// Size::empty() ��� �Լ��� ��ȿ���� ���� ũ��� true�� ��ȯ

	_Tp width, height; // �������. width�� �簢�� ������ ����ũ��, height�� �簢�� ������ ����ũ�⸦ ��Ÿ��.
};
//�پ��� �ڷ����� ���� Size_Ŭ���� �̸� ������
typedef Size_<int>	Size2i;
typedef Size_<int64>	Size2l;
typedef Size_<float>	Size2f;
typedef Size_<double>	Size2d;
typedef Size2i	Size;

/*
Size sz1, sz2(10, 20); // [0x0],[10x20] ����
sz1.width = 5; sz1.height = 10; // s1z = [5x10]

��Ģ����
//sz1 = [5x10], sz2 = [15x30]
Size sz3 = sz1 + sz2; // [15x30]
Size sz4 = sz1 * 2; // [10x20]
int area1 = sz4.area(); // area1 = 200
*/