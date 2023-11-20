/*AUTHOR: ATHARVA DHAIGUDE.
  PROJECT: A PROGRAM TO FIND ROOTS OF QUADRATIC EQUATION USING BHASKARA FORMULA.
  DATE: 20.11.23
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("ENETER THE NO a = ");
    scanf("%lf",&a);
    printf("\nENETER THE NO b = ");
    scanf("%lf",&b);
    printf("\nENETER THE NO c = ");
    scanf("%lf",&c);
    double d = (b * b) - (4 * a * c);
    if (d > 0)
        {
            double root1 = ((-b + sqrt(d)) / (2 * a));
            double root2 = ((-b - sqrt(d)) / (2 * a));
            printf("The roots are as follows \n root1 = %.5lf \n  root2 = %.5lf\n", root1, root2);
        }
    if (d == 0)
    {
        double root1 = ((-b + sqrt(d)) / (2 * a));
        printf("The roots are as follows \n root1 = %lf \n  root2 = %lf \n", root1, root1);
    }
    else
    {
        printf("CAN'T CALCULATE.");
    }
    

    return 0;
}
