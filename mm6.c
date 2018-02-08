#include <stdio.h>
#include <conio.h>
void main() 
{
int a,i,j,n;
printf("enter the size:\n");
scanf("%d",&a);
int b[a];
for(i=1;i<=a;i++)
{
scanf("%d",&b[i]);	
}
for(i=1;i<=a;i++)
{
	
for(j=i+1;j<=a;j++)
{
	
if(b[i]>b[j])
{
	n=b[i];
	b[i]=b[j];
	b[j]=n;
}
}
}
printf("\n Output\n %d",b[(a/2+1)]);
getch();
}
