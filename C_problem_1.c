#include <stdio.h>
int disp_sum()
{
    int a=5,b=0;
    while(a>0)
    {
    b=b+a;
    a--;
    }
    return b;
    
}
int main()
{
    int c;
    c=disp_sum();
    printf("%d",c);
    
}