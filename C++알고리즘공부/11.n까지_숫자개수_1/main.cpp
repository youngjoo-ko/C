//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1~N���� ������ ���� ���ϱ�  

int main() {
	int n , cnt=0, tmp, x;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		tmp = i%10; //������  
		x = i/10; // ��  
		printf("%d, %d\n", x, tmp);
		if(tmp >= 0 && x > 0) cnt +=2;
		else if(x ==0 && tmp >= 0) cnt++;
	}
	
	printf("%d", cnt);
	return 0;
}
