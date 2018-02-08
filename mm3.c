#include<stdio.h>
#include<conio.h>
void main()
{
int a,b[10],i,c;
printf("Enter the size of array:\n");
scanf("%d",&a);
printf("Enter the Elements of array:\n");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
c=b[0];
for(i=0;i<a;i++)
{
if(b[i]<c)
{
c=b[i];
}}
printf("Minimum value is %d:\n",c);
getch();
}
