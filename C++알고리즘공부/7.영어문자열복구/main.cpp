//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ����ܾ� ����  

int main() {
	// ���ڿ��� ���̴� 100�� ���� �ʰ�, ������ ���� b�迭�� �ϳ� �� �����  
	char a[101], b[101];
	int i, p=0; 
	gets(a);
	for(i=0; a[i]!='\0'; i++){
		// ������ �ƴҶ� ���ǹ�  
		if(a[i] != ' '){
			/* 
			�빮�� �ƽ�Ű + 32 = �ҹ��� �ƽ�Ű  
			�ƽ�Ű�ڵ� �빮�� A = 65, Z=90 
			 				  a = 97, z=122 */
			// �빮�� -> �ҹ��� ��ȯ  
			if(a[i]>=65 && a[i] <=90){
				b[p++] = a[i] +32; // p++ ? b[0]���� ���� �״��� +1  
			}
			else b[p++] = a[i]; //�ҹ��ڴ� �״�� �ű��  
		}
	}
	printf("%s\n", b);
	
	return 0;
}
