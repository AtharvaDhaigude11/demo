/*AUTHOR: ATHARVA DHAIGUDE.
  PROJECT: IT PRINTS PATTERNS LIKE
           3 3 3 3 3 
           3 2 2 2 3
           3 2 1 2 3 
           3 2 2 2 3 
           3 3 3 3 3
    DATE: 19.11.23
*/

#include <stdio.h>
int main()
{
    int n, m, e;
    scanf("%d", &n);
    m = n * 2 - 1;
    int arr[m][m];
    e = 0;
    int c = m;
    for (; 0 < n; n--)
    {
        for (int j = c - 1; e <= j; j--)
        {
            for (int k = c - 1; e <= k; k--)
            {
                arr[j][k] = n;
            }
        }
        c--;
        e++;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    return 0;
}