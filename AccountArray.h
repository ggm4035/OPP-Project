/*
* 파일이름: AccountArray.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-28] 파일버전 0.8
* 클래스 이름: AccountArray
* 클래스 유형: 배열 클래스
*/

#ifndef __ACC_ARR_H_
#define __ACC_ARR_H_
#include "Account.h"
#include "BankingCommonDec1.h"

typedef Account * ACCOUNT_PTR;

class AccountArray
{
private:
	ACCOUNT_PTR* arr;
	int arrLen;

	AccountArray(const AccountArray& ref)  { }
	AccountArray operator=(const AccountArray& ref) { }
public:
	AccountArray(const int len = MAX_NUM);
	~AccountArray();

	ACCOUNT_PTR& operator[](int idx);
	ACCOUNT_PTR operator[](int idx) const;
	int GetArrLen() const;
};
#endif // !__ACC_ARR_H_
