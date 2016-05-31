#include <stdio.h>

int main(void)
{
	int num;
	double avr;
	printf("니 점수가 몇점이니? ");
	scanf("%d", &num);
	
	switch(num/10)
	{
		case 1:
			printf("F ㅇㅇ \n");
			break;
		case 2:
			printf("F ㅇㅇ \n");
			break;
    	case 3:
			printf("F ㅇㅇ \n");
			break;
		case 4:
			printf("F ㅇㅇ \n");
			break;
		case 5:
			printf("D ㅇㅇ \n");
			break;
		case 6:
			printf("D ㅇㅇ \n");
			break;
		case 7:
			printf("C ㅇㅇ \n");
			break;
		case 8:
			printf("B ㅇㅇ \n");
			break;
		case 9:
	      	printf("A ㅇㅇ \n");
			break;
		case 10:
			printf("A ㅇㅇ \n");
			break;
	}
	return 0;
}
