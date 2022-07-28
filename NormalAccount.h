/*
* 파일이름: NormalAccount.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-25] 파일버전 0.7
* 클래스 이름: NormalAccount
* 클래스 유형: Entity 클래스, Account 상속
*/

#ifndef __NORMAL_ACC_H_
#define __NORMAL_ACC_H_
#include "Account.h"

class NormalAccount : public Account
{
private:
	double interest;
public:
	NormalAccount(int ID, int money, char* name, double Intrst);
	void Deposit(const int money);
};

NormalAccount::NormalAccount(int ID, int money, char* name, double Intrst)
	: Account(ID, money, name), interest(Intrst) { }
void NormalAccount::Deposit(const int money)
{
	Account::Deposit(money);
	Account::Deposit(money * interest / 100);
}
#endif // !_NORMAL_ACC_H_
