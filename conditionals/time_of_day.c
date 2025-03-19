// Governor-Nephi Bakare, Time of Day C
#include <stdio.h>
#include <time.h>



int main(void){
    time_t rawtime;
    struct tm * timeinfo;

    int horas = time(NULL);

    if (horas <= 12){
        printf("TOP OF THE MORNING TO YOU!");
    }       
    return 0;
}