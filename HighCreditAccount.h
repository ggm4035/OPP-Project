/*
* 파일이름: HighCreditAccount.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-25] 파일버전 0.7
* 클래스 이름: HighcreditAccount
* 클래스 유형: Entity 클래스, NormalAccount 상속
*/

#ifndef __HIGH_CRD_ACC_H_
#define __HIGH_CRD_ACC_H_
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	double CreditRate;
public:
	HighCreditAccount(int ID, int money, char* name, double intrst, double CRDRate);
	void Deposit(const int money);
};

HighCreditAccount::HighCreditAccount(int ID, int money, char* name, double intrst, double CRDRate)
	:NormalAccount(ID, money, name, intrst), CreditRate(CRDRate) {}
void HighCreditAccount::Deposit(const int money)
{
	NormalAccount::Deposit(money);
	NormalAccount::Deposit(money * CreditRate / 100);
}

#endif // !__HIGH_CRD_ACC_H_
