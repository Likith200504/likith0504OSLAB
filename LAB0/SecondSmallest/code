#include<stdio.h>

int secondsmallest(int a[], int n)
{
    if (n < 2)
    {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int small = a[0], second = a[1];

    if (small > second)
    {
        int temp = small;
        small = second;
        second = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] < small)
        {
            second = small;
            small = a[i];
        }
        else if (a[i] < second && a[i] != small)
        {
            second = a[i];
        }
    }

    return second;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ar[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int result = secondsmallest(ar, n);

    if (result != -1)
    {
        printf("The second smallest element is: %d\n", result);
    }

    return 0;
}
