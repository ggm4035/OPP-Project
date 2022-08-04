/*
* 파일이름: AccountArray.cpp
* 작성자: 주성환
* 업데이트 정보: [2022-08-04] 파일버전 1.0
*/
#include "AccountArray.h"
#include "BankingCommonDec1.h"

template <typename T>
AccountArray<T>::AccountArray(int len) : arrLen(len)		//생성자
{
	arr = new T[len];
}
template <typename T>
AccountArray<T>::~AccountArray()	//소멸자
{
	delete[] arr;
}
template <typename T>
T& AccountArray<T>::operator[](int idx)		//배열 연산자 오버로딩
{
	if (arrLen <= idx || idx < 0)
	{
		cout << "Array index out of bound exception";
		exit(1);
	}
	return arr[idx];
}
template <typename T>
T AccountArray<T>::operator[](int idx) const		//배열 연산자 오버로딩
{
	if (arrLen <= idx || idx < 0)
	{
		cout << "Array index out of bound exception";
		exit(1);
	}
	return arr[idx];
}
template <typename T>
int AccountArray<T>::GetArrLen() const
{
	return arrLen;
}
