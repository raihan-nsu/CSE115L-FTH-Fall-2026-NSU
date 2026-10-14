#include <stdio.h>

int main(){
    int day, week, month, year;

    printf("Enter number of days: ");
    scanf("%d", &day);

    year = day/365;
    month = (day%365)/30;
    week = ((day%365)%30)/7;
    day = day - ((year*365)+(month*30)+(week*7));

    printf("It's %d years, %d months, %d weeks and %d days", year,month,week,day);

    return 0;
}
