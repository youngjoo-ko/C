//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 영어단어 복구  

int main() {
	// 문자열의 길이는 100을 넘지 않고, 복구를 위해 b배열을 하나 더 만든다  
	char a[101], b[101];
	int i, p=0; 
	gets(a);
	for(i=0; a[i]!='\0'; i++){
		// 공백이 아닐때 조건문  
		if(a[i] != ' '){
			/* 
			대문자 아스키 + 32 = 소문자 아스키  
			아스키코드 대문자 A = 65, Z=90 
			 				  a = 97, z=122 */
			// 대문자 -> 소문자 변환  
			if(a[i]>=65 && a[i] <=90){
				b[p++] = a[i] +32; // p++ ? b[0]으로 들어가고 그다음 +1  
			}
			else b[p++] = a[i]; //소문자는 그대로 옮기기  
		}
	}
	printf("%s\n", b);
	
	return 0;
}
