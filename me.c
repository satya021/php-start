#include<stdio.h>
#include<conio.h>
void main(){
int n,i,a[20];
printf("Enter the lenght of array:");
scanf("%d",&n);
printf("Enter the elements of array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Traverscing of the array \n");
for(i=0;i<n-1;i++)
{
printf("%d\t",a[i]);
}
getch();

}