#include<stdio.h>
#include<conio.h>
void main()
{
int a,b[10],i,j,c,d;
clrscr();
printf("Enter the size of array:\n");
scanf("%d",&a);
printf("Enter the Elements of array:\n");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
for(j=i+1;j<a;j++)
{
if(b[i]>=b[j])
{
c=b[i];
b[i]=b[j];
b[j]=c;
}}}
printf("Sorting order is :\n");
for(i=0;i<a;i++)
{
d=b[i]/2;
}
printf("The Median =%d",d);
getch();
}
