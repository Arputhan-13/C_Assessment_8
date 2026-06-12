#include <stdio.h>
int disp_total_odd_digits()
{
     int a, b, c=0;
     printf("Enter the Number : ");
     scanf("%d",&a);
     while(a!=0)
     {
     b=a%10;
     if(b%2==1)
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
    y=disp_total_odd_digits();
    printf("%d",y);
}