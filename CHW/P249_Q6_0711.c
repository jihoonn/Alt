#include <stdio.h>

int main(void) 
{
	int h,m,s;
	scanf_s("%d", &s);
	h = s / 3600;  // 1�ð��� 3600��
	m = (s - h * 3600) / 60;
	s = (s - h * 3600) % 60;  // �ð��� ���� �� ������
	printf("[h:%d, m:%d, s:%d]\n", h, m, s);
	return 0;
}

