#include <stdio.h>
int disp_count_HCF2()
{
int a, b, c, d,f;
printf("Enter the Number 1 : ");
scanf("%d",&a);
printf("Enter the Number 2 : ");
scanf("%d",&b);
if(a>b)
{
c=a;
d=b;
}
else
{
c=b;
d=a;
}
while(d!=0)
{
f=c%d;
c=d;
d=f;
}
return c;
}

int main()
{
    int y;
    y=disp_count_HCF2();
    printf("%d",y);
}