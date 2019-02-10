#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n,a[100],b[100],c[100];
printf("Enter n:");
scanf("%d",&n);
printf("Enter n values");
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(k=0; k<n; k++)
{
for(i=2; i<n; i++)
{
if(n%i!=0)
{
a[k]=b[i];
}
}
for(j=2;j<n; j++)
{
if(n%j!=0)
{
c[k]= b[j];
}
}
int m=0;
for(k=0; k<n; k++)
{
if(a[m]+c[k]==n)
{
printf("yes");
}
else
{
printf("no");
}
}
m=k+1;
break;
}
getch();
}