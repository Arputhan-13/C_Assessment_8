#include <stdio.h>
int disp_sum_all_digits()
{
    int a, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    c=c+b;
    }
    return c;
}

int main()
{
    int y;
    y=disp_sum_all_digits();
    printf("%d",y);
}