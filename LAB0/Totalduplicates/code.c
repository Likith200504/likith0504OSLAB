#include<stdio.h>

int main()
{
    int i, j, n, a[100], count = 0;
    printf("ENTER THE NO OF ELEMENTS:");
    scanf("%d", &n);
    printf("enter the elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
    }

    printf("TOTAL NO OF DUPLICATE ELEMENTS: %d", count);
}
