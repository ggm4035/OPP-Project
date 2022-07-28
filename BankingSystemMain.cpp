/*
* 파일이름: main.cpp
* 작성자: 주성환
* 업데이트 정보: [2022-07-25] 파일버전 0.7
*/

#include "BankingCommonDec1.h"
#include "AccountHandler.h"

int main(void)
{
	AccountHandler handler;
	int choice;

	while (1)
	{
		handler.ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			handler.MakeAccount();
			break;
		case DEPOSIT:
			handler.DepositMoney();
			break;
		case WITHDRAW:
			handler.WithdrawMoney();
			break;
		case INQURE:
			handler.ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection..." << endl;
		}
	}
	return 0;
}
