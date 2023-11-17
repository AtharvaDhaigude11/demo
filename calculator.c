/* AUTHOR : ATHARVA DHAIGUDE.
DATE: 15/11/23.
PROJECTF: CALCULATOR.*/

#include <stdio.h>
int ptr,ptr2;
void input1(int c, int d)
{
    printf("ENTER THE FIRST NO.");
    scanf("%d", &c);
    ptr = c;
    printf("ENTER THE SECOND NO.");
    scanf("%d", &d);
    ptr2 = d;
}
void add(int a, int b)
{
    int s = a + b;
    printf("THE SUM IS%d\n", s);
}
void sub(int a, int b)
{
    int s = a - b;
    printf("THE DIFFERENCE IS%d\n", s);
}
void mult(int a, int b)
{
    int s = a * b;
    printf("THE PRODUCT IS%d\n", s);
}
void div(int a, int b)
{
    int s = a / b;
    printf("THE RESULT IS%d\n", s);
}

int main()
{
    int c, d, n;
    printf("ENTER 1 FOR ADD.\nENTER 2 FOR SUB.\nENTER 3 FOR MULTIPLICATION.\nENTER 4 FOR DIVISION.\nENTER 0 FOR TERMINATION.\n");
    do
    {
        scanf("%d", &n);
        switch (n)
        {
        case 0:
            printf("THANK YOU FOR USING.\n");
            break;
        case 1:
            input1(c, d);
            add(ptr, ptr2);
            break;
        case 2:
            input1(c,d);
            sub(ptr, ptr2);
            break;
        case 3:
            input1(c,d);
            mult(ptr, ptr2);
            break;
        case 4:
            input1(c,d);
            div(ptr, ptr2);
            break;
        default:
            printf("INVALID INPUT.\n");
            break;
        }
    } while (n > 0);
    return 0;
}