#include"stdio.h"
#include"carbon.h"
void carbonemit()
{
    char cname[10];
    char city[10];
    
    //creating variables, required further
    int eunit, pbl, lpgkg, mileage, ch=1, avg_flighthrs, plants;
    float ebu, pbf, lpg, mvg, score, flt, tpl;
    
    while(ch==1)
    {
        //taking  input as user's name
        printf("Enter user name");
        scanf("%s",cname);

        //taking  input as user's city
        printf("\nEnter city name");
        scanf("%s",city);

        //taking  input as user's electric bill units
        printf("\nEnter the electric bill units consumed");
        scanf("%d",&eunit);

        //taking  input as user's petrol consumed last month
        printf("\nEnter petrol consumed in litres");
        scanf("%d",&pbl);

        //taking  input as user's lpg consumed last month
        printf("\nEnter lpg consumed in kg");
        scanf("%d",&lpgkg);

        //taking  input as mileage of user's vehicle
        printf("\nEnter the mileage of your vehicle");
        scanf("%d",&mileage);

        //taking  input as user's flight hours
        printf("\nEnter the average flight hours you travelled ");
        scanf("%d",&avg_flighthrs);

        //if flight hours our less than 4
        if(avg_flighthrs<=4)
        {
        flt = avg_flighthrs*11;
        }
        //if flight hours our more than 4
        else
        {
        flt = avg_flighthrs*44;
        score = ebu+pbf+lpg+mvg+flt;
        }

        //taking  input as no.of plants planted
        printf("\nEnter the number of plants planted");
        scanf("%d", &plants);        

        //calculating electric bill unit with emission factor
        ebu = eunit*12*0.85;

        //calculating petrol consumed in ltrs with emission factor
        pbf = pbl*12*2.296;

        //calculating LPG bill unit with emission factor
        lpg = lpgkg*14*2.983;

        //calculating vehicle's mileage with emission factor
        mvg = mileage*12*0.79;

        //calculating plants planted with emission factor
        tpl = plants * 0.5;

        //calculating total score
        score = ebu + pbf + lpg + mvg + avg_flighthrs + tpl;

printf("\n\nYour carbon emission score due to transporation is %f",avg_flighthrs+mvg+pbf);
        //if score is below 3500, then the steps to be taken
        if(score<=3500)
        {
            printf("\n\nYour carbon emission score is %f",score);        
            printf("\n\nYour carbon emission score is low, YOU ARE SAFE");
        }
        //if score is between 3500 and 11999, then the steps to be taken
        if(score>3500&&score<=11999)
        {
            printf("\n\nYour carbon emission score is %f",score);        
            printf("\n\nYour carbon emission score is moderate, YOU MUST TAKE PRECAUTIONS");
        }
        //if score is above 11999, then the steps to be taken
        if(score>11999)
        {
            printf("\n\nYour carbon emission score is %f",score);        
            printf("\n\nYour carbon emission score is high, YOU MUST TAKE MAJOR STEPS TO LOWER IT");
        }
        //asking user to continue or proceed
        printf("\n\nEnter 1 to continue for next user");
        scanf("%d",&ch);
    }
    //return 0;

}
    printf("Carbon Footprint Calculator\n\n");
    carbonemit();
    //return 0;
