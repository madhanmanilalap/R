#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,b=0;
clrscr();
printf("Enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
b++;
}
for(i=1;i<=b;i++)
{
if(i%2!=0)
{
printf("%c",a[i]);
}}
printf("\t");
for(i=0;i<=b;i++)
{
if(i%2==0)
{
printf("%c",a[i]);    
}
}
getch();
}
