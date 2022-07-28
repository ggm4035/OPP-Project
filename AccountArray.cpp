/*
* 파일이름: AccountArray.cpp
* 작성자: 주성환
* 업데이트 정보: [2022-07-28] 파일버전 0.8
*/
#include "AccountArray.h"
#include "BankingCommonDec1.h"

AccountArray::AccountArray(int len) : arrLen(len)		//생성자
{
	arr = new ACCOUNT_PTR[len];
}
AccountArray::~AccountArray()	//소멸자
{
	delete[] arr;
}
ACCOUNT_PTR& AccountArray::operator[](int idx)		//배열 연산자 오버로딩
{
	if (arrLen <= idx || idx < 0)
	{
		cout << "Array index out of bound exception";
		exit(1);
	}
	return arr[idx];
}
ACCOUNT_PTR AccountArray::operator[](int idx) const		//배열 연산자 오버로딩
{
	if (arrLen <= idx || idx < 0)
	{
		cout << "Array index out of bound exception";
		exit(1);
	}
	return arr[idx];
}
int AccountArray::GetArrLen() const
{
	return arrLen;
}
