#include<stdio.h>
int main()
{
    int i,n,year,month,date,year_valu,month_valu,remnant,div,all_sum,day;
    printf("Enter the number of test case: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Enter the Date Month Year: ");
        scanf("%d %d %d",&date,&month,&year);

        if((100<=year && year<200) || (800<=year && year<900) || (1500<=year && year<1600) || (2100<=year && year<2200) || (2400<=year && year<2900) || (3500<=year && year<3600) || (4200<=year && year<4300) || (4900<=year && year<5000))
        {
            if(100<=year && year<200)
            {
                year_valu=5;
                remnant=year-100;
            }
            else if(800<=year && year<900)
            {
                year_valu=5;
                remnant=year-800;
            }
            else if(1500<=year && year<1600)
            {
                year_valu=5;
                remnant=year-1500;
            }
            else if(2100<=year && year<2200)
            {
                year_valu=5;
                remnant=year-2100;
            }
            else if(2400<=year && year<2900)
            {
                year_valu=5;
                remnant=year-2400;
            }
            else if(3500<=year && year<3600)
            {
                year_valu=5;
                remnant=year-3500;
            }
            else if(4200<=year && year<4300)
            {
                remnant=year-4200;
            }
            else if(4900<=year && year<5000)
            {
                year_valu=5;
                remnant=year-4900;
            }
        }


        else if((200<=year && year<300) || (900<=year && year<1000) || (1600<=year && year<1700) || (2200<=year && year<2300) || (2900<=year && year<3000) || (3600<=year && year<3700) || (4300<=year && year<4400) || (year==5000))
        {
            if(200<=year && year<300)
            {
                year_valu=4;
                remnant=year-200;
            }
            else if(900<=year && year<1000)
            {
                year_valu=4;
                remnant=year-900;
            }
            else if(1600<=year && year<1700)
            {
                year_valu=4;
                remnant=year-1600;
            }
            else if(2200<=year && year<2300)
            {
                year_valu=4;
                remnant=year-2200;
            }
            else if(2900<=year && year<3000)
            {
                year_valu=4;
                remnant=year-2900;
            }
            else if(3600<=year && year<3700)
            {
                year_valu=4;
                remnant=year-3600;
            }
            else if(4300<=year && year<4400)
            {
                year_valu=4;
                remnant=year-4300;
            }
            else if(year==5000)
            {
                year_valu=4;
                remnant=year-5000;
            }
        }


        else if((300<=year && year<400) || (1000<=year && year<1100) || (1700<=year && year<1800) || (2300<=year && year<2400) || (3000<=year && year<3100) || (3700<=year && year<3800) || (4400<=year && year<4500))
        {
            if(300<=year && year<400)
            {
                year_valu=3;
                remnant=year-300;
            }
            else if(1000<=year && year<1100)
            {
                year_valu=3;
                remnant=year-1000;
            }
            else if(1700<=year && year<1800)
            {
                year_valu=3;
                remnant=year-1700;
            }
            else if(2300<=year && year<2400)
            {
                year_valu=3;
                remnant=year-2300;
            }
            else if(3000<=year && year<3100)
            {
                year_valu=3;
                remnant=year-3000;
            }
            else if(3700<=year && year<3800)
            {
                year_valu=3;
                remnant=year-3700;
            }
            else if(4400<=year && year<4500)
            {
                year_valu=3;
                remnant=year-4400;
            }
        }


        else if((400<=year && year<500) || (1100<=year && year<1200) || (1800<=year && year<1900) || (2400<=year && year<2500) || (3100<=year && year<3200) || (3800<=year && year<3900) || (4500<=year && year<4600))
        {
            if(400<=year && year<500)
            {
                year_valu=2;
                remnant=year-400;
            }
            else if (1100<=year && year<1200)
            {
                year_valu=2;
                remnant=year-1100;
            }
            else if (1800<=year && year<1900)
            {
                year_valu=2;
                remnant=year-1800;
            }
            else if (2400<=year && year<2500)
            {
                year_valu=2;
                remnant=year-2400;
            }
            else if (3100<=year && year<3200)
            {
                year_valu=2;
                remnant=year-3100;
            }
            else if (3800<=year && year<3900)
            {
                year_valu=2;
                remnant=year-3800;
            }
            else if (4500<=year && year<4600)
            {
                year_valu=2;
                remnant=year-4500;
            }
        }


        else if((500<=year && year<600) || (1200<=year && year<1300) || (2500<=year && year<2600) || (3200<=year && year<3300) || (3900<=year && year<4000) || (4600<=year && year<4700))
        {
            if(500<=year && year<600)
            {
                year_valu=1;
                remnant=year-500;
            }
            else if(1200<=year && year<1300)
            {
                year_valu=1;
                remnant=year-1200;
            }
            else if (2500<=year && year<2600)
            {
                year_valu=1;
                remnant=year-2500;
            }
            else if (3200<=year && year<3300)
            {
                year_valu=1;
                remnant=year-3200;
            }
            else if (3900<=year && year<4000)
            {
                year_valu=1;
                remnant=year-3900;
            }
            else if (4600<=year && year<4700)
            {
                year_valu=1;
                remnant=year-4600;
            }
        }


        else if((600<=year && year<700) || (1300<=year && year<1400) || (1900<=year && year<2000) || (2600<=year && year<2700) || (3300<=year && year<3400) || (4000<=year && year<4100) || (4700<=year && year<4800))
        {
            if(600<=year && year<700)
            {
                year_valu=0;
                remnant=year-600;
            }
            else if (1300<=year && year<1400)
            {
                year_valu=0;
                remnant=year-1300;
            }
            else if (1900<=year && year<2000)
            {
                year_valu=0;
                remnant=year-1900;
            }
            else if (2600<=year && year<2700)
            {
                year_valu=0;
                remnant=year-2600;
            }
            else if (3300<=year && year<3400)
            {
                year_valu=0;
                remnant=year-3300;
            }
            else if (4000<=year && year<4100)
            {
                year_valu=0;
                remnant=year-4000;
            }
            else if (4700<=year && year<4800)
            {
                year_valu=0;
                remnant=year-4700;
            }
        }


        else if((700<=year && year<800) || (1400<=year && year<1500) || (2000<=year && year<2100) || (2700<=year && year<2800) || (3400<=year && year<3500) || (4100<=year && year<4200) || (4800<=year && year<4900))
        {
            if(700<=year && year<800)
            {
                year_valu=6;
                remnant=year-700;
            }
            else if (1400<=year && year<1500)
            {
                year_valu=6;
                remnant=year-1400;
            }
            else if (2000<=year && year<2100)
            {
                year_valu=6;
                remnant=year-2000;
            }
            else if (2700<=year && year<2800)
            {
                year_valu=6;
                remnant=year-2700;
            }
            else if (3400<=year && year<3500)
            {
                year_valu=6;
                remnant=year-3400;
            }
            else if (4100<=year && year<4200)
            {
                year_valu=6;
                remnant=year-4100;
            }
            else if (4800<=year && year<4900)
            {
                year_valu=6;
                remnant=year-4800;
            }
        }


        if((year%4==0 && year%100!=0) || (year%400==0))
        {
            if(month==1)
            {
                month_valu=0;
            }
            else if(month==2)
            {
                month_valu=3;
            }
        }


        else
        {
            if(month==1)
            {
                month_valu=1;
            }
            else if(month==2)
            {
                month_valu=4;
            }
        }
        if((month==3) || (month==11))
        {
            month_valu=4;
        }
        else if((month==4) || (month==7))
        {
            month_valu=0;
        }
        else if(month==5)
        {
            month_valu=2;
        }
        else if(month==6)
        {
            month_valu=5;
        }
        else if(month==8)
        {
            month_valu=3;
        }
        else if((month==9) || (month==12))
        {
            month_valu=6;
        }
        else if(month==10)
        {
            month_valu=1;
        }

        div = remnant/4;

        all_sum = year_valu+remnant+div+month_valu+date;

        day = all_sum%7;

        printf("\nthis day is =========> ");
        if(day==0)
        {
            printf("Saturday\n");
        }
        else if(day==1)
        {
            printf("Sunday\n");
        }
        else if(day==2)
        {
            printf("Monday\n");
        }
        else if(day==3)
        {
            printf("Tuesday\n");

        }
        else if(day==4)
        {
            printf("Wednesday\n");
        }
        else if(day==5)
        {
            printf("Thursday\n");
        }
        else if(day==6)
        {
            printf("Friday\n");
        }
        printf("\n");
    }
    return 0;
}
