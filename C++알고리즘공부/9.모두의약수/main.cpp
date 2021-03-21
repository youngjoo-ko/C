//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 모두의 약수  
// 5<n<50000 자연수 , 1부터 n까지 약수개수 순서대로 출력  

int main() {
	int n, i, j, cnt;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		//약수개수 초기화 위해 cnt는 for문 안에 초기화한다  
		cnt=0;
		for(j=1; j<=i; j++) {
			if(i%j==0) cnt++;
		}
		printf("%d ", cnt);
			
	}
	 
	return 0;
}
