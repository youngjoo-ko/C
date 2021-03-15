#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 진약수의 합 (진약수란 자기 자신을 제외한 양의 약수) 

/* 1 +2 +3 +4 .. 형태로 구현할것 */

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
