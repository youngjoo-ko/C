//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ���ڹ迭���� ���� �����ϰ�, ������� ���ϱ�  

int main() {
	// �Է��� ���ŷο�� �ؽ�Ʈ������ �ҷ��ͼ� ����� �� �ִ�
	char a[100];
	int res  = 0, cnt = 0, i;
	scanf("%s", &a);
	// �迭���� null = '\0' , �� �迭������ ������� ��   
	// ���� 0 �� �ƽ�Ű�ڵ� = 48, 9 = 57 
	for(i=0; a[i] != '\0'; i++){
		if(a[i] >= 48 && a[i] <= 57){
			res = res * 10 + (a[i] - 48);
			// 10������ Ŀ���� �ϱ� ���� 10�� ������ 
		}
	}
	printf("%d\n", res);
	
	//����� ����
	for(i=1; i<=res; i++){
		if(res%i==0) cnt++;
	} 
	printf("%d\n", cnt);
	return 0;
}
