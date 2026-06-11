#include <stdio.h>
int disp_rsum()
{
    int a=6,b=0;
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
    c=disp_rsum();
    printf("%d",c);
    
}