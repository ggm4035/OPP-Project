/*
* 파일이름: AccountHandler.cpp
* 작성자: 주성환
* 업데이트 정보: [2022-07-25] 파일버전 0.7
*/

#include "AccountHandler.h"
#include "BankingCommonDec1.h"
#include "Account.h"
#include "HighCreditAccount.h"
#include "NormalAccount.h"

AccountHandler::AccountHandler() : accNum(0)
{
	for (int i = 0; i < MAX_NUM; i++)
		accArr[i] = NULL;
}
AccountHandler::~AccountHandler()
{
	for (int i = 0; i < accNum; i++)
		delete accArr[i];
}
void AccountHandler::ShowMenu(void) const
{
	cout << "-----Menu------" << endl;;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}
void AccountHandler::MakeAccount(void)
{
	int choice;

	cout << "[계좌종류선택]" << endl;
	cout << "1.보통예금계좌 2.신용신뢰계좌" << endl;
	cout << "선택: ";
	cin >> choice;

	switch (choice)
	{
	case NORMAL:
		NormalAcc();
		break;
	case HIGHCREDIT:
		HighcreditAcc();
		break;
	default:
		cout << "유효하지 않은 명령입니다." << endl;
		return;
	}
}
void AccountHandler::DepositMoney(void)
{
	int money;
	int id;

	cout << "[입	금" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}
void AccountHandler::WithdrawMoney(void)
{
	int money;
	int id;

	cout << "[출	금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}

			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}
void AccountHandler::ShowAllAccInfo(void) const
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}
void AccountHandler::NormalAcc(void)
{
	int id, balance;
	char name[NAME_LEN];
	double interestRate;

	cout << "[보통예금계좌 개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << "이자율: "; cin >> interestRate;
	cout << endl;

	accArr[accNum++] = new NormalAccount(id, balance, name, interestRate);
	cout << "계좌개설 완료" << endl;
}
void AccountHandler::HighcreditAcc(void)
{
	int id, balance, creditRate;
	char name[NAME_LEN];
	double interestRate;

	cout << "[신용신뢰계좌 개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << "이자율: "; cin >> interestRate;
	cout << "신용등급(1toA, 2toB, 3toC): "; cin >> creditRate;
	cout << endl;

	switch (creditRate)
	{
	case 1:	//creditA
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interestRate, CreditA);
		break;
	case 2:	//creditB
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interestRate, CreditB);
		break;
	case 3:	//creditC
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interestRate, CreditC);
		break;
	default:
		cout << "유효하지 않은 값입니다." << endl;
		return;
	}
	cout << "계좌개설 완료" << endl;
}
