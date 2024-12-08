#include <stddef.h>
#include <time.h> 
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char myDateStr[] = "9/18/2024 7:30:44 AM";
    int rc = 0;
    int mon, day, year;
    int hour, min, sec;
    char ampm[3]; // don't forget terminating null

    printf("myDateStr: %s\n", myDateStr);
    rc =sscanf(myDateStr, "%d/%d/%d %d:%d:%d %2s", 
            &mon, &day, &year, &hour, &min, &sec, ampm);

    printf("return code: %d\n", rc);
    printf("scanf:  %d/%d/%d %d:%d:%d %s\n",  
            mon, day, year, hour, min, sec, ampm);

}
