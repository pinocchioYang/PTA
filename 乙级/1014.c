#include<stdio.h>
#include<string.h>

int main()
{
    char a[61], b[61], c[61], d[61];
    char day[7][4] = {{"MON"}, {"TUE"},{"WED"},{"THU"},{"FRI"},{"SAT"},{"SUN"}};
    scanf("%s %s %s %s", &a, &b, &c, &d);
    int round = 0;
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'Z' && round == 0)  
        {
            printf("%s ", day[a[i]-'A']);
            i++;
            break;
        }
    }
    for(i;i<strlen(a);i++)
    {
        if(a[i] == b[i])
        {
            if(a[i]>='0' && a[i]<='9')  printf("0%c:",a[i]);
            if(a[i]>='A' && a[i]<='N')  printf("%d:", a[i] - 'A'+10);
            break;
        }
    }
    for(i=0;i<strlen(c);i++)
    {
        if(c[i] == d[i] && ((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z')))    
        {
            if ((i%60) <10)  printf("0%d\n",i%60);
            else    printf("%d\n", i%60);
            break;
        }
    }

}