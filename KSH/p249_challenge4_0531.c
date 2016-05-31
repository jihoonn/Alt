#include <stdio.h>

int main()
{
	int num; 
	printf("현재 당신이 소유하고 있는 금액: 3500 \n");
	printf("1. 크림빵 1개, 새우깡 2개, 콜 라 4개 \n");
	printf("2. 크림빵 2개, 새우깡 3개, 콜 라 1개 \n");
	printf("3. 크림빵 4개, 새우깡 1개, 콜 라 2개 \n");
	printf("몇번째 방법으로 구입하시겠습니까? 정수로 입력해주세요. \n");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("크림빵 1개, 새우깡 2개, 콜 라 4개 구매하셨습니다! \n");
			break;
	    case 2:
			printf("크림빵 2개, 새우깡 3개, 콜 라 1개 구매하셨습니다! \n");
			break;
		case 3:
			printf("크림빵 4개, 새우깡 1개, 콜 라 2개 구매하셨습니다! \n");
			break;
	 } 
	 return 0; 
}
