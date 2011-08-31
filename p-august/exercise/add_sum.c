#include<stdio.h>
/*int main(int argc, const char *argv[])
{
	int sum = 0,i;
	for (i = 1; i < 10; i+=2) {
		sum += i;
	}
	printf("sum=%d\n",sum);
	return 0;
}*/
int main(int argc, const char *argv[])
{
	int sum=0,i,j;
	int sum1=0;
	for (i = 1; i < 10; i++) {
		sum1 = 0;
		for(j = 1;j<i;j++)
		{
			if (i%j==0) {
				sum1++;
			}
		}
		if (sum1 == 1) {
			printf("%d ",i);
			sum+=i;
		}
	}
	printf("\n");
	printf("1~100:sum = %d \n",sum);
	return 0;
}
/*int main(int argc, const char *argv[])
{
	int i = 0;
	int sum;
	int buf[];
	buf[0] = 1;
	for(i=1; i<50; i++)
	{
		buf[i] = i+2;
		num = buf[i] + buf[i+1];
	}
	return 0;
}*/
