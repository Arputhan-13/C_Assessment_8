#include <stdio.h>
int count_total_digits()
{
    int a, b, c=0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10;
    a=a/10;
    c=c+1;
    }
    return c;
}

int main()
{
    int y;
    y=count_total_digits();
    printf("%d",y);
}