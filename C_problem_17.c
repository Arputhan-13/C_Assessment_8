#include <stdio.h>
int disp_count_sum14()
{
    int a=1, b=0, c, v, m, n, f, j;
    while(a<100000)
    {
    c=a%10;
    v=(a/10)%10;
    m=(a/100)%10;
    n=(a/1000)%10;
    j=(a/10000)%10;
    f=c+v+m+n+j;
    if(f==14)
    {
    b=b+1;
    }
    a++;
    }
    return b;
}

int main()
{
    int y;
    y=disp_count_sum14();
    printf("%d",y);
}