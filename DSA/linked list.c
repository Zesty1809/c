#include <stdio.h>

void calculateWaitingTime(int burstTime[], int n, int waitingTime[])
{
    waitingTime[0] = 0; // Waiting time for the first process is always 0

    // Calculate waiting time for each process
    for (int i = 1; i < n; i++)
    {
        waitingTime[i] = burstTime[i - 1] + waitingTime[i - 1];
    }
}

void calculateTurnaroundTime(int burstTime[], int n, int waitingTime[], int turnaroundTime[])
{
    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++)
    {
        turnaroundTime[i] = burstTime[i] + waitingTime[i];
    }
}

void calculateAverageTime(int burstTime[], int n)
{
    int waitingTime[n], turnaroundTime[n], totalWaitingTime = 0, totalTurnaroundTime = 0;

    // Calculate waiting time and turnaround time
    calculateWaitingTime(burstTime, n, waitingTime);
    calculateTurnaroundTime(burstTime, n, waitingTime, turnaroundTime);

    // Calculate total waiting time and total turnaround time
    for (int i = 0; i < n; i++)
    {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }

    // Calculate average waiting time and average turnaround time
    float averageWaitingTime = (float)totalWaitingTime / n;
    float averageTurnaroundTime = (float)totalTurnaroundTime / n;

    // Print the results
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, burstTime[i], waitingTime[i], turnaroundTime[i]);
    }
    printf("\nAverage Waiting Time: %.2f\n", averageWaitingTime);
    printf("Average Turnaround Time: %.2f\n", averageTurnaroundTime);
}

int main()
{
    int n; // Number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burstTime[n]; // Burst time of each process
    printf("Enter the burst time for each process:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
    }

    calculateAverageTime(burstTime, n);

    return 0;
}