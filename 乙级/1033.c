#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char BrokenStr[68],InputStr[100001];
    fgets(BrokenStr,68,stdin);
    fgets(InputStr,100005,stdin);
    
    int i,j;
    int flag = 0;
    int PrintFlag = 1;
    int l1=0,l2=0;
    l1 = strlen(BrokenStr);
    l2 = strlen(InputStr);
    /*检查'+'是否坏掉*/
    for(i=0;i<l1;i++)
    {
        if(BrokenStr[i] == '+') 
        {
            flag = 1;
            break;
        }
    }
    /*判断是否能输出*/
    for(i=0;i<l2;i++){
        PrintFlag = 1;
         if(InputStr[i] >= 'A' && InputStr[i]<='Z' && flag==1) PrintFlag = 0;
         else{
            if(strchr(BrokenStr,toupper(InputStr[i]))){
                PrintFlag = 0;
            }
         }
         if(PrintFlag == 1) printf("%c",InputStr[i]);
    }
    printf("\n");
    return 0;
}