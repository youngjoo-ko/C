#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ������� �� (������� �ڱ� �ڽ��� ������ ���� ���) 

/* 1 +2 +3 +4 .. ���·� �����Ұ� */

int main() {
	int n, i, sum=1;
	cin>>n;
	cout<<"1";
	for(i=2; i<n; i++){
		if(n%i==0){
			cout<<" + "<<i;
			sum += i;
		}
	}
	cout<<" = "<<sum;
	return 0;
}
