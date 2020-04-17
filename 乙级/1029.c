#include<stdio.h>
#include<string.h>
#include<ctype.h>

void strupr(char *str)
{
    for (; *str!='\0'; str++)
        *str = toupper(*str);
}

int main()
{
    char correctStr[81];
    char trueStr[81];
    char brokenKey[38] = {NULL};
    int ifSame = 0,ifPrint = 0;
    int i,j;
    int index = 0;
    scanf("%s %s",&correctStr,&trueStr);
    strupr(correctStr);
    strupr(trueStr);
    for(i=0;i<strlen(correctStr);i++)
    {
        ifSame =0;
        /*判断字符是否有输出*/
        for(j=0;j<strlen(trueStr);j++)
        {
            if(correctStr[i] == trueStr[j]) 
            {
                ifSame = 1;
                break;
            }
        }
        if(ifSame != 1)
        {
            ifPrint = 0;
            /*判断是否已经被判断过*/
            for(j=0;j<strlen(brokenKey);j++)
            {
                if(correctStr[i] == brokenKey[j])   
                {
                    ifPrint = 1;
                    break;
                }  
            }
            if(ifPrint != 1)
            {
                brokenKey[index++] = correctStr[i];
            }
        }
    }
    for(i=0;i<index;i++)    printf("%c", brokenKey[i]);
    return 0;
}