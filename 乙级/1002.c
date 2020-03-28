#include<stdio.h>
#include<string.h>

char *num2ch = "lingyiersansiwuliuqibajiu";
int strmap[10][2] = {{0,4},{4,2},{6,2},{8,3},{11,2},{13,2},{15,3},{18,2},{20,2},{22,3}};

int Sum(char* n)
{
    int sum = 0;
    for(int i =0;i<strlen(n);i++)
    {
        sum +=(*(n+i)-48);
    }
    return sum;
}


void getString(char* r, int sum)
{
    char t[4] = "";
    for(int i=0;i<strmap[(sum%10)][1];i++)
    {
        t[i] = num2ch[strmap[sum%10][0]+ i];
    }
    if((sum / 10) == 0)
    {
        strcat(r,t);
    }
    else
    {
        getString(r, sum/10);
        strcat(r," "); strcat(r, t);
        
    }
    
    
}


int main()
{
    char  n[101]={NULL};
    int sum;
    char result[12]="";
    scanf("%s", &n);

    sum =Sum(n);
    getString(result, sum);
    printf("%s", result);

    return 0;
}