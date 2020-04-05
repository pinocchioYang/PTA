#include<stdio.h>

struct Mooncake{
    float Stock;
    float Price;
    float Value;
};
int main()
{
    /*种类 & 总需求*/
    int Class=0,Requirement=0;
    scanf("%d %d",&Class,&Requirement);
    struct Mooncake MoonCake[Class];
    int i,j;
    for(i=0;i<Class;i++)    scanf("%f", &MoonCake[i].Stock);
    for(i=0;i<Class;i++)    
    {
        scanf("%f",&MoonCake[i].Value);
        MoonCake[i].Price = MoonCake[i].Value/ MoonCake[i].Stock;
    }
    /*按单价Price排序*/
    struct Mooncake Tmp;
    for(i=0;i<Class;i++)
    {
        for(j=i+1;j<Class;j++)
        {
            if(MoonCake[i].Price<MoonCake[j].Price) 
            {
                Tmp = MoonCake[i];
                MoonCake[i] = MoonCake[j];
                MoonCake[j] = Tmp;
            }
        }
    }
    double Profit=0;
    for(i=0;i<Class;i++)
    {
        if((Requirement-MoonCake[i].Stock) > 0) 
        {
            Profit += MoonCake[i].Price*MoonCake[i].Stock;
            Requirement = Requirement - MoonCake[i].Stock;
        }
        else
        {
            Profit += MoonCake[i].Price*Requirement;
            Requirement = 0;
            break;
        }
    }


    printf("%.2f\n",Profit);
    return 0;
}