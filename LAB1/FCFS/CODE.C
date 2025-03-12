#include <stdio.h>

void findWaitingTime(int n, int bt[], int wt[])
{
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
}

void findTurnaroundTime(int n, int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

void findAvg(int n, int bt[])
{
    int wt[n], tat[n];
    float total_wt = 0, total_tat = 0;

    findWaitingTime(n, bt, wt);
    findTurnaroundTime(n, bt, wt, tat);

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", total_tat / n);
}

int main()
{
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int burst_time[n];
    printf("Enter burst times:\n");
    for (int i = 0; i < n; i++)
      {
        printf("Process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    findAvg(n, burst_time);
    return 0;
}
