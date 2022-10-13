#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i,d,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        c=sqrt(a);
        d=c*c;
        if(d==a)
        {
            printf("True
");
        }
        else
        printf("False
");
    }
}