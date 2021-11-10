#include<stdio.h>
int main()
{
    int a[5],b,c,d=0;
    printf("Enter the values:\n");
    for(b=0;b<5;b++)
    scanf("%d",&a[b]);
    printf("Enter the value to found frequency:");
    scanf("%d",&a[b]);
    for(b=0;b<5;b++)
    {
if(a[b]==c)
{
d++;
    }
    }
    printf("\n%d found %d times",c,d);
    return 0;
}
