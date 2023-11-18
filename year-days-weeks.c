/*AUTHOR: ATHARVA SUJIT DHAIGUDE.
 PROJECT: A PROGRAM TO CONVERT GIVEN DAYS TO YEAR, WEEKS, DAYS.
 DATE: 18.11.23
*/
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NO OF DAYS TO BE CONVERTED.\n");
    scanf("%d",&n);
    int years = n/365;
    int weeks = (n%365)/7;
    int days = n-(years*365)-(weeks*7);
    printf("Years = %d\nWeeks =%d\nDays = %d\n",years,weeks,days);
    return 0;
}