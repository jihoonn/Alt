#include <stdio.h>

int main(void)
{
	int num;
	printf("90�� �̻� 40�� �̸��� ���� �Է�: ");
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
		printf("40�� F \n");
		break;
	defaukt:
		printf("I don't know! \n");
	}
	return 0;
}
