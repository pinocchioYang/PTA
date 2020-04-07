#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char sci_express[10004];
    char *firstPart,*secondPart,*thirdPart;
    scanf("%s",&sci_express);
    
    firstPart = strtok(sci_express,".");
    secondPart = strtok(NULL,"E");
    thirdPart = strtok(NULL,"E");
    int lengthE = strlen(thirdPart);
    int lengthF = strlen(secondPart);
    int i;
    int e=0;
    for(i=lengthE-1;i>0;i--)    e += (thirdPart[i]-'0')*pow(10, lengthE-i-1);
    /*小数点往后移*/
    if(e == 0)
    {
        printf("%s.%s",firstPart,secondPart);
        return 0;
    }
    if(thirdPart[0] == '+')
    {
        printf("%s",firstPart);
        /*判断是否需要在后面补零*/
        if(e < lengthF)
        {
            for(i=0;i<e;i++)    printf("%c",secondPart[i]);
            printf(".");
            for(i=e;i<lengthF;i++)  printf("%c",secondPart[i]);
        }
        else
        {
            printf("%s",secondPart);
            for(i=0;i<e-lengthF;i++)     printf("0");
        }
    }
    else
    {
        printf("%c0.",firstPart[0]);
        for(i=0;i<e-1;i++)  printf("0");
        printf("%c",firstPart[1]);
        printf("%s",secondPart);

    }
return 0;
     
}