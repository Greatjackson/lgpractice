#include<stdio.h>
#define PI 3.1415926
int main(int argc, const char *argv[])
{
	int r = 10;
	int girth, area;
	girth = 2*PI*r;
	area = PI*r*r;
	printf("the circle's girth is %d\n", girth);
	printf("the circle's area is %d\n", area);
	return 0;
}
