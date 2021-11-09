#include<stdio.h>
int main()
{
	int a[4],i;
	printf("Enter the array element:");
	for(i=0;i<=3;i++)
	scanf("%d",&a[i]);
	for(i=3;i>=0;i--)
	printf("%d",a[i]);
	return 0;
}
