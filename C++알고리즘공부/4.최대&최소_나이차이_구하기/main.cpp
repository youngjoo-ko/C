#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//  �ִ� �������� ���ϱ�  


int main() {
	int n, i, a, max = -2147000000, min = 2147000000; // �Ϲ����� �ִ밪, �ּҰ�  
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>a;
		if(a>max) max = a;
		if(a<min) min = a;
		}
		cout<<max-min;
	return 0;
}
