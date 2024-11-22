#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
    time_t t;

    time(&t);
    printf("\n current date/time is : %s",ctime(&t));

    return EXIT_SUCCESS;
}
