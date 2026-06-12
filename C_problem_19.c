#include <stdio.h>
int disp_LCM3()
{
    int a, b, c, d,f, t,u,q,r, p, s, g;
    printf("Enter the Number 1 : ");
    scanf("%d",&a);
    printf("Enter the Number 2 : ");
    scanf("%d",&b);
    printf("Enter the Number 3 : ");
    scanf("%d",&u);
    if(a>b)
    {
    c=a;
    d=b;
    }
    else
    {
    c=b;
    d=a;
    }
    while(d!=0)
    {
    f=c%d;
    c=d;
    d=f;
    }
    t=a*b;
    g=t/c;
    if(g>u)
    {
    q=g;
    p=u;
    }
    else
    {
    q=u;
    p=g;
    }
    while(p!=0)
    {
    s=q%p;
    q=p;
    p=s;
    }
    r=g*u;
    g=r/q;
    return g;
}

int main()
{
    int y;
    y=disp_LCM3();
    printf("%d",y);
}