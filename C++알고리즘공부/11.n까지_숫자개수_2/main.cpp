//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1~N까지 숫자의 개수 구하기  

int main() {
	int n, i, tmp, cnt=0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		tmp = i;
		while(tmp>0){
			tmp = tmp/10;
			cnt++;
		}
	}
	printf("%d개\n", cnt);
	return 0;
}
