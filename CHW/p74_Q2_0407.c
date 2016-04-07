#include<stdio.h>
#include<stdlib.h>

int main()  //메인함수 
{
	int num1, num2, num3; //변수선언 
	int result;
	scanf("%d %d %d", &num1, &num2, &num3); //변수입력 
	result=num1*num2+num3;  //계산결과를 result에 반환 
	printf("%dX%d+%d=%d", num1, num2, num3, result); //계산결과출력 
	system("pause");
	return 0; //함수종료 
}
