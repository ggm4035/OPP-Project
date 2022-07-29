/*
* 파일이름: Account.cpp
* 작성자: 주성환
* 업데이트 정보: [2022-07-29] 파일버전 0.9
* 기존의 복사생성자, 소멸자, 대입연산자는 String클래스의 사용으로 불필요해져서 삭제.
*/
#include "Account.h"
#include "BankingCommonDec1.h"

Account::Account(int ID, int money, String name) :accID(ID), balance(money), cusName(name) { }		//생성자
int Account::GetAccID() const
{
	return accID;
}
void Account::Deposit(const int money)
{
	balance += money;
}
int Account::Withdraw(const int money)	//출금액 반환, 부족 시 0 반환
{
	if (balance < money)
		return 0;
	balance -= money;
	return money;
}
void Account::ShowAccInfo() const
{
	cout << "계좌ID: " << accID << endl;
	cout << "이름: " << cusName << endl;
	cout << "잔액: " << balance << endl;
}
