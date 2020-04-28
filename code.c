#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{

    time_t currentTime;
    time(&currentTime);

    struct tm *utcTime = localtime(&currentTime);

    // asctime(utcTime) will result in trailing '\n'
    // we can use strtok to remove the newline character

    char *time = asctime(utcTime);
    strtok(time, "\n");

    printf("Hello wonderful person, the current time is %s!", time);

    return 0;
}
