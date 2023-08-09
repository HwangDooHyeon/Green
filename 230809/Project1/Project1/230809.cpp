#include<stdio.h>
#include<string>

using namespace std;

/* 출력 가능
int main(void)
{
	char str[] = "ABCDEF";

	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	printf("%c\n", str[4]);
	printf("%c\n", str[5]);
	printf("%c\n", str[6]);

	printf("%s\n", str);
}
*/

/*
%s\n 문자열을 출력
%c\n 정수를 출력
*/

/*
아스키 코드의 0번은 NUL값 32번은 Space값
NUL값은 실제론 존재하지 않는 반면, Space값은 실제로 존재함
하지만 둘 다 공백으로 표현됨.
*/

/*--------------------------------------------------*/

/* 출력 가능
class 사람 {
	
private:
	int 직업;
	int 키;
	int 이름;
	int 주소;
//데이터는 웬만하면 비공개로 설정 (기본이 private)

public:
	void 숨쉬기()
	{
		printf("복식호흡");
	}
//기능은 보통 공개로 설정
};

int main(void)
{
	사람 me;

	me.숨쉬기();

	return 0;
}
*/

/*
기능과 데이터를 합침: 캡슐화
대체로 대답을 듣지만 못 들을 수도 있음: 기능
*/

/*--------------------------------------------------*/

/* 출력 가능
class 사람 {

private:
	char* 직업;
	int 키;
	int 이름;
	int 주소;

public:
	char* Get직업() { return 직업; }
	void Set직업(char* _jop) { 직업 = _jop; }
	};

int main(void)
{
	사람 me;
	me.Set직업((char*)"학생");
	printf("%s\n", me.Get직업());

	me.Set직업((char*)"프로그래머");
	printf("%s\n", me.Get직업());

	return 0;
}
*/

