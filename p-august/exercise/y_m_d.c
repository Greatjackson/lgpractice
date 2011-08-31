#include<stdio.h>
int main(int argc, char *argv[])
{
	int month, day, year;
	printf("please input the month day year\n");
	while(1)
	{
		scanf("%d/%d/%d",&month, &day, &year);
		if((month<0||month>12)||(day<0||day>31)||(year<0))
		{
			printf("error! please retype:");
			continue;
		}
		break;	
	}
	printf("the year month day is :%d %d %d\n", year, month, day);
	return 0;
}

