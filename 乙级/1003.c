#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void Judge(char *s)
{
    int fA_num=0, mA_num=0, bA_num=0;
    int indexA = 0;
    int P_num=0, T_num=0;
    bool  NotherChar = true;
    char ctmp;
    for (int i=0;i<strlen(s);i++)
    {
        ctmp = *(s+i);
        if(ctmp == 'A')
        {
            switch (indexA)
            {
            case 0:
                fA_num++;
                break;
            case 1:
                mA_num++;
                break;
            case 2:
                bA_num++;
                break;
            default:
                break;
            }
        }
        else if(ctmp == 'P')
        {
            P_num++;
            indexA = 1;
        }
        else if(ctmp == 'T')
        {
            T_num++;
            indexA = 2;
        }
        else
        {
            NotherChar = false;
            break;
        }
    }

        if(P_num == 1 && T_num == 1 && (fA_num+mA_num+bA_num) && fA_num*mA_num == bA_num && NotherChar)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
}

int main()
{
    int n;
    char str[100]={NULL};
    //输入的字符串个数
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%s", &str);
        Judge(str);
    }
    return 0;
}