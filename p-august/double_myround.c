#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double myround(double x)
{
	double y;
	if(x - floor(x) < 0.5)
	{
		printf("%f floor is %f\n", x, floor(x));
		y = floor(x);

	}
	else
	{
		printf("%f cell is %f\n", x, cell(x));
		y = cell(x);
	}
	return y;
}
int main(int argc,  char *argv[])
{
	double x;
	if(2 != argc)
	{
		printf("Usage:argc,please input double!\n");
		return 0;

	}
	x = atof(argv[1]);             //将字符型数据转换成浮点型
	printf("After round , %f is %f\n", x, myround(x));

	return 0;
}
