//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 문자배열에서 숫자 추출하고, 약수개수 구하기  

int main() {
	// 입력이 번거로우면 텍스트파일을 불러와서 사용할 수 있다
	char a[100];
	int res  = 0, cnt = 0, i;
	scanf("%s", &a);
	// 배열끝에 null = '\0' , 즉 배열끝까지 읽으라는 뜻   
	// 문자 0 의 아스키코드 = 48, 9 = 57 
	for(i=0; a[i] != '\0'; i++){
		if(a[i] >= 48 && a[i] <= 57){
			res = res * 10 + (a[i] - 48);
			// 10단위로 커지게 하기 위해 10을 곱해줌 
		}
	}
	printf("%d\n", res);
	
	//약수의 개수
	for(i=1; i<=res; i++){
		if(res%i==0) cnt++;
	} 
	printf("%d\n", cnt);
	return 0;
}
