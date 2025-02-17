#include <stdio.h>

int main(){
    int totalmin;
    int years;
    int days;
    int hours;


    printf("enter a number of minutes(integer):");
    scanf("%d",&totalmin);

    years = totalmin/525600;
    totalmin -= years*525600;

    days = totalmin/1440;
    totalmin -= days*1440;

    hours = totalmin/60;
    totalmin -= hours*60;


    printf("Years: %d\n",years);
    printf("Days: %d\n",days);
    printf("Hours: %d\n",hours);
    printf("Minutes: %d\n",totalmin);

}