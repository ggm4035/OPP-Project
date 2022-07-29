/*
* 파일이름: Account.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-29] 파일버전 0.9
* 클래스 이름: Account
* 클래스 유형: Entity 클래스
*/

#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_
#include "String.h"

class Account
{
private:
	int accID;
	int balance;
	String cusName;
public:
	Account(int ID, int money, String name);

	int GetAccID() const;
	virtual void Deposit(const int money);
	int Withdraw(const int money);
	void ShowAccInfo() const;
};
#endif // !__ACCOUNT_H_
