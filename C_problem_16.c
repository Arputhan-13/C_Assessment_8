#include <stdio.h>
int disp_biggest_4digit_div7_9()
{
    int a=1000, b;
    while(a<10000)
    {
    if(a%7==0 && a%9==0)
    {
    b=a;
    }
    a++;
    }
    return b;
}

int main()
{
    int y;
    y=disp_biggest_4digit_div7_9();
    printf("%d",y);
}