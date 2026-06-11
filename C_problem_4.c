#include <stdio.h>
int disp_2digit_odd_sum7()
{
    int a, c,g;
    a=10;
    while(a<100)
    {
    if(a%2==1)
    {
    c=(a/10)%10;
    if(c==7)
    {
    g=g+a;
    }
    }
    a++;
    }
    return g;
}

int main()
{
    int y;
    y=disp_2digit_odd_sum7();
    printf("%d",y);
}