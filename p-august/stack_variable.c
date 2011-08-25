#include<stdio.h>
int *addr = (int *)0;
int test(int para)
{
	int i[1000];
	static int j;
	printf("<func>&para = 0x%x\n",&para);
#if 0
	print("<func>para = 0x%x\n",para);
	printf("<func>&i = 0x%x\n",&i);
	printf("<func>i = 0x%x\n", i);
	printf("<func>&j = 0x%x\n", &j);
	printf("<func>j = 0x%x\n", j);
#endif
	addr = (int *)&i;
	printf("<func>---out---\n");
//		test (5);
		return 0;
}
int test2(int para, int p2, int p3, int p4, int p5)
{
	int k1;
	int k2;
	static int jj;
	printf("<func2>&para = 0x%x\n", &para);
	printf("<func2>para = 0x%x\n", para);
	printf("<func2>&p2 = 0x%x\n", &p2);
	printf("<func2>&p3 = 0x%x\n", &p3);
	printf("<func2>&p4 = 0x%x\n", &p4);
	printf("<func2>&p5 = 0x%x\n", &p5);
	printf("<func2>p2 = 0x%x\n", p2);
	printf("<func2>p3 = 0x%x\n", p3);
	printf("<func2>p4 = 0x%x\n", p4);
	printf("<func2>p5 = 0x%x\n", p5);
	printf("<func2>&k1 = 0x%x\n", &k1);
	printf("<func2>k1 = 0x%x\n", k1);
	printf("<func2>&k2 = 0x%x\n",&k2);
	printf("<func2>k2 = 0x%x\n", k2);
	printf("<func2>&jj = 0x%x\n", jj);
	//addr = (int *)&i;
	printf("<func2>---out---\n");
	return 0;

}
int main(int argc, const char *argv[])
{
	test(5);
	*(int *)(addr) = 0x3344;
	*(int *)(addr-1) = 0x5566;
	test2(5,6,7,8,9);

	return 0;
}
