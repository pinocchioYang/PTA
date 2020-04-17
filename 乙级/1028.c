#include<stdio.h>
#include<string.h>
#define TYEAR 2014
#define TMONTH 9
#define TDAY 6

struct Record{
    char name[6];
    int year;
    int month;
    int day;
}Max,Min;

int main()
{
    int N,i;
    scanf("%d", &N);
    char name[6];
    char birthday[11];
    char other;
    int year,month,day;
    Max.year = TYEAR;Max.month = TMONTH;Max.day = TDAY;
    Min.year = TYEAR-200;Min.month = TMONTH;Min.day = TDAY;

    int count = 0;
    char *p;
    for(i=0;i<N;i++)
    {
        scanf("%s %s",&name, &birthday);
        /*计算年龄*/
        p = strtok(birthday,"/");
        year = (p[0]-'0')*1000 + (p[1]-'0')*100 + (p[2]-'0')*10 + (p[3]-'0');
        p = strtok(NULL, "/");
        month = (p[0]-'0')*10+(p[1]-'0');
        p = strtok(NULL,"/");
        day = (p[0]-'0')*10+(p[1]-'0');
        /*大于200 或 不符合实际*/
        if((year < TYEAR-200 || (year == TYEAR-200 && month <TMONTH) || (year == TYEAR-200 && month == TMONTH && day < TDAY))
        || ((year>TYEAR) || (year == TYEAR && month > TMONTH) || (year == TYEAR && month == TMONTH && day > TDAY)))    continue;
        else
        {
            count++;
            if(year < Max.year  || (year==Max.year&&month<Max.month) || (year==Max.year&&month==Max.month&&day<Max.day))
            {
                strcpy(Max.name,name);Max.year=year;Max.month = month;Max.day = day;
            }
             if(year > Min.year  || (year==Min.year&&month>Min.month) || (year==Min.year&&month==Min.month&&day>Max.day))
             {
                 strcpy(Min.name,name);Min.year=year;Min.month = month;Min.day = day;
             }
        }
    }
    if(count == 0)  printf("0");
    else printf("%d %s %s",count,Max.name,Min.name);
    return 0;
}