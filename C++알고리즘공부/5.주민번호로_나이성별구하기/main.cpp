//#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//  �ֹε�Ϲ�ȣ�� ���� ���, ���� �����ϱ�  
// cin cout ��ſ� scanf, printf ����Ұ� ��? ��뷮 ����� �� �ӵ��� �� ����  


int main() {
	// �Է��� ���ŷο�� �ؽ�Ʈ������ �ҷ��ͼ� ����� �� �ִ�
	freopen("input.txt", "rt", stdin); 
	
	// �ֹε�Ϲ�ȣ �ޱ� ���� char �迭 ����  
	char a[20];
	int year, age;
	scanf("%s", &a);
	/* ���̱��ϱ� ���� : 1900��� ���� 7��°���ڰ� 1(��), 2(��)�̸�,
	2000��� �̻��� 3(��), 4(��) �̴�. ���� �� �������� year�� ���Ұ��̸�
	�ֹε�Ϲ�ȣ 0,1��° ������ �ƽ�Ű�ڵ尪�� �̿��Ѵ�. 
	����? ĳ������ �迭�� �޾����Ƿ�! 
	eg) ���� 9�� �ƽ�Ű�ڵ�� 57�̴�(0�� 48) �׷��� ����ϱ� ���� 48�� ���ش�  */
	  
	if (a[7] == '1' || a[7] == '2')
	{
		year = 1900+((a[0] - 48) * 10 + (a[1] - 48));
	}
	else
	{
		year = 2000 +((a[0] - 48) * 10 + (a[1] - 48));
	}
	
	age = 2021 - year + 1;
	printf("%d", age);
	
	//�������ϱ�
	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");
	return 0;
}
