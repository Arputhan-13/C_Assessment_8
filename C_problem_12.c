#include <stdio.h>
int disp_total_2digits_odd()
{
     int a, b, c=0,d, e;
     printf("Enter the Number : ");
     scanf("%d",&a);
     while(a>10)
     {
     b=a%10;
     d=(a/10)%10;
     e=d*10+b;
     if(e%2==1)
     {
     c=c+1;
     }
     a=a/10;
     }
     return c;
}

int main()
{
    int y;
    y=disp_total_2digits_odd();
    printf("%d",y);
}