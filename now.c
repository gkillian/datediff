#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
    time_t now;

    time(&now);
    printf("\n current date/time is : %s",ctime(&now));

    return EXIT_SUCCESS;
}
