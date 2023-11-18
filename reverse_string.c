/* AUTHOR: ATHARVA SUJIT DHAIGUDE.
  PROJECT: REVERSEING A STRING WITHOUT STANDARD WITHOUT ANY DEFAULT FUNCTION.
  DATE: 18.11.23
*/

#include <stdio.h>
int main()
{
    int len = 0;
    printf("INPUT DATA UPTO 10 CHARACTERS.\n");
    char str[10];
    fgets(str, 10, stdin);
    for (int i = 1; str[i] != '\0'; i++)
    {
        len++;
    }
    for (int j = len; j >= 0; j--)
    {
        printf("%c",str[j]);
    }
    return 0;
}
