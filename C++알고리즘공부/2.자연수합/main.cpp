#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// �ڿ��� a~b������ �� 

int main() {
	int a, b, i, sum=0;
	cin>>a>>b; //�Է¹ޱ� 
	for(i=a; i<b; i++){  // �Ʒ� ��¹��� ���ؼ� b�������� ���ϱ�(1+ 2+ ..) 
		cout<<i<<"+";   //��� 
		
		sum += i;  
	}
	cout<<b<<" = ";
	cout<<sum+b; // b���� ���ϱ�  
	return 0;
}
