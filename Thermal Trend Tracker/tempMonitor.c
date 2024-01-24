#include <stdio.h>

int main()
{
    // It should prompt the user to enter the high temperature and the low temperature for each day.
    int max;
    int min;
    int num_days = 4;
    int daymax = 1;
    int daymin = 1;
    double avgtemp = 0.00;
    float avghightemp = 0.00;
    float avglowtemp = 0.00;
    printf("---=== SEP Temperature Analyzer ===---\n");
    int highValue[num_days]; // Declares an array of 10 integers.
    int lowValue[num_days];
    for (int i = 0; i <= 3; i++)
    {
        printf("Enter the high value for day %d :", i + 1);
        scanf("%d", &highValue[i]);
        printf("Enter the low value for day %d :", i + 1);
        scanf("%d", &lowValue[i]);
        /*It should validate the entries as follows:
        The high temperature should not be greater than 40.
        The low temperature should not be less than -40.
        The low temperature should not be higher than the high temperature.*/
        if (highValue[i] > 40 || lowValue[i] < -40 || lowValue[i] > highValue[i])
        {
            printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
            i = i - 1;
            continue;
        }
    }
    printf("\n");

    printf("The high temperatures were: ");

    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", highValue[i]);

        max = highValue[0];
        if (highValue[i] > max)
        {
            max = highValue[i];
            daymax = i + 1;
        }
        min = lowValue[0];
        if (lowValue[i] < min)
        {
            min = lowValue[i];
            daymin = i + 1;
        }
    }
    printf("\n");

    printf("The low temperatures were: ");

    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", lowValue[i]);

        avghightemp = highValue[i] + avghightemp;
        avglowtemp = lowValue[i] + avglowtemp;
        avgtemp = highValue[i] + lowValue[i] + avgtemp;
    }
    avghightemp = (float)avghightemp / num_days;
    avglowtemp = (float)avglowtemp / num_days;
    avgtemp = (float)avgtemp / 8;
    printf("\n");

    printf("The average LOW temperature was: %.2f\n", avglowtemp);
    printf("The average HIGH temperature was: %.2f\n", avghightemp);
    printf("The average temperature was: %.2f\n", avgtemp);
    printf("The highest temperature was %d, on day %d\n", max, daymax);
    printf("The lowest temperature was %d, on day %d\n", min, daymin);
    // It should record the temperature for four days, using arrays to keep track of
    // the high and low temperatures for each day.
    /*It should record the highest temperature and the day it occurred.
    It should record the lowest temperature and the day it occurred.
    It should calculate the average high temperature, the average low temperature, and the average temperature overall.
    At the end it should report the following:
    The average low temperature.
    The average high temperature.
    The average temperature.
    The highest temperature and the day it occurred.
    The lowest temperature and the day it occurred.*/
    return 0;
}
