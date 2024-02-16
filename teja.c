#include<stdio.h>
int main()
{
int a[50],n,i;
printf("the size of an array");
scanf("%d",&n);
printf("enter the elements of ann array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("elements of array before reversing");
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("\n");
printf("after the reversing of array");
for(i=n-1;i>=0;i--)
printf("%d",a[i]);
}









