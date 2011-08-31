#include<stdio.h>
int main(int argc, char * argv[])
{
	char *p = NULL;
	int a = 1, b = 2, c = 3;
	int d = 7, e = 100;
	double f = 0.5;   //在64位的机器上占8个字节64位
	float g = 0.5;
	float i = 17.2365;
	printf("%d\n\t%d %d\n %d %d\t\b%d\n",a,b,c,a,b,c);
	printf("%d %x %f %f\n", d, e, f, g);
	printf("%f\n", i);
	printf("%%d ' \"\" ");
	printf("double:%d,point:%d\n",sizeof(double), sizeof(p));
	return 0;
}






