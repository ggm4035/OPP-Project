/*
* 파일이름: AccountHandler.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-25] 파일버전 0.7
* 클래스 이름: AccountHandler
* 클래스 유형: 컨트롤(Comtrol) 클래스
*/

#ifndef __ACC_HANDLER_H_
#define __ACC_HANDLER_H_
#include "Account.h"
#include "BankingCommonDec1.h"
#include "AccountArray.h"
#include "AccountArray.cpp"

class AccountHandler
{
private:
	AccountArray<Account*> accArr;
	int accNum;
public:
	AccountHandler();
	~AccountHandler();

	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	void NormalAcc(void);
	void HighcreditAcc(void);
};
#endif // !_ACC_HANDLER_H_
