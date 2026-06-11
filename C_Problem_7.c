#include <stdio.h>
int disp_reverse_number()
{
    int a, b, z=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    z=z*10+b;
    }
    return z;
}

int main()
{
    int y;
    y=disp_reverse_number();
    printf("%d",y);
}