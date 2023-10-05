class Range
{
public:
	Range();// �⺻ ������ start=end=0���� �ʱ�ȭ
	Range(int _start, int _end);//�ΰ��� ������ ���ڷ� �޴� ������. start = _start, end = _end�� �ʱ�ȭ

	int size() const;//���� ũ��(end-start)�� ��ȯ
	bool empty() const;//start�� end�� ������ true��ȯ
	static Range all(); //start = INT_MIN, end = INT_MAX�� ������ Range ��ü�� ��ȯ

	int start, end; //start : ������ ����, end : ������ ��
};

