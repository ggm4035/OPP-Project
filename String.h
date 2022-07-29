#pragma once
/*
* 파일이름: String.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-29] 파일버전 0.9
* 클래스 이름: String
* 클래스 유형: string 클래스
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
public:
	String();
	String(const char* strData);
	String(const String& ref);
	~String();

	String& operator=(const String& ref);
	String operator+(const String& ref);
	String operator+=(const String& ref);
	bool operator==(const String& ref);

	friend ostream& operator<<(ostream& os, const String& ref);
	friend istream& operator>>(istream& os, String& ref);
};
