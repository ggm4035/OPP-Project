/*
* 파일이름: Account.cpp
* 작성자: 주성환
* 업데이트 정보: [2022-07-28] 파일버전 0.8
*/
#include "Account.h"
#include "BankingCommonDec1.h"

Account::Account(int ID, int money, char* name) :accID(ID), balance(money)
{
	cusName = new char[strlen(name) + 1];
	strcpy(cusName, name);
}
Account::Account(const Account& copy) : accID(copy.accID), balance(copy.balance)
{
	cusName = new char[strlen(copy.cusName) + 1];
	strcpy(cusName, copy.cusName);
}
Account::~Account()
{
	delete[] cusName;
}
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
Account& Account::operator=(Account& ref)	//추가된 함수
{
	accID = ref.accID;
	balance = ref.balance;
	if (cusName != NULL)
		delete[] cusName;
	cusName = new char[strlen(ref.cusName) + 1];
	strcpy(cusName, ref.cusName);
	return *this;
}
