#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1~N까지 M의 배수의 합  

int main() {
	int n, m, i, sum=0;
	// iostrim에서 제공하는 출력함수?  cin(console in), cout(console out)
	cin>>n>>m; //첫번째 입력한 숫자는 n에 두번째는 m에 저장됨
	// std를 매번 쓰는게 번거로우면 맨위에 using namespace std;를 쓰면됨 
	for(i=1; i<=n; i++){
		if(i%m==0){  // %는 나머지 연산자  
			sum += i;
		}
	}
	cout<<sum; //출력  
	return 0;
	//컴파일은 F9 실행은 F10  
}
