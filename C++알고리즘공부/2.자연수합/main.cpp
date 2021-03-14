#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 자연수 a~b까지의 합 

int main() {
	int a, b, i, sum=0;
	cin>>a>>b; //입력받기 
	for(i=a; i<b; i++){  // 아래 출력문을 위해서 b전까지만 더하기(1+ 2+ ..) 
		cout<<i<<"+";   //출력 
		
		sum += i;  
	}
	cout<<b<<" = ";
	cout<<sum+b; // b까지 더하기  
	return 0;
}
