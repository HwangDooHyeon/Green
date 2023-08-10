#include<stdio.h>
#include<string>
#include<malloc.h>

using namespace std;



/*230808--------------------------------------------------*/


/* 출력 가능
int main(void)
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(string));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

		return 0;
}
*/

	/*
	char; 문자
	string; 문자열
	short; 16비트 정수
	int; 운영체제에 따라 결정
	long; 32비트 정수
	float; 소수점 7자리까지
	double; 소수점 15자리까지
	*/



/*230809--------------------------------------------------*/


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


/*--------------------------------------------------*/


// **연산자** (비트 단위 연산자)
// [&] AND 그리고
// [|] OR 또는 (\+shift)
// [^] XOR ~가 아닐 때
// [!] NOT 아니다.

// **쉬프트 연산자**
// [<<]
// [>>]

// **논리 연산자** (이항 연산자)
// [A && B] AND A와 B 모두 참일 때만 참
// [A || B] OR 또는 (\+shift) A 또는 B가 참일 때 참

// [*] 더하기
// [-] 뺴기
// [*] 곱하기
// [/] 나누기
// [%] 나머지 10/3 = 3...(1<-%)
// [=] 대입 연산자

// **연산자의 결합**
// [*=] 더해서 준다
// [-=] 뺴기
// [*=] 곱하기
// [/=] 나누기
// [%=] 나머지 10/3 = 3...(1<-%)
// 연산자 뒤에 =가 붙으면 연산이 끝난 뒤 연산자 뒤의 숫자가 연산자 앞에 적용됨 ex) 5+=2 => 7+2

// **비교 연산자** 항상 앞의 수가 기준
// [A < B] = A 보다 B가 크다
// [A > B] = A 보다 B가 작다
// [A <= B] = A 보다 B가 크거나 같다
// [A >= B] = A 보다 B가 작거나 같다

// [A == B] = A와 B가 같다
// [A != B] = A와 B가 다르다 - !는 부정 연산자

// (소괄호)
// {중괄호}
// [대괄호]

// ; 세미콜론 - 문장의 끝이란 뜻.
// : 콜론

// " " 큰 따옴표 - 문자열을 출력할 때 사용
// ' ' 작은 따옴표 - 문자를 출력할 때 사용


/* 출력 가능
// 두 값을 서로 바꿔라.라고 했을 때 
int main(void)
{
	int num1 = 10;
	int num2 = 20;

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}
*/



/*230810--------------------------------------------------*/


