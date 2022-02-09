#include<stdio.h>
int main()
{
    char cname[10];
    char city[10];
    int eunit,pbl,lpgkg,mileage,ch=1;
    float ebu,pbf,lpg,mvg,score,avg_flighthrs,flt;
    while(ch==1)
    {
        printf("Enter Customer name");
        scanf("%s",cname);
        printf("Enter city name");
        scanf("%s",city);
        printf("Enter the electric bill units consumed");
        scanf("%d",&eunit);
        printf("Enter petrol consumed in litres");
        scanf("%d",&pbl);
        printf("Enter lpg consumed in kg");
        scanf("%d",&lpgkg);
        printf("Enter the mileage of your vehicle");
        scanf("%d",&mileage);
        ebu = eunit*12*0.85;
        pbf = pbl*12*2.296;
        lpg = lpgkg*14*2.983;
        mvg = mileage*12*0.79;
        if(avg_flighthrs<=4)
        flt = avg_flighthrs*11;
        else
        flt = avg_flighthrs*44;
        score = ebu+pbf+lpg+mvg+flt;
        if(score<=3500)
        {
            printf("Your carbon emission score is %f",score);        
            printf("Your carbon emission score is low,YOU ARE SAFE");
        }
        if(score>3500&&score<=11999)
        {
            printf("Your carbon emission score is %f",score);        
            printf("Your carbon emission score is moderate,YOU MUST TAKE PRECAUTIONS");
        }
        if(score>11999)
        {
            printf("Your carbon emission score is %f",score);        
            printf("Your carbon emission score is high,YOU MUST TAKE MAJOR STEPS TO LOWER IT");
        }
        printf("Enter 1 to continue for next customer");
        scanf("%d",&ch);
    }
    return 0;
}