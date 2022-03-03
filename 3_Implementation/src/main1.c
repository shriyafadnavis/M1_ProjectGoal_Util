	#include <stdio.h>
	#include <stdlib.h>
	#include "carbon.h"					/* Add include file*/
    char cname[10];
    char ccity[10];
    
    //creating variables, required further
    int eunit, pbl, lpgkg, mileage, ch=1, avg_flighthrs, plants;
    float ebu, pbf, lpg, mvg, score, flt, tpl;
    
        //taking  input as user's electric bill units
        void elbill(int eunit){

        //calculating electric bill unit with emission factor
        ebu = eunit*12*0.85;
        }

        //taking  input as user's petrol consumed last month
        void ptbill(int pbl){

        //calculating petrol consumed in ltrs with emission factor
        pbf = pbl*12*2.296;
        }
        
        //taking  input as user's lpg consumed last month
        void lgbill(int lpgkg){

        //calculating LPG bill unit with emission factor
        lpg = lpgkg*14*2.983;
        }

        //taking  input as mileage of user's vehicle
        void mlbill(int mileage){

        //calculating vehicle's mileage with emission factor
        mvg = mileage*12*0.79;
        }

        //taking  input as user's flight hours
        void flihrs(int avg_flighthrs){

        flt = avg_flighthrs*11;

        }

        //taking  input as no.of plants planted
        void plnplt(int plants){

        //calculating plants planted with emission factor
        tpl = plants * 0.5;      
        }


	int main()
	{
       char name[10];
       char city[10];
    
       //creating variables, required further
       int eunit, pbl, lpgkg, mileage, ch=1, avg_flighthrs, plants;
       float ebu, pbf, lpg, mvg, score, flt, tpl;
       printf("Carbon Footprint Calculator\n");

        elbill(50);
        ptbill(30);
        lgbill(20);
        mlbill(3);
        flihrs(1);
        plnplt(50);

        //calculating total score
        score = ebu + pbf + lpg + mvg + avg_flighthrs + tpl;
        printf("Carbon Emission = %f",score);

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
    }
