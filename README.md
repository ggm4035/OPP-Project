# OPP-Project
열혈cpp 단계별 프로젝트

OPP 단계별 프로젝트 08단계 2022-07-28

Account 클래스는 깊은복사를 진행하도록 복사생성자가 정의 되어있다. 따라서 대입 연산자도 깊은 복사가 진행되도록 정의하는것이 좋다.
그리고 AccountHandler클래스에는 배열이 멤버로 선언되어서 객체의 저장을 주도하는데, 이를 이번 챕터에서 정의한 배열클래스를 적용시키고자 한다.

실제 변경이 발생하는 헤더파일과 소스파일
Account.h, Account.cpp
AccountHandler.h

배열클래스의 추가를 위해서 다음의 소스파일과 헤더파일 추가.
AccountArray.h, AccountArray.cpp
