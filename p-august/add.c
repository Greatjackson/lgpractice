#include<stdio.h>
#define MAX 5
#define MIN 0
int globle_var = 0x1234;
const int const_num = 0x9999;
int add (int,int);
int sub(int ,int);
int a_out = 10;
int b_out = 20;
int main(int argc, const char *argv[])
{
	int a = 100;
	int b = 200;
	int *p = 0x804972c;
	printf("<main.c>address a = 0x%x\n",&a);
	printf("<main.c>address b = 0x%x\n",&b);
	printf("<main.c>address a_out = 0x%x\n",&a_out);
	printf("<main.c>address b_out = 0x%x\n",&b_out);
	add(a,b);
	*p = 123;
	add(a,b);
	printf("sta_a = %d\n", *p);

	return 0;
}

int adda = 1;
int addb = 2;
int add(int a , int b)
{
	int aa = 1;
	int bb = 1;
	static int sta_a = 1;
	printf("<add.c>address static a =0x%x \n", &sta_a);
	printf("<add.c>static a = %d\n", sta_a);
	printf("<add.c>address aa = 0x%x \n", &aa);
	printf("<add.c>address bb = 0x%x \n", &bb);
	printf("<add.c>address adda = 0x%x \n", &adda);
	printf("<add.c>address addb = 0x%x \n", &addb);
	return a+b;
	
}
