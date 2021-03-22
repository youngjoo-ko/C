//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// �ڿ��� �ڸ����� �� ���ϰ� �ִ��� �ڿ��� ã��  

int digit_sum(int x){
	int tmp, sum=0;
	while(x>0){
		tmp = x%10;
		sum += tmp;
		x = x/10;
	}
	return sum;
} 

/*�Լ�����
���� 125�� �Ű����� x�� �Ѿ���� 0���� ũ�⶧���� while���� ����.
125�� 10���� ���� �������� tmp=5, sum=5, x=12 ���ȴ�.
x�� 0���� ũ�Ƿ� while���� �ٽ� ����.
12�� 10���� ���� �������� tmp=2, sum=5+2=7, x=1 �� �ȴ�.
x�� 0���� ũ�Ƿ� while���� �ٽ� ����.
tmp=1, sum=7+1=8, x=0 while�� ��!
����� 8�� �����Ѵ�. 
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
		// �ڸ������� �������� ��� �ڿ����� ū ���� ��ȯ�ϰ� ���� 
		else if(sum==max){
			if(num>res) res=num;
		} 
	}
	printf("%d", res);
	return 0;
}
