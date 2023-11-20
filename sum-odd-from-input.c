/*AUTHOR: ATHARVA DAHIGUDE.
  PROJECT: SUM OF ODD NO FROM THE GIVEN NO OF INPUT.
  DATE: 20.19.23
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int n,sum=0;
    printf("Enter the no of inputs. ");
    scanf("%d",&n);
    printf("\nENTER THE NO\n");
    int*ptr = (int*) malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
       scanf("%d",(ptr+i));
    }
    for (int i = 0; i < n; i++)
    {
        if (*(ptr+i)%2==0)
        {
            continue;
        }
        else
        {
            sum+=*(ptr+i);
        }
    }
    printf("the sum of all odd no is %d",sum);
    free(ptr);
    return 0;
}