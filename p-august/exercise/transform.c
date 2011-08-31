#include<stdio.h>
char A_to_a(char a)
{
	char i ;
	i = a + 32;
	return i;
}
int main(int argc, const char *argv[])
{
	char a;
	char b;
	while(1)
	{
		printf("please input a capital letter:\n");
		scanf("%c", &a);
		getchar();
		if(a<64||a>90)
		{
			printf("not is a word\n");	
			continue;
		}
		break;
	}
	b = A_to_a(a);
	printf("the result is :%c\n", b);
	return 0;
}

