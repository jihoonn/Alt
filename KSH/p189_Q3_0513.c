#include <stdio.h>
int main(void)
{
	int num;
	double avr;
	
	printf("너 점수가 어떻게되니? \n");
	scanf("%d", &num);
	avr=num;
	if(avr>=90.0)
		printf("당신의 학점은 A 입니다 \n");
	else if(avr>=80.0)
		printf("당신의 학점은 B 입니다 \n");
	else if(avr>=70.0)
		printf("당신의 학점은 C 입니다 \n");
	else if(avr>=50.0)
		printf("당신의 학점은 D 입니다 \n");
	else
		printf("F다 이새끼야 \n");
	
	return 0;
}
