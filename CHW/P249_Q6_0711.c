#include <stdio.h>

int main(void) 
{
	int h,m,s;
	scanf_s("%d", &s);
	h = s / 3600;  // 1시간은 3600초
	m = (s - h * 3600) / 60;
	s = (s - h * 3600) % 60;  // 시간과 분을 뺀 나머지
	printf("[h:%d, m:%d, s:%d]\n", h, m, s);
	return 0;
}

