#include "opencv2/opencv.hpp"
#include <iostream>

//cv, std�� �������� �����ϰ� �ۼ��� �� ����
using namespace cv;
using namespace std;

int main() {
	cout << "Hello Opencv" << CV_VERSION << std::endl;

	Mat img;
	img = imread("lenna.bmp"); // imread�Լ��� ������ �ҷ��ͼ� ������ ����.
	
	//������ ����� �ҷ����� ���� ��쿡 ���� ���� ���� ó�� �ڵ�
	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}

	//������ ���������� load �Ǿ��� �� ����� �ڵ�
	//image��� �̸��� â�� img��ü�� ������ �ִ� ���� ���
	namedWindow("image");
	imshow("image", img);

	//������� Ű���� �Է��� ��ٸ��� �Լ� : waitkey()
	waitKey();

	return 0;
}