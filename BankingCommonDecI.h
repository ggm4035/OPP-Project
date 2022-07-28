/*
* 파일이름: BankingCommonDec1.h
* 작성자: 주성환
* 업데이트 정보: [2022-07-25] 파일버전 0.7
*/

#ifndef __BNK_COM_DEC_H_
#define __BNK_COM_DEC_H_

#include <iostream>
#include <cstring>
#define MAX_NUM 100			//Account 배열의 개수

using namespace std;
const int NAME_LEN = 20;	//이름 길이

// 프로그램 사용자의 선택메뉴
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQURE, EXIT };

// 신용등급
enum { CreditA = 7, CreditB = 4, CreditC = 2 };			//enum 상수는 중복이 가능하다. ex) MAKE = 1, NORMAL = 1 (답안에서 참조)

// 계좌의 종류
enum { NORMAL = 1, HIGHCREDIT = 2 };

#endif
