#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int b,i;
clrscr();
printf("Enter the Number:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
b++;    
}
for(i=b-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
