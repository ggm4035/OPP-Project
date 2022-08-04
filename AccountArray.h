/*
* 파일이름: AccountArray.h
* 작성자: 주성환
* 업데이트 정보: [2022-08-04] 파일버전 1.0
* 클래스 이름: AccountArray
* 클래스 유형: 배열 클래스
*/

#ifndef __ACC_ARR_H_
#define __ACC_ARR_H_
#include "Account.h"
#include "BankingCommonDec1.h"

template <typename T>
class AccountArray
{
private:
	T* arr;
	int arrLen;
	AccountArray(const AccountArray& ref) { }
	AccountArray operator=(const AccountArray& ref) { }
public:
	AccountArray(int len = MAX_NUM);
	~AccountArray();
	T& operator[](int idx);
	T operator[](int idx) const;
	int GetArrLen() const;
};
#endif // !__ACC_ARR_H_
