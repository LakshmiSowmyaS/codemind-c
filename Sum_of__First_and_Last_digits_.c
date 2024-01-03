#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d",&n);
    int i=n;
    while(i!=0)
    {
        y=i;
        i/=10;
    }
    printf("%d",n%10+y);
}