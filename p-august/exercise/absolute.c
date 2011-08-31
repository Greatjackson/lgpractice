#include<stdio.h>
int abs(int a)
{
	if(a > 65535)
		return ~(a -1);
	else
		return a;
}
int main(int argc, const char *argv[])
{
	int a;
	printf("input a number:\n");
	scanf("%d", &a);
	printf("the number's abslute is %d\n", abs(a));
	return 0;
}
