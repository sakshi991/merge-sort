#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,i,j,k,c[40],a[20],b[20];
clrscr();
printf("enter limit for A:");
scanf("%d",&n);
printf("\nlimit for B:");
scanf("%d",&m);
printf("enter elements for A:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element for B:\n ");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
i=j=k=0;
while(i<n&&j<m)
{
if(a[i]>b[j])
c[k++]=a[i++];
else
if(a[i]>b[j])
c[k++]=b[j++];
else
{
c[k++]=b[j++];
i++;
}
}
if(i<n)
{
int t;
for(t=0;t<n;t++)
c[k++]=a[i++];
}
if(j<m)
{
int t;
for(t=0;t<m;t++)
{
c[k++]=b[j++];
}
}
printf("\n");
for(k=0;k<(m+n);k++)
printf("\t\n%d",c[k]);
getch();
}
