#include<stdio.h>
int main()
{
    long int a,b;
    int i,c=0;
    scanf("%ld",&a);
    b=a;
    for(i=0;a>0;i++)
    {
        c++;
        a=a/10;
    }
    if(c==10)
    {
        if(b/1000000000==0)
        {
            printf("Invalid");
        }
        else
        {
            printf("Valid");
        }
    }
    else
    {
        printf("Invalid");
    }
}