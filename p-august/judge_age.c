#include<stdio.h>
int age_compare(int age1, int age2)
{
	if(age1 > age2)
		return age1;
	else
		return age2;
}
int main(int argc,char*argv[])
{
	int Tom_age,Bob_age,Mike_age;
	printf("Please input Tom Bob Make age:");
	scanf("%d,%d,%d", &Tom_age,&Bob_age,&Mike_age);
	if(age_compare(Tom_age,Bob_age) == Tom_age)
		printf("%d is the oldest!\n",age_compare(Tom_age, Mike_age));
	else if(age_compare(Tom_age,Bob_age) == Bob_age)
		printf("%d is the oldest!\n",age_compare(Bob_age, Mike_age));
	return 0;
}
