// Your C code here
#include <stdio.h>
#include <time.h>

int main()
{

    time_t currentTime;
    time(&currentTime);

    struct tm *utcTime = localtime(&currentTime);
    char timeStr[64];
    
    strftime(timeStr, 64, "today is %d/%m/%Y and it is %H:%M:%S now!", utcTime);
    
    printf("Hello wonderful person, %s", timeStr);

    return 0;
}
