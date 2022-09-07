#include<stdio.h>
#include<string.h>
int main()
{
    int n, t, i;
    char str[100];
    scanf("%d %d",&n, &t);
    scanf("%s",&str);

    while (t--)
    {
        for (i = 0; i < n; i++)
        {
           if(str[i]=='B' && str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
    for(i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    return 0;
}
