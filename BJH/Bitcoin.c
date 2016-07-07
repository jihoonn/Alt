#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int Bitcoin()
{   
	int com;    //if문에서의 선택옵션 
	int amt1;   //보유량 1
	int amt2;   //보유량 2 
	float exc;  //환율 
	float won;  //  ?
	float result1;  //BT to $ 
	float result2;  //$ to BT
	
	printf("환율 : ");	
	scanf("%f", &exc);
	
	printf("원하는 명령을 선택하세요. \n\n");
	printf("1. 환율 변경\n\n2. 비트코인 → 현재가치\n\n3. 현재가치 → 비트코인\n\n");
	printf("선택할 명령 : ");
	scanf("%d", &com);
	
	if(com==1)     //환율변경 
	{
		printf("\n>환율 변경을 선택하셨습니다.\n\n>잠시만 기다려주세요.\n\n");
		printf("...\n\n");
		printf(">>이 기능은 아직 초기 버전이므로\n프로그램의 소스코드에서 수정해야 합니다.\n\n");
		printf(">>인터넷 검색 후 원하시는 환율을\n관리자에게 말씀해 주시면 바로 변경해 드립니다.\n\n");
		printf("---다른 명령을 선택하시려면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	
	else if(com==2)     //BT to $
	{
		printf("\n비트코인 → 현재가치를 선택하셨습니다.\n\n");
		printf("현재 보유하신 비트코인을 입력해주세요.\n\n");
		printf("(단위는 빼고 입력해주세요)\n\n");
		printf("보유량 : ");
		scanf("%d", &amt1);
		printf("\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 보유 비트코인을 환산한 금액은...\n\n");
		printf("총\n\n");
		result1=amt1*exc;
		printf("%f$  입니다.\n\n", result1);
		printf("---다른 명령을 원하시면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	else if(com==3)     //$ to BT
	{
		printf("\n현재가치 → 비트코인을 선택하셨습니다.\n\n");
		printf("현재 보유하고 계신 소지금을 입력해주세요\n\n");
		printf("(단위는 빼고 입력해주세요)\n\n");
		printf("보유량 : ");
		scanf("%d", &amt2);
		printf("\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 소지금을 비트코인으로 환산한 금액은...\n\n");
		printf("총\n\n");
		result2=amt2/exc;
		printf("%f BT  입니다.\n\n", result2);
		printf("---다른 명령을 원하시면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	else      //undefined
	{
		printf("\n정의되지 않은 명령입니다.\n\n");
		printf("---다른 명령을 원하시면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	system("pause");
	return 0; 
}
int Exc()
{
	int opt;
	float dollar, won;
	float exc=1179.2; 
	float result1, result2;
	
	printf("달러를 원화로 바꾸고 싶다면 1\n\n");
	printf("원화를 달러로 바꾸고 싶다면 2\n\n");
	printf("환율을 바꾸시려면 3\n\n");
	printf("                   을 입력해주세요.\n\n");
	printf("입력하기 ---> ");
	scanf("%d", &opt);
	
	if(opt==1)
	{
		printf("현재 가지고 계신 달러량을 입력해주세요.\n\n");
		scanf("%f", &dollar);
		
		printf("\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 보유 달러를 원화로 환산한 금액은...\n\n");
		printf("총\n\n");
		result1=dollar*exc;
		printf("%f원  입니다.\n\n", result1);
		printf("---다른 명령을 원하시면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	if(opt==2)
	{
		printf("현재 가지고 계신 원화량을 입력해주세요.\n\n");
		scanf("%f", &won);
		
		printf("\n변환이 완료되었습니다.\n\n");
		printf("당신의 현재 보유 원화를 달러로 환산한 금액은...\n\n");
		printf("총\n\n");
		result2=won/exc;
		printf("%f$  입니다.\n\n", result2);
		printf("---다른 명령을 원하시면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	else if(opt==3)
	{
		printf("환율바꾸기는 현재 지원되지 않습니다.\n\n");
		printf("관리자에게 문의해주세요.\n\n");
		printf("---다른 명령을 실행하려면 프로그램을 껐다가 켜주세요.---\n\n");
	}
	system("pause");
	return 0;
}
int RandNum()
{
	int i;
	int num;
	srand((int)time(NULL));
	
	
	for(i=0; i<10 ; i++)
		printf("-랜덤정수 : %d \n\n", rand());
		printf("\n사용은 그때그때 원하는 수로 설정해주세요. \n");
		printf("단, 다음 사용에는 바뀔 수 있으므로 기억해 두셔야 합니다.");
		printf("---다른 명령을 실행하려면 프로그램을 껐다가 켜주세요.---\n\n");
		
	return ;
}
int main()
{
	int choice;
	
	printf("<원하는 명령을 선택하세요.> \n\n");
	printf("랜덤숫자암호를 설정하시려면 ①\n\n");
	printf("환율을 통해 돈을 계산하시려면 ②\n\n");
	printf("비트코인을 실제가치로 바꾸시려면 ③\n\n");
	printf("을 입력해주세요.     :     ");
	scanf("%d", &choice);
	
	if(choice==1)
	{
		RandNum();
		return ;
	}
	else if(choice==2)
	{
		Exc();
		return ;
	}
	else if(choice==3)
	{
		Bitcoin();
		return ;
	}
	system("pause");
	return 0;
}
