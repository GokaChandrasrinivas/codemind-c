#include<stdio.h>
int main()
{
    char str[1000],ch;
    int c=0,i;
    scanf("%[^
]s",str);
    scanf(" %c",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}