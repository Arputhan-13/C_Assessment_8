#include <stdio.h>
int disp_2digit_ones5()
{
    int a,b, c=0;
    a=10;
    while(a<100)
    {
    b=a%10;
    if(b==5)
    {
    c=c+a;
    }
    a++;
    }
    return c;
}

int main()
{
    int y;
    y=disp_2digit_ones5();
    printf("%d",y);
}