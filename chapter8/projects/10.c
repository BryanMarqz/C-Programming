#include <stdio.h>

#define N 8

int main(void)
{
    int user_time, hour, minute, closest, i, diff_min, diff;
    int departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    user_time = hour * 60 + minute;
    closest = 0;

    diff_min = user_time - departure[0];
    if(diff_min < 0)
        diff_min = -diff_min;

    for(i = 1; i < N; i++)
    {
        diff = user_time - departure[i];
        if(diff < 0)
            diff = -diff;
        if(diff < diff_min)
        {
            diff_min = diff;
            closest = i;
        }
    }
    
    printf("Closest depature time is: %2.2d:%2.2d\n", departure[closest] / 60, departure[closest] % 60);

    return 0;
}
