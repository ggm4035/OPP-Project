# OPP-Project
열혈cpp 단계별 프로젝트

OPP 단계별 프로젝트 09단계 2022-07-29
Account 클래스는 생성자에서 문자열을 동적 할당 하기 때문에, 소멸자 그리고 깊은 복사를 위한 복사 생성자와 대입연산자가 정의되어 있다. 그런데 이번에 적용할 String클래스는 메모리 공간을 동적 할당하고, 깊은 복사를 진행하는 형태로 복사생성자와 대입연산자가 정의되어 있기 때문에 이를 이용하면 Account클래스의 구현이 한결 간단해진다. 조금 더 자세히 설명하면, Account클래스의 생성자 내에서의 동적할당이 불필요해지며, 이로 인해서 직접 정의한 소멸자와 복사 생성자 그리고 대입 연산자가 모두 불필요해진다. 즉, 적절한 클래스의 등장은 다른 클래스의 정의를 간결하게 해준다.

주요 변경점: char* 형 자료형을 String 클래스로 대체 및 Account내의 복사생성자, 소멸자, 대입연산자 오버로딩 삭제.


실제 변경이 발생하는 헤더파일과 소스파일

Account.h, Account.cpp

NormalAccount.h

HighCreditAccount.h

AccountHandler.cpp



새로 추가되는 헤더파일과 소스파일

String.h, String.cpp
