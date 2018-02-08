#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,b,c;
clrscr();
printf("Enter size of array:\n");
scanf("%d",&c);
printf("Enter the Elements of array:\n");
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
for(j=i+1;j<c;j++)
{
if(a[i]>=a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}}}
printf("Sorting order of array is:\n");
for(i=0;i<c;i++)
{
printf("%d\n",a[i]);
}
getch();
}
