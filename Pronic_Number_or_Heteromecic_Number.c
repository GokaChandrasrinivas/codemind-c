#include<stdio.h>
int main()
{
    int n,c=0,i,j;
    scanf("%d",&n);
    for(i=0,j=i+1;i<n/2,j<n/2;i++,j++)
    {
        if(i*j==n)
        {
            c=1;break;
        }
    }
    if(c==1)
    {
        printf("YES");
        
    }
    else{
        printf("NO");
        
    }
    
}