#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    fgets(str, 100, stdin);
    int strlength = strlen(str);
    /*最后一个字母  strlength-2    */
    int wordlength =0;
    for(int i=strlength-2;i>=0;i--)
    {
        if(str[i] == ' ')
        {
            for(int j=1;j<=wordlength;j++)
            {
                printf("%c",str[i+j]);
            }
            printf(" ");
            wordlength = 0;
        }
        else    wordlength++;
    }
    for(int j=0;j<wordlength;j++)  printf("%c",str[j]);
    
}