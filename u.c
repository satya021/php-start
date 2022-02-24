#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20];

printf("enter the length of array:");
scanf("%d",&n);
printf("enter the element of array:\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("travercing of the array\n");
for(i=0;i<=n-1;i++)
{
printf("%d\t",a[i]);
}
getch();
}