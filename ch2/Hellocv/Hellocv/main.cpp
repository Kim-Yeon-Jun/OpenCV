#include "opencv2/opencv.hpp"
#include <iostream>

//cv, std를 본문에서 생략하고 작성할 수 있음
using namespace cv;
using namespace std;

int main() {
	cout << "Hello Opencv" << CV_VERSION << std::endl;

	Mat img;
	img = imread("lenna.bmp"); // imread함수로 파일을 불러와서 변수에 저장.
	
	//파일을 제대로 불러오지 못한 경우에 대한 예외 오류 처리 코드
	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}

	//파일이 정상적으로 load 되었을 때 실행될 코드
	//image라는 이름의 창에 img객체가 가지고 있는 파일 출력
	namedWindow("image");
	imshow("image", img);

	//사용자의 키보드 입력을 기다리는 함수 : waitkey()
	waitKey();

	return 0;
}