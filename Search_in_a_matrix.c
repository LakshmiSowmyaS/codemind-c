#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int A[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int s,flag=0;
    scanf("%d",&s);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s==A[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}