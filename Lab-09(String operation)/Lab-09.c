#include<stdio.h>

int main()
{
    char str[100], pat[50], rep[50], ans[50];
    int i=0, j=0, k=0, m=0, c=0, flag=0;

    printf("Enter a string: ");
    gets(str);
    printf("\nEnter a pattern to replace: ");
    gets(pat);
    printf("\nEnter a replace string: ");
    gets(rep);

    while(str[c] != '\0')
    {
        if(str[m] == pat[i])
        {
            i++;
            m++;
            if(pat[i] == '\0')
            {
                flag = 1;
                for(k = 0; rep[k] != '\0'; k++, j++) ans[j] = rep[k];
                i = 0;
                c = m;
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }

    if(flag == 1)
    {
        printf("\nResult after replacing pattern: %s\n", ans);
    }
    else
    {
        printf("\nPattern not found!\n");
    }

    return 0;
}
