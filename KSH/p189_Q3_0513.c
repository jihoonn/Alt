#include <stdio.h>
int main(void)
{
	int num;
	double avr;
	
	printf("�� ������ ��ԵǴ�? \n");
	scanf("%d", &num);
	avr=num;
	if(avr>=90.0)
		printf("����� ������ A �Դϴ� \n");
	else if(avr>=80.0)
		printf("����� ������ B �Դϴ� \n");
	else if(avr>=70.0)
		printf("����� ������ C �Դϴ� \n");
	else if(avr>=50.0)
		printf("����� ������ D �Դϴ� \n");
	else
		printf("F�� �̻����� \n");
	
	return 0;
}
