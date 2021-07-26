/* Given the following list of temperatures in degrees Fahrenheit: 
tempF = [63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 
82, 64, 75 , 90, 64, -999, 99, 82, 95, 82]
o Remove Non-relevant data (-999)
o Create a second list (tempC) that contains temperatures in degrees Celsius and 
print on screen.
o Find the maximum value in tempC and print in Console
o Find the average of the tempC and print in console */

#include <stdio.h>
int quantity(int list[]);
int p_list(int n, int list[], int list_two[]);
int converter(int value);
int max_value(int n, int list[]);
int average(int n, int list[]);
int main()
{
    int tempF[50] = {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75, 90, 64, -999, 99, 82, 95, 82};
    int n1 = quantity(tempF), new_tempF[50], count = 0;
    for (int i = 0; i < n1; i++)
    {
        if (tempF[i] == 0)
        {
            break;
        }
        if (tempF[i] != -999)
        {
            new_tempF[count] = tempF[i];
            count += 1;
        }
    }
    n1 = quantity(new_tempF);
    int tempC[n1];
    for (int i = 0; i < n1; i++)
    {
        tempC[i] = converter(new_tempF[i]);
    }
    printf("\nFarenheit    Celsius \n");
    p_list(n1, new_tempF, tempC);
    max_value(n1, tempC);
    average(n1, tempC);
    return 0;
}
int quantity(int list[])
{
    int n = 0;
    for (int i = 0; i < 50; i++)
    {
        if (list[i] == 0)
        {
            break;
        }
        n += 1;
    }
    return n;
}
int p_list(int n, int list[], int list_two[])
{
    for (int i = 0; i < n; i++)
    {
        printf("   %d -------- %d\n", list[i], list_two[i]);
    }
}
int converter(int value)
{
    int result;
    result = (value - 32) / 1.8;
    return result;
}
int max_value(int n, int list[])
{
    int max = -100;
    for (int i = 0; i < n; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
        }
    }
    printf("Max value: %d", max);
}
int average(int n, int list[])
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += list[i];
    }
    result /= n;
    printf("\nAverage: %d \n", result);
}
