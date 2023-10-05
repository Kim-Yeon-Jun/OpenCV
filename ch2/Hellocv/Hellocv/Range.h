class Range
{
public:
	Range();// 기본 생성자 start=end=0으로 초기화
	Range(int _start, int _end);//두개의 정수를 인자로 받는 생성자. start = _start, end = _end로 초기화

	int size() const;//범위 크기(end-start)를 반환
	bool empty() const;//start와 end가 같으면 true반환
	static Range all(); //start = INT_MIN, end = INT_MAX로 설정한 Range 객체를 반환

	int start, end; //start : 범위의 시작, end : 범위의 끝
};

