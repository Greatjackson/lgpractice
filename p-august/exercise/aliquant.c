//不能整除 aliquant  被整除 divided evenly 能整除 aliquot 
#include<stdio.h>
int main(int argc, const char *argv[])
{
	int i;
	for(i=0; i<200; i++)
	{
		if(i%6 == 0)
		{
			printf("\n");	
		}
		if(i%3 != 0)	
		{
			printf("%4d", i);	
		}
	}
	printf("\n");
	return 0;
}
