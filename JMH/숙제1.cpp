#include <stdio.h>

int main(void)
{
	int num;
	printf("90점 이상 40점 미만의 정수 입력: ");
	scanf("%d", &num);
	
	switch(num)
	{
	case (80.0<90.0):
		printf("A \n");
		break;
	case 80:
		printf("B \n");
		break;
	case 70:
	    printf("C \n");
	    break;
	case 60:
		printf("D \n");
		break;
	case 5:
		printf("E \n");
		break;
	case 6:
		printf("40은 F \n");
		break;
	defaukt:
		printf("I don't know! \n");
	}
	return 0;
}
