#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1~N���� M�� ����� ��  

int main() {
	int n, m, i, sum=0;
	// iostrim���� �����ϴ� ����Լ�?  cin(console in), cout(console out)
	cin>>n>>m; //ù��° �Է��� ���ڴ� n�� �ι�°�� m�� �����
	// std�� �Ź� ���°� ���ŷο�� ������ using namespace std;�� ����� 
	for(i=1; i<=n; i++){
		if(i%m==0){  // %�� ������ ������  
			sum += i;
		}
	}
	cout<<sum; //���  
	return 0;
	//�������� F9 ������ F10  
}
