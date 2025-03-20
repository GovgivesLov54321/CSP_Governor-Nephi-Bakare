// Governor-Nephi Bakare, Time of Day C
#include <stdio.h>
#include <time.h>



int main(void){
    time_t now = time(NULL);
    struct tm * tm_struct = localtime(&now);
    int ahora = tm_struct->tm_hour;
    printf("%d\n", ahora);

    if (ahora <= 12){
        printf("TOP OF THE MORNING TO YOU!");
    }else if (ahora <= 16){
        printf("Good afternoon, user!");
    }else{
        printf("Good evening, user!");
    }
    return 0;
}