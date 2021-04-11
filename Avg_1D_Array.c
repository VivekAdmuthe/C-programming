

#include <stdio.h>
int main()
{
    int marks[20], i, n, sum = 0;
    float average;
    printf("average of maximum 20 elements will be calculated\n ");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }

    average = sum / n;
    printf("Average = %f", average);

    return 0;
}
