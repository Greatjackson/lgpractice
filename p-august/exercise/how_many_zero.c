#include<stdio.h>
int main(int argc, const char *argv[])
{
	int a = 10000;
	int i;
	int num = 0;
	for(i=0; i<5; i++)
	{
		if(a%10==0)
		{
			num++;
		}	
		a = a/10;
	}
	printf("%d\n",num);
	return 0;
}
