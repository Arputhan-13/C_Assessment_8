#include <stdio.h>
int disp_single_digit_prime()
{
    int a, b, c=0,i,prime;
     printf("Enter the Number : ");
     scanf("%d",&a);
     while(a!=0)
     {
     b=a%10;
     if(b<2)
     {
     prime=0;
     }
     else
     {
     i=2;
     prime=1;
     while(i<b)
     {
     if(b%i==0)
     {
     prime=0;
     }
     i++;
     }
     }
     if(prime==1) 
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
    y=disp_single_digit_prime();
    printf("%d",y);
}