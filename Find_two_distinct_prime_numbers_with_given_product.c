#include<stdio.h>
int main()
{
    int n,i,c=0,j,k,p1,p2;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(j=2;j<n;j++)
        {
            for(k=2;k<n;k++)
            {
                if(i%k!=0 && j%k!=0)
                {
                    if(j*i==n)
                    {
                    c++;
                    p1=j;
                    p2=i;
                    }
                }
            }
        }
    }
        if(c==0)
        {
            printf("-1");
        }
        else
        {
            printf("%d %d",p1,p2);
        }
}