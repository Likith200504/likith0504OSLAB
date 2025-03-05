#include<stdio.h>
int main()
{
    int i, j, m, n, a[100][100], rowSum, colSum;
    printf("enter no of rows and columns");
    scanf("%d %d", &m, &n);
    printf("enter matrix elements:");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("sum of each row:");
    for(i = 0; i < m; i++)
    {
        rowSum = 0;
        for(j = 0; j < n; j++)
        {
            rowSum = rowSum + a[i][j];
        }
        printf("%d ", rowSum);
    }
    printf("\nsum of each column:");
    for(j = 0; j < n; j++)
    {
        colSum = 0;
        for(i = 0; i < m; i++)
        {
            colSum = colSum + a[i][j];
        }
        printf("%d ", colSum);
    }
}
