#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=1,i;
clrscr();
printf("Enter the Value a:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b=b*i;
}
printf("Factorial:%d",b);
getch();
}
