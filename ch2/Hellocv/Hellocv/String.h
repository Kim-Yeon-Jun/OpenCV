#pragma once
class String
{
};
/*
OpenCV 4 ���� ���ĺ��� std::string Ŭ������ String Ŭ������ ������ ���� Ŭ������ ����.
String str1 = "Hello";
String str2 = "world";

String str3 = str1 + " " + str2; //"Hello world"

�� ���ڿ� ��
bool ret = (str2 == "WORLD"); // == �����ڴ� ��ҹ��ڸ� ������. => ret���� false�� �����

Ư���� ������ ���ڿ� ����
String format(const char* fmt, ...);
fmt : ���� ���ڿ�
... : ���� ����
��ȯ�� : ������ �������� ������ ���ڿ�

���� �̸��� �ش��ϴ� ���ڿ� ����
Mat imgs[3];
for (int i = 0; i < 3 ; i++){
	String filename = format("test%02d.bmp", i+1);
	imgs[i] = imread(filename);
}
*/