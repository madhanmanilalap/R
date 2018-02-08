#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c, i, t;
int sum = 0;
clrscr();
printf("Enter the first term value of the A.P. series: ");
scanf("%d", &a);
printf("Enter the total numbers in the A.P. series: ");
scanf("%d", &c);
printf("Enter the common difference of A.P. series: ");
scanf("%d", &b);
sum = (c * (2 * a + (c - 1)* b ))/ 2;
t = a + (c - 1) * b;
printf("Sum of the A.P series is: ");
for (i = a; i <= t; i = i + b )
{
if (i != t)
printf("%d + %d", i);
else
printf("%d = %d ", i, sum);
}
getch();
}
