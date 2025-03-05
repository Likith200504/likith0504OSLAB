#include<stdio.h>

int secondlargest(int a[], int n)
{
    if (n < 2)
    {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int large = a[0], second = a[1];

    if (large < second)
    {
        int temp = large;
        large = second;
        second = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] > large)
        {
            second = large;
            large = a[i];
        }
        else if (a[i] > second && a[i] != large)
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

    int result = secondlargest(ar, n);

    if (result != -1)
    {
        printf("The second largest element is: %d\n", result);
    }

    return 0;
}

