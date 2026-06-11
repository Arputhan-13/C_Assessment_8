#include <stdio.h>
int disp_2digits_even_sum6()
{
    int a=2,i, prime, c=0;
    while(a<10)
    {
    i=2;
    prime=1;
    while(i<a)
    {
    if(a%i==0)
    {
    prime=0;
    }
    i++;
    }
    if(prime==1)
    {
    c=c+1;
    }
    a++;
    }
    return c;
}

int main()
{
    int y;
    y=disp_2digits_even_sum6();
    printf("%d",y);
}