//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1~N까지 숫자의 개수 구하기  

int main() {
	int n , cnt=0, tmp, x;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		tmp = i%10; //나머지  
		x = i/10; // 몫  
		printf("%d, %d\n", x, tmp);
		if(tmp >= 0 && x > 0) cnt +=2;
		else if(x ==0 && tmp >= 0) cnt++;
	}
	
	printf("%d", cnt);
	return 0;
}
