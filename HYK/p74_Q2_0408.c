#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1,num2,num3,result;
	printf("3 개 의 정수를 입력하시오. : ");
	scanf("%d %d %d",&num1,&num2,&num3); 
	
	result=num1*num2+num3;
	
	printf("%d*%d+%d=%d\n",num1,num2,num3,result);
	
	system("PAUSE");
	return 0;
}
