// #include "lib.h"

#include <stdio.h>
#include <math.h>


int main(){
    int diff_d,diff_m,diff_y;
    int day1,month1,year1;
    int day2,month2,year2;
    scanf("%d",&day1);
    scanf("%d",&month1);
    scanf("%d",&year1);
    scanf("%d",&day2);
    scanf("%d",&month2);
    scanf("%d",&year2);
    printf("date1:%d/%d/%d\n", day1,month1,year1);
    printf("date2:%d/%d/%d\n", day2,month2,year2);
    if(year1==year2){
        if(month1==month2){
            diff_d = abs(day1 - day2);
            printf("diff_d: %d\n", diff_d);
        }
        else if(month1 != month2){
            diff_m = abs(month1 - month2);
            diff_d = abs(day1 - day2);
            printf("diff_d: %d\n", diff_d);
            printf("diff_m: %d\n", diff_m);
        }
    }

    return 0;
}
