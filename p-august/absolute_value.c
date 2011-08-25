#include<stdio.h>
int myabs(int x)
{
	return((x>=0)?x:(-x));
}
int main(int argc, char *argv[])
{
	int a = 10;
	if(-5)
		printf("True\n");
	else
		printf("False\n");
	printf("-5 abs is %d\n", myabs(-5));

	return 0;

}
