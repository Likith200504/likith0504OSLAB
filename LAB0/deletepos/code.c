#include<stdio.h>

int main()
{
    int i, n, pos, a[100];
    printf("ENTER THE NO OF ELEMENTS:");
    scanf("%d", &n);
    printf("enter the elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the position to delete:");
    scanf("%d", &pos);
    if(pos < 1 || pos > n)
    {
        printf("INVALID POSITION");
    }
    else
    {
        for(i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        printf("array after deletion:");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}


