//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ¿Ã¹Ù¸¥ °ýÈ£  

int main() {
	char a[100];
	int i, cnt=0;
	scanf("%s", a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i] == '(') cnt++;
		else if(a[i] == ')') cnt--;
		if(cnt<0) break;
	}
	if(cnt==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
