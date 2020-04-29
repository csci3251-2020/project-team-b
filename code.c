// Your C code here
#include <stdio.h>
#include <time.h>

int main()
{

    time_t currentTime;
    time(&currentTime);

    struct tm *utcTime = localtime(&currentTime);
    printf("Hello wonderful person, the current time is %s!", asctime(utcTime));

    return 0;
}