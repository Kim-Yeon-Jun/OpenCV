#pragma once
class String
{
};
/*
OpenCV 4 버전 이후부터 std::string 클래스와 String 클래스는 완전히 같은 클래스로 통합.
String str1 = "Hello";
String str2 = "world";

String str3 = str1 + " " + str2; //"Hello world"

두 문자열 비교
bool ret = (str2 == "WORLD"); // == 연산자는 대소문자를 구별함. => ret에는 false가 저장됨

특정한 형식의 문자열 생성
String format(const char* fmt, ...);
fmt : 형식 문자열
... : 가변 인자
반환값 : 지정한 형식으로 생성된 문자열

파일 이름에 해당하는 문자열 생성
Mat imgs[3];
for (int i = 0; i < 3 ; i++){
	String filename = format("test%02d.bmp", i+1);
	imgs[i] = imread(filename);
}
*/