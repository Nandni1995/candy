#include<stdio.h>
#include<conio.h>
void main()
{
int n,c=0,s=0,r[50],i;
clrscr();
printf("Enter the number of children:");
scanf("%d",&n);
printf("Enter the rating of each children:");
for(i=0;i<n;i++)
{
scanf("%d",&r[i]);
}
for(i=0;i<n;i++)
{
if(r[i]<r[i+1])
{
c=c+1;
s=s+c;
}
else
s=s+c;
}
printf("%d",s);
getch();
}
