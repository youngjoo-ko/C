//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1~N까지 숫자의 개수 구하기   (방법3) 

int main() {
	int n, c=1, d=9, sum=0, res=0;
	scanf("%d", &n);
	while(sum+d<n){
		res = res + (c*d);
		sum += d;
		c++;
		d = d * 10;
	}
	res = res + ((n-sum) * c);
	printf("%d\n", res);
	
	return 0;
}
