//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//  주민등록번호로 나이 계산, 성별 구분하기  
// cin cout 대신에 scanf, printf 사용할것 왜? 대용량 입출력 시 속도가 더 빠름  


int main() {
	// 입력이 번거로우면 텍스트파일을 불러와서 사용할 수 있다
	freopen("input.txt", "rt", stdin); 
	
	// 주민등록번호 받기 위한 char 배열 선언  
	char a[20];
	int year, age;
	scanf("%s", &a);
	/* 나이구하기 요점 : 1900년대 생은 7번째숫자가 1(남), 2(녀)이며,
	2000년대 이상은 3(남), 4(녀) 이다. 따라서 이 기준으로 year를 구할것이며
	주민등록번호 0,1번째 숫자의 아스키코드값을 이용한다. 
	이유? 캐릭터형 배열로 받았으므로! 
	eg) 숫자 9의 아스키코드는 57이다(0은 48) 그래서 계산하기 위해 48을 빼준다  */
	  
	if (a[7] == '1' || a[7] == '2')
	{
		year = 1900+((a[0] - 48) * 10 + (a[1] - 48));
	}
	else
	{
		year = 2000 +((a[0] - 48) * 10 + (a[1] - 48));
	}
	
	age = 2021 - year + 1;
	printf("%d", age);
	
	//성별구하기
	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");
	return 0;
}
