//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 자연수 자리수의 합 구하고 최대인 자연수 찾기  

int digit_sum(int x){
	int tmp, sum=0;
	while(x>0){
		tmp = x%10;
		sum += tmp;
		x = x/10;
	}
	return sum;
} 

/*함수설명
숫자 125가 매개변수 x로 넘어오면 0보다 크기때문에 while문을 돈다.
125를 10으로 나눈 나머지는 tmp=5, sum=5, x=12 가된다.
x가 0보다 크므로 while문을 다시 돈다.
12를 10으로 나눈 나머지는 tmp=2, sum=5+2=7, x=1 이 된다.
x가 0보다 크므로 while문을 다시 돈다.
tmp=1, sum=7+1=8, x=0 while문 끝!
결과값 8을 리턴한다. 
*/


int main() {
	int n,i, num, sum, max = -2147000000, res;  
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &num);
		sum = digit_sum(num);
		if(sum>max){
			max=sum;
			res=num;
		}
		// 자리수합이 여러개인 경우 자연수가 큰 값을 반환하게 하자 
		else if(sum==max){
			if(num>res) res=num;
		} 
	}
	printf("%d", res);
	return 0;
}
