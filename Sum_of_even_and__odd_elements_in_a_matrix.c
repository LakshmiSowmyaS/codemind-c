#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n],s=0,s1=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((a[i][j])%2==0)
            {
                s+=a[i][j];
            }
            else
            {
                s1+=a[i][j];
            }
        }
    }
    printf("%d %d",s,s1);
}