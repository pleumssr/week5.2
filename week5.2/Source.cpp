#include<stdio.h>
int main()
{
	float x;
	scanf_s("%f", &x);
	if (x > 0)
	{
		printf(">0");
	}
	else if (x == 0)
	{
		printf("=0");
	}
	else printf("<0");
	return 0;
}