#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("%d  is the  greatest:",a);
	if(b>a&&b>c)
	printf("%d  is the greatest:",b);
	if(c>b&&c>a)
	printf("%d  is the  greatest:",c);
	return 0;
}