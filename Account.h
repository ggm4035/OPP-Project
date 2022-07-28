/*
* 파일이름: Account.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-28] 파일버전 0.8
* 클래스 이름: Account
* 클래스 유형: Entity 클래스
*/

#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_

class Account
{
private:
	const int accID;
	int balance;
	char* cusName;
public:
	Account(int ID, int money, char* name);
	Account(const Account& copy);
	~Account();

	int GetAccID() const;
	virtual void Deposit(const int money);
	int Withdraw(const int money);
	void ShowAccInfo() const;
	Account& operator=(Account& ref);	//추가된 부분
};
#endif // !__ACCOUNT_H_
