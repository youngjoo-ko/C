//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ����� ���  
// 5<n<50000 �ڿ��� , 1���� n���� ������� ������� ���  

int main() {
	int n, i, j, cnt;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		//������� �ʱ�ȭ ���� cnt�� for�� �ȿ� �ʱ�ȭ�Ѵ�  
		cnt=0;
		for(j=1; j<=i; j++) {
			if(i%j==0) cnt++;
		}
		printf("%d ", cnt);
			
	}
	 
	return 0;
}
