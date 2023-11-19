/*AUTHOR: ATHARVA DHAIGUDE.
 PROJECT: CONVERT GIVEN INTEGER INTO HOURS MINS AND SEC.
 DATE: 19.11.23
*/
#include<stdio.h>

int main()
{
    int n;
    printf("ENTER THE INTEGER NO TO BE CONVERTED.\n");
    scanf("%d",&n);
    int hr=n/3600;
    int min=(n%3600)/60;
    int sec= n-(hr*3600)-(min*60);
    printf("\nhr:min:sec= %d:%d:%d",hr,min,sec);
    return 0;
}